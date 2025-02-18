#pragma once

namespace big
{
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
