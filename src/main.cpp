#include "config/config.hpp"
#include "dll_proxy/dll_proxy.hpp"
#include "hooks/hooking.hpp"
#include "input/hotkey.hpp"
#include "kcd2_address.hpp"
#include "kcd2_init.hpp"
#include "logger/exception_handler.hpp"
#include "memory/byte_patch_manager.hpp"
#include "paths/paths.hpp"
#include "threads/thread_pool.hpp"
#include "threads/util.hpp"
#include "version.hpp"

#include <gui/renderer.hpp>

//#include "debug/debug.hpp"

BOOL APIENTRY DllMain(HMODULE hmod, DWORD reason, PVOID)
{
	using namespace big;

	if (reason == DLL_PROCESS_ATTACH)
	{
		dll_proxy::init();

		if (!rom::is_rom_enabled())
		{
			return true;
		}

		rom::init("KCD2ModLoader", "WHGame.dll", "rom");

		// Purposely leak it, we are not unloading this module in any case.
		{
			auto exception_handling = new exception_handler(true, big::big_exception_handler);

			// SetUnhandledExceptionFilter is not working correctly it seems,
			// sometimes it's straight up not called even on unhandled exceptions.
			//AddVectoredContinueHandler(true, big::big_exception_handler);
		}

		// https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/setlocale-wsetlocale?view=msvc-170#utf-8-support
		setlocale(LC_ALL, ".utf8");
		// This also change things like stringstream outputs and add comma to numbers and things like that, we don't want that, so just set locale on the C apis instead.
		//std::locale::global(std::locale(".utf8"));

		std::filesystem::path root_folder = paths::get_project_root_folder();
		g_file_manager.init(root_folder);
		paths::init_dump_file_path();

		big::config::init_general();

		// Purposely leak it, we are not unloading this module in any case.
		auto logger_instance = new logger(rom::g_project_name, g_file_manager.get_project_file("./LogOutput.log"));

		static struct logger_cleanup
		{
			~logger_cleanup()
			{
				Logger::Destroy();
			}
		} g_logger_cleanup;

		std::srand(std::chrono::system_clock::now().time_since_epoch().count());

		LOG(INFO) << rom::g_project_name;
		LOGF(INFO, "Build (GIT SHA1): {}", version::GIT_SHA1);

#ifdef FINAL
		LOG(INFO) << "This is a final build";
#endif

		// Purposely leak it, we are not unloading this module in any case.
		auto thread_pool_instance = new thread_pool();
		LOG(INFO) << "Thread pool initialized.";

		// Purposely leak it, we are not unloading this module in any case.
		auto byte_patch_manager_instance = new byte_patch_manager();
		LOG(INFO) << "Byte Patch Manager initialized.";

		kcd2_init();

		/*while (true)
		{
			if (FindWindowA("CryENGINE", nullptr))
			{
				break;
			}

			std::this_thread::sleep_for(10ms);
		}*/

		// Purposely leak it, we are not unloading this module in any case.
		auto hooking_instance = new hooking();
		LOG(INFO) << "Hooking initialized.";

		auto renderer_instance = new renderer();
		LOG(INFO) << "Renderer initialized.";

		hotkey::init_hotkeys();

		g_hooking->enable();
		LOG(INFO) << "Hooking enabled.";

		g_running = true;

		DisableThreadLibraryCalls(hmod);
		g_hmodule     = hmod;
		g_main_thread = CreateThread(
		    nullptr,
		    0,
		    [](PVOID) -> DWORD
		    {
			    while (g_running)
			    {
				    std::this_thread::sleep_for(500ms);
			    }

			    CloseHandle(g_main_thread);
			    FreeLibraryAndExitThread(g_hmodule, 0);
		    },
		    nullptr,
		    0,
		    &g_main_thread_id);
	}

	return true;
}
