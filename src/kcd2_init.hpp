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

	struct cvar_data
	{
		std::string m_help_text;
		std::string m_default_value;
	};

	inline std::map<std::string, cvar_data> g_cvar_name_to_cvar_data;
	inline std::map<std::string, std::string> g_console_command_name_to_help_text;

	inline std::vector<vanilla_mod_system_info> g_vanilla_mods;
	inline std::unordered_set<std::string> g_modded_xml_filenames;
	inline std::unordered_map<std::string, std::vector<std::string>> g_xml_filename_to_modifications;

	void apply_xml_patches(std::string &originalFileContent, const std::vector<std::string> &patchFileContents);

	struct Archetype
	{
		virtual ~Archetype() = default; // offset 0

		uint64_t unk_8;
		uint64_t unk_16;
		const char *m_name;
	};

	struct EntityClass
	{
		virtual ~EntityClass()        = default; // offset 0
		virtual void Pad1()           = 0;       // offset 8
		virtual const char *GetName() = 0;       // offset 16
	};

	struct CEntity
	{
		virtual ~CEntity()              = default; // offset 0
		virtual uint32_t GetId()        = 0;       // offset 8
		virtual __int64 GetGuid()       = 0;       // offset 16
		virtual EntityClass *GetClass() = 0;       // offset 24
		virtual void Pad4()             = 0;
		virtual void Pad5()             = 0;
		virtual void Pad6()             = 0;
		virtual void Pad7()             = 0;
		virtual void Pad8()             = 0;
		virtual void Pad9()             = 0;
		virtual void Pad10()            = 0;
		virtual void Pad11()            = 0;
		virtual void Pad12()            = 0;
		virtual void Pad13()            = 0;
		virtual void Pad14()            = 0;
		virtual void Pad15()            = 0;
		virtual void Pad16()            = 0;
		virtual void Pad17()            = 0;
		virtual const char *GetName()   = 0; // offset 144
		virtual void Pad19()            = 0;
		virtual void Pad20()            = 0;
		virtual void Pad21()            = 0;
		virtual void Pad22()            = 0;
		virtual void Pad23()            = 0;
		virtual void Pad24()            = 0;
		virtual void Pad25()            = 0;
		virtual void Pad26()            = 0;
		virtual void Pad27()            = 0;
		virtual void Pad28()            = 0;
		virtual void Pad29()            = 0;
		virtual void Pad30()            = 0;
		virtual void Pad31()            = 0;
		virtual void Pad32()            = 0;
		virtual void Pad33()            = 0;
		virtual void Pad34()            = 0;
		virtual void Pad35()            = 0;
		virtual void Pad36()            = 0;
		virtual void Pad37()            = 0;
		virtual void Pad38()            = 0;
		virtual void Pad39()            = 0;
		virtual void Pad40()            = 0;
		virtual void Pad41()            = 0;
		virtual void Pad42()            = 0;
		virtual void Pad43()            = 0;
		virtual void Pad44()            = 0;
		virtual void Pad45()            = 0;
		virtual void GetPos(float *pos) = 0; // offset 368
		virtual void Pad47()            = 0;
		virtual void Pad48()            = 0;
		virtual void Pad49()            = 0;
		virtual void Pad50()            = 0;
		virtual void Pad51()            = 0;
		virtual void Pad52()            = 0;
		virtual bool IsActive()         = 0; // offset 424
		virtual void Pad54()            = 0;
		virtual void Pad55()            = 0;
		virtual void Pad56()            = 0;
		virtual void Pad57()            = 0;
		virtual void Pad58()            = 0;
		virtual void Pad59()            = 0;
		virtual void Pad60()            = 0;
		virtual void Pad61()            = 0;
		virtual void Pad62()            = 0;
		virtual bool IsHidden()         = 0; // offset 504

		uint64_t unk_8;
		uint64_t unk_16;
		uint64_t unk_24;
		uint64_t unk_32;
		Archetype *m_archetype;
	};

	static_assert(offsetof(CEntity, m_archetype) == 40);

	inline std::vector<CEntity *> g_entities;

	struct CEntitySystem
	{
		virtual ~CEntitySystem()                            = default; // offset 0
		virtual void Pad1()                                 = 0;
		virtual void Pad2()                                 = 0;
		virtual void Pad3()                                 = 0;
		virtual void Pad4()                                 = 0;
		virtual void Pad5()                                 = 0;
		virtual void Pad6()                                 = 0;
		virtual void Pad7()                                 = 0;
		virtual void Pad8()                                 = 0;
		virtual void Pad9()                                 = 0;
		virtual void Pad10()                                = 0;
		virtual void Pad11()                                = 0;
		virtual void Pad12()                                = 0;
		virtual void Pad13()                                = 0;
		virtual void Pad14()                                = 0;
		virtual void Pad15()                                = 0;
		virtual void Pad16()                                = 0;
		virtual void Pad17()                                = 0;
		virtual void Pad18()                                = 0;
		virtual void Pad19()                                = 0;
		virtual void Pad20()                                = 0;
		virtual __int64 GetEntityIterator()                 = 0; // offset 168
		virtual void Pad22()                                = 0;
		virtual void Pad23()                                = 0;
		virtual void Pad24()                                = 0;
		virtual void Pad25()                                = 0;
		virtual void Pad26()                                = 0;
		virtual void Pad27()                                = 0;
		virtual void Pad28()                                = 0;
		virtual void Pad29()                                = 0;
		virtual void Pad30()                                = 0;
		virtual void Pad31()                                = 0;
		virtual void Pad32()                                = 0;
		virtual void Pad33()                                = 0;
		virtual void Pad34()                                = 0;
		virtual void Pad35()                                = 0;
		virtual void Pad36()                                = 0;
		virtual void Pad37()                                = 0;
		virtual void Pad38()                                = 0;
		virtual void Pad39()                                = 0;
		virtual void Pad40()                                = 0;
		virtual void Pad41()                                = 0;
		virtual void Pad42()                                = 0;
		virtual void Pad43()                                = 0;
		virtual void Pad44()                                = 0;
		virtual void Pad45()                                = 0;
		virtual void Pad46()                                = 0;
		virtual void Pad47()                                = 0;
		virtual void Pad48()                                = 0;
		virtual void Pad49()                                = 0;
		virtual void Pad50()                                = 0;
		virtual void Pad51()                                = 0;
		virtual void Pad52()                                = 0;
		virtual void Pad53()                                = 0;
		virtual void Pad54()                                = 0;
		virtual void Pad55()                                = 0;
		virtual void Pad56()                                = 0;
		virtual void Pad57()                                = 0;
		virtual void Pad58()                                = 0;
		virtual void Pad59()                                = 0;
		virtual void Pad60()                                = 0;
		virtual void Pad61()                                = 0;
		virtual void Pad62()                                = 0;
		virtual void Pad63()                                = 0;
		virtual void Pad64()                                = 0;
		virtual void Pad65()                                = 0;
		virtual void Pad66()                                = 0;
		virtual void Pad67()                                = 0;
		virtual void Pad68()                                = 0;
		virtual void Pad69()                                = 0;
		virtual void Pad70()                                = 0;
		virtual __int64 GetEntityLayerData(CEntity *entity) = 0; // offset 568
	};

	inline CEntitySystem *g_CEntitySystem = nullptr;

	struct EntityInfo
	{
		std::string name;
		std::string name_lower;
		std::string class_name;
		std::string class_name_lower;
		std::string archetype_name;
		std::string archetype_name_lower;
		uint32_t id;
		std::string id_string;
		uint32_t id_mask;
		uint32_t id_salt;
		std::string layer_name;
		std::string layer_name_lower;
		uint16_t layer_id = 0;
		std::string guid;
	};

	inline std::unordered_map<CEntity *, EntityInfo> g_entity_infos;
	inline std::vector<int> g_entities_filtered;

	struct Vec3
	{
		float x, y, z;
	};

	struct IPhysicalEntity
	{
		virtual ~IPhysicalEntity()                              = default;
		virtual void Pad1()                                     = 0;
		virtual void Pad2()                                     = 0;
		virtual void Pad3()                                     = 0;
		virtual void Pad4()                                     = 0;
		virtual void Pad5()                                     = 0;
		virtual void Pad6()                                     = 0;
		virtual void Pad7()                                     = 0;
		virtual void Pad8()                                     = 0;
		virtual void Pad9()                                     = 0;
		virtual CEntity *GetForeignData(long long foreign_id)   = 0;
		virtual long long GetiForeignData(long long foreign_id) = 0;
	};

	struct ray_hit_t
	{
		float dist;

		IPhysicalEntity *pCollider;

		int ipart;
		int partid;
		short surface_idx;
		short idmatOrg;
		int foreignIdx;
		int iNode;
		Vec3 pt;
		Vec3 n;
		int bTerrain;
		int iPrim;
		ray_hit_t *next;
	};

	void RayWorldIntersection();

	inline uintptr_t g_ISystem = 0;

	inline std::vector<std::string> g_lua_execute_buffer_queue;

	void CEntitySystem_DumpEntity(CEntitySystem *entity_system, CEntity *entity);
	void CEntitySystem_DumpEntities(CEntitySystem *CEntitySystem_ptr);

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
