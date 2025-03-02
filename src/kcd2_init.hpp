#pragma once

namespace big
{
	struct table_patch_info_t
	{
		std::string m_mod_name;
		std::vector<uint8_t> m_patched_data;
	};

	inline std::map<std::string, std::map<std::string, std::vector<table_patch_info_t>>> g_table_name_to_added_line_to_info;
	inline std::map<std::string, std::map<std::string, std::vector<uint8_t>>> g_table_name_to_modified_line_to_original_data;
	inline std::map<std::string, std::map<std::string, std::vector<table_patch_info_t>>> g_table_name_to_modified_line_to_info;

	struct vanilla_mod_system_info
	{
		std::string m_name;
		std::string m_mod_id;
		std::string m_description;
		std::string m_author;
		std::string m_version;
		std::string m_folder_name;
		std::string m_created_on;
		std::vector<std::string> m_loaded_paks;
	};

	inline std::map<std::string, std::string> g_cvar_name_to_help_text;
	inline std::map<std::string, std::string> g_console_command_name_to_help_text;

	inline std::vector<vanilla_mod_system_info> g_vanilla_mods;
	inline std::unordered_set<std::string> g_modded_xml_filenames;
	inline std::unordered_map<std::string, std::vector<std::string>> g_xml_filename_to_modifications;

	void apply_xml_patches(std::string &originalFileContent, const std::vector<std::string> &patchFileContents);

	inline __int64 g_CEntitySystem = 0;

	struct EntityInfo
	{
		std::string name;
		std::string class_name;
		uint32_t id;
		uint32_t id_mask;
		uint32_t id_salt;
		float position[3];
		bool is_active;
		bool is_hidden;
		std::string layer_name;
		uint16_t layer_id = 0;
		std::string guid;
	};

	inline std::vector<EntityInfo> g_entities;

	inline std::vector<std::string> g_lua_execute_buffer_queue;

	void CEntitySystem_DumpEntity(__int64 CEntitySystem_ptr, __int64 entity);
	void CEntitySystem_DumpEntities(__int64 CEntitySystem_ptr);

	inline std::unordered_set<std::string> g_fmod_events;

	using fmodstudio_loadbankfile_t = __int64 (*)(void *this_, const char *filename, __int64 fmod_studio_load_bank_flags, void **bank);
	inline fmodstudio_loadbankfile_t fmodstudio_loadbankfile_orig = nullptr;

	using fmodstudio_getevent_t = __int64 (*)(void *fmodstudio_event_system_this, const char *event_name, void **event_description_result);

	inline fmodstudio_getevent_t fmodstudio_getevent_orig = nullptr;

	using fmodstudio_bank_unload_t                              = __int64 (*)(void *this_);
	inline fmodstudio_bank_unload_t fmodstudio_bank_unload_orig = nullptr;

	inline void *g_fmodstudio_instance = nullptr;

	template<class T>
	inline void ForceWrite(T &dst, const T &src)
	{
		DWORD old_flag;
		::VirtualProtect(&dst, sizeof(T), PAGE_EXECUTE_READWRITE, &old_flag);
		dst = src;
		::VirtualProtect(&dst, sizeof(T), old_flag, &old_flag);
	}

	template<class F>
	inline bool EachImportFunction(HMODULE module, const char *dllname, const F &f)
	{
		if (module == 0)
		{
			return false;
		}

		size_t ImageBase             = (size_t)module;
		PIMAGE_DOS_HEADER pDosHeader = (PIMAGE_DOS_HEADER)ImageBase;
		if (pDosHeader->e_magic != IMAGE_DOS_SIGNATURE)
		{
			return false;
		}
		PIMAGE_NT_HEADERS pNTHeader = (PIMAGE_NT_HEADERS)(ImageBase + pDosHeader->e_lfanew);

		size_t RVAImports = pNTHeader->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress;
		if (RVAImports == 0)
		{
			return false;
		}

		IMAGE_IMPORT_DESCRIPTOR *pImportDesc = (IMAGE_IMPORT_DESCRIPTOR *)(ImageBase + RVAImports);
		while (pImportDesc->Name != 0)
		{
			if (!dllname || stricmp((const char *)(ImageBase + pImportDesc->Name), dllname) == 0)
			{
				IMAGE_IMPORT_BY_NAME **func_names = (IMAGE_IMPORT_BY_NAME **)(ImageBase + pImportDesc->Characteristics);
				void **import_table               = (void **)(ImageBase + pImportDesc->FirstThunk);
				for (size_t i = 0;; ++i)
				{
					if ((size_t)func_names[i] == 0)
					{
						break;
					}
					const char *funcname = (const char *)(ImageBase + (size_t)func_names[i]->Name);
					f(funcname, import_table[i]);
				}
			}
			++pImportDesc;
		}
		return true;
	}

	void kcd2_init();
} // namespace big
