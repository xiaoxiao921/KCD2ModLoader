#include "gui.hpp"

#include "gui/renderer.hpp"
#include "hooks/hooking.hpp"
#include "lua/bindings/imgui_window.hpp"
#include "lua_extensions/lua_manager_extension.hpp"
#include "lua_extensions/lua_module_ext.hpp"

#include <gui/widgets/imgui_hotkey.hpp>
#include <input/hotkey.hpp>
#include <input/is_key_pressed.hpp>
#include <kcd2_init.hpp>
#include <lua/lua_manager.hpp>
#include <memory/gm_address.hpp>
#include <misc/cpp/imgui_stdlib.h>

namespace big
{
	extern toml_v2::config_file::config_entry<bool>* g_hook_log_write_enabled;

	gui::gui()
	{
		init_pref();

		g_renderer->add_dx_callback({[this]
		                             {
			                             dx_on_tick();
		                             },
		                             -5});

		g_renderer->add_wndproc_callback(
		    [this](HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
		    {
			    wndproc(hwnd, msg, wparam, lparam);
		    });

		g_renderer->add_init_callback(
		    [this]()
		    {
			    dx_init();
			    //g_renderer->rescale(g_gui->scale);
		    });

		g_gui = this;
	}

	gui::~gui()
	{
		g_gui = nullptr;
	}

	bool gui::is_open()
	{
		return m_is_open;
	}

	void gui::toggle(bool toggle)
	{
		m_is_open = toggle;

		toggle_mouse();
	}

	void gui::dx_init()
	{
		static auto bgColor     = ImVec4(0.09f, 0.094f, 0.129f, .9f);
		static auto primary     = ImVec4(0.172f, 0.380f, 0.909f, 1.f);
		static auto secondary   = ImVec4(0.443f, 0.654f, 0.819f, 1.f);
		static auto whiteBroken = ImVec4(0.792f, 0.784f, 0.827f, 1.f);

		auto& style             = ImGui::GetStyle();
		style.WindowPadding     = ImVec2(15, 15);
		style.WindowRounding    = 10.f;
		style.WindowBorderSize  = 0.f;
		style.FramePadding      = ImVec2(5, 5);
		style.FrameRounding     = 4.0f;
		style.ItemSpacing       = ImVec2(12, 8);
		style.ItemInnerSpacing  = ImVec2(8, 6);
		style.IndentSpacing     = 25.0f;
		style.ScrollbarSize     = 15.0f;
		style.ScrollbarRounding = 9.0f;
		style.GrabMinSize       = 5.0f;
		style.GrabRounding      = 3.0f;
		style.ChildRounding     = 4.0f;

		auto& colors = style.Colors;
		//colors[ImGuiCol_Text]                 = ImGui::ColorConvertU32ToFloat4(g_gui->text_color);
		colors[ImGuiCol_TextDisabled] = ImVec4(0.24f, 0.23f, 0.29f, 1.00f);
		//colors[ImGuiCol_WindowBg]             = ImGui::ColorConvertU32ToFloat4(g_gui->background_color);
		//colors[ImGuiCol_ChildBg]              = ImGui::ColorConvertU32ToFloat4(g_gui->background_color);
		colors[ImGuiCol_PopupBg]              = ImVec4(0.07f, 0.07f, 0.09f, 1.00f);
		colors[ImGuiCol_Border]               = ImVec4(0.80f, 0.80f, 0.83f, 0.88f);
		colors[ImGuiCol_BorderShadow]         = ImVec4(0.92f, 0.91f, 0.88f, 0.00f);
		colors[ImGuiCol_FrameBg]              = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
		colors[ImGuiCol_FrameBgHovered]       = ImVec4(0.24f, 0.23f, 0.29f, 1.00f);
		colors[ImGuiCol_FrameBgActive]        = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
		colors[ImGuiCol_TitleBg]              = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
		colors[ImGuiCol_TitleBgCollapsed]     = ImVec4(1.00f, 0.98f, 0.95f, 0.75f);
		colors[ImGuiCol_TitleBgActive]        = ImVec4(0.07f, 0.07f, 0.09f, 1.00f);
		colors[ImGuiCol_MenuBarBg]            = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
		colors[ImGuiCol_ScrollbarBg]          = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
		colors[ImGuiCol_ScrollbarGrab]        = ImVec4(0.80f, 0.80f, 0.83f, 0.31f);
		colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
		colors[ImGuiCol_ScrollbarGrabActive]  = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);
		colors[ImGuiCol_CheckMark]            = ImVec4(1.00f, 0.98f, 0.95f, 0.61f);
		colors[ImGuiCol_SliderGrab]           = ImVec4(0.80f, 0.80f, 0.83f, 0.31f);
		colors[ImGuiCol_SliderGrabActive]     = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);
		colors[ImGuiCol_Button]               = ImVec4(0.24f, 0.23f, 0.29f, 1.00f);
		colors[ImGuiCol_ButtonHovered]        = ImVec4(0.24f, 0.23f, 0.29f, 1.00f);
		colors[ImGuiCol_ButtonActive]         = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
		colors[ImGuiCol_Header]               = ImVec4(0.30f, 0.29f, 0.32f, 1.00f);
		colors[ImGuiCol_HeaderHovered]        = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
		colors[ImGuiCol_HeaderActive]         = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);
		colors[ImGuiCol_ResizeGrip]           = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
		colors[ImGuiCol_ResizeGripHovered]    = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
		colors[ImGuiCol_ResizeGripActive]     = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);
		colors[ImGuiCol_PlotLines]            = ImVec4(0.40f, 0.39f, 0.38f, 0.63f);
		colors[ImGuiCol_PlotLinesHovered]     = ImVec4(0.25f, 1.00f, 0.00f, 1.00f);
		colors[ImGuiCol_PlotHistogram]        = ImVec4(0.40f, 0.39f, 0.38f, 0.63f);
		colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.25f, 1.00f, 0.00f, 1.00f);
		colors[ImGuiCol_TextSelectedBg]       = ImVec4(0.25f, 1.00f, 0.00f, 0.43f);

		save_default_style();
	}

	static bool editing_gui_keybind = false;

	void gui::dx_on_tick()
	{
		std::scoped_lock l(lua_manager_extension::g_manager_mutex);

		if (!g_lua_manager)
		{
			return;
		}

		push_theme_colors();

		g_lua_manager->always_draw_independent_gui();

		if (!m_onboarded->ref<bool>())
		{
			static bool onboarding_open = false;
			if (!onboarding_open)
			{
				toggle(true);
				ImGui::OpenPopup("Welcome to KCD2ModLoader");
				onboarding_open = true;
			}

			const auto window_size = ImVec2{600, 400};
			ImGui::SetNextWindowSize(window_size, ImGuiCond_Always);

			RECT rect;
			ImVec2 window_position = ImVec2(640, 360);
			if (GetWindowRect(g_renderer->m_window_handle, &rect))
			{
				float width     = rect.right - rect.left;
				float height    = rect.bottom - rect.top;
				window_position = ImVec2{(width - window_size.x) / 2, (height - window_size.y) / 2};
			}
			ImGui::SetNextWindowPos(window_position, ImGuiCond_Always);

			if (ImGui::BeginPopupModal("Welcome to KCD2ModLoader"))
			{
				//ImGui::SeparatorText("Change the GUI opening key if you wish");
				if (ImGui::Hotkey("Open GUI Keybind", g_gui_toggle))
				{
					editing_gui_keybind = true;
				}

				ImGui::TextWrapped("This window is here so that you can change the keyboard shortcut to open the mod's "
				                   "graphical interface.");
				ImGui::TextWrapped("Once you are done please press the Close button so that you can move or interact "
				                   "with the game window again.");

				if (ImGui::Button("Close"))
				{
					m_onboarded->ref<bool>() = true;
					save_pref();
					ImGui::CloseCurrentPopup();
				}

				ImGui::EndPopup();
			}
		}

		if (m_is_open)
		{
			if (ImGui::BeginMainMenuBar())
			{
				ImGui::SetNextWindowSize({400.0f, 0});
				if (ImGui::BeginMenu("GUI"))
				{
					if (ImGui::Checkbox("Open GUI At Startup", &m_is_open_at_startup->ref<bool>()))
					{
						save_pref();
					}

					if (ImGui::Hotkey("Open GUI Keybind", g_gui_toggle))
					{
						editing_gui_keybind = true;
					}

					ImGui::Checkbox("Let Game Input Go Through Gui Layer", &let_game_input_go_through_gui_layer);

					{
						static bool val = g_hook_log_write_enabled->get_value();
						if (ImGui::Checkbox("Output to the KCD2ModLoader log\nthe vanilla game log (kcd.log)", &val))
						{
							g_hook_log_write_enabled->set_value(val);
						}
					}


					ImGui::EndMenu();
				}

				if (ImGui::BeginMenu("Mods"))
				{
					g_lua_manager->draw_menu_bar_callbacks();

					ImGui::EndMenu();
				}

				if (ImGui::BeginMenu("Windows"))
				{
					for (auto& [mod_guid, windows] : lua::window::is_open)
					{
						if (!g_lua_manager->module_exists(mod_guid))
						{
							continue;
						}

						if (ImGui::BeginMenu(mod_guid.c_str()))
						{
							if (ImGui::Button("Open All"))
							{
								for (auto& [window_name, is_window_open] : windows)
								{
									is_window_open = true;
								}
								lua::window::serialize();
							}
							ImGui::SameLine();
							if (ImGui::Button("Close All"))
							{
								for (auto& [window_name, is_window_open] : windows)
								{
									is_window_open = false;
								}
								lua::window::serialize();
							}

							for (auto& [window_name, is_window_open] : windows)
							{
								if (ImGui::Checkbox(window_name.c_str(), &is_window_open))
								{
									lua::window::serialize();
								}
							}

							ImGui::EndMenu();
						}
					}

					ImGui::EndMenu();
				}

				ImGui::EndMainMenuBar();
			}

			ImGui::SetMouseCursor(g_gui->m_mouse_cursor);

			g_lua_manager->draw_independent_gui();

			/*if (ImGui::Button("Crash it"))
			{
				*(int*)0xDE'AD = 1;
			}*/

			if (ImGui::Begin("Patched Tables"))
			{
				if (ImGui::TreeNode("Modified Lines"))
				{
					size_t modified_line_id = 0;
					for (const auto& [table_name, modified_line_map] : g_table_name_to_modified_line_to_info)
					{
						ImGui::Text("Table: %s", table_name.c_str());
						ImGui::Separator();

						auto& original_data_maps = g_table_name_to_modified_line_to_original_data[table_name];
						for (const auto& [modified_line_name, mod_infos] : modified_line_map)
						{
							const auto& original_data = original_data_maps[modified_line_name];

							ImGui::PushID(modified_line_id++);
							const auto& first_mod   = mod_infos[0];
							const size_t last_mod_i = mod_infos.size() - 1;
							const auto& last_mod    = mod_infos[last_mod_i];
							const float patched_float_2 = *reinterpret_cast<const float*>(last_mod.m_patched_data.data() + (2 * 4));
							const float orig_float_2 = *reinterpret_cast<const float*>(original_data.data() + (2 * 4));
							const std::string title  = std::format("{}: {} (Original: {}) (Last Patch: {})",
                                                                  modified_line_name,
                                                                  patched_float_2,
                                                                  orig_float_2,
                                                                  last_mod.m_mod_name);
							if (ImGui::TreeNode(title.c_str()))
							{
								ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(2, 2));
								ImGui::Text("Original Data");
								if (ImGui::BeginChild("##HexOriginalData", ImVec2(0, 60), true))
								{
									std::string hex_line;
									for (size_t i = 0; i < first_mod.m_patched_data.size(); i++)
									{
										char byte_hex[4];
										std::snprintf(byte_hex, sizeof(byte_hex), "%02X ", original_data[i]);
										hex_line += byte_hex;
									}
									ImGui::TextWrapped("%s", hex_line.c_str());
								}
								ImGui::EndChild();
								ImGui::PopStyleVar();

								ImGui::NewLine();
								ImGui::Separator();

								for (const auto& mod_info : mod_infos)
								{
									ImGui::Text("Mod: %s", mod_info.m_mod_name.c_str());

									size_t float_count = mod_info.m_patched_data.size() / 4;
									if (float_count > 2)
									{
										ImGui::Text("Floats:");
										ImGui::SameLine();
										for (size_t i = 2; i < float_count; ++i)
										{
											if (i > 2)
											{
												ImGui::SameLine();
											}
											float as_float = *reinterpret_cast<const float*>(mod_info.m_patched_data.data() + (i * 4));
											ImGui::Text("[%zu]: %.3f", i, as_float);
										}
									}

									ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(2, 2));
									ImGui::Text("Patched Data");
									if (ImGui::BeginChild("##HexPatchedData", ImVec2(0, 60), true))
									{
										std::string hex_line;
										for (size_t i = 0; i < mod_info.m_patched_data.size(); i++)
										{
											char byte_hex[4];
											std::snprintf(byte_hex, sizeof(byte_hex), "%02X ", mod_info.m_patched_data[i]);
											hex_line += byte_hex;
										}
										ImGui::TextWrapped("%s", hex_line.c_str());
									}
									ImGui::EndChild();
									ImGui::PopStyleVar();

									ImGui::NewLine();
									ImGui::Separator();
								}
								ImGui::TreePop();
							}
							ImGui::PopID();
						}
					}

					ImGui::TreePop();
				}

				if (ImGui::TreeNode("Added Lines"))
				{
					size_t added_line_id = 0;
					for (const auto& [table_name, added_line_map] : g_table_name_to_added_line_to_info)
					{
						ImGui::Text("Table: %s", table_name.c_str());
						ImGui::Separator();

						for (const auto& [added_line_name, mod_infos] : added_line_map)
						{
							ImGui::PushID(added_line_id++);
							const auto& first_mod   = mod_infos[0];
							const size_t last_mod_i = mod_infos.size() - 1;
							const auto& last_mod    = mod_infos[last_mod_i];
							const float patched_float_2 = *reinterpret_cast<const float*>(last_mod.m_patched_data.data() + (2 * 4));
							const std::string title =
							    std::format("{}: {} (By: {})", added_line_name, patched_float_2, last_mod.m_mod_name);
							if (ImGui::TreeNode(title.c_str()))
							{
								for (const auto& mod_info : mod_infos)
								{
									ImGui::Text("Mod: %s", mod_info.m_mod_name.c_str());

									size_t float_count = mod_info.m_patched_data.size() / 4;
									if (float_count > 2)
									{
										ImGui::Text("Floats:");
										ImGui::SameLine();
										for (size_t i = 2; i < float_count; ++i)
										{
											if (i > 2)
											{
												ImGui::SameLine();
											}
											float as_float = *reinterpret_cast<const float*>(mod_info.m_patched_data.data() + (i * 4));
											ImGui::Text("[%zu]: %.3f", i, as_float);
										}
									}

									ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(2, 2));
									ImGui::Text("Data");
									if (ImGui::BeginChild("##HexData", ImVec2(0, 60), true))
									{
										std::string hex_line;
										for (size_t i = 0; i < mod_info.m_patched_data.size(); i++)
										{
											char byte_hex[4];
											std::snprintf(byte_hex, sizeof(byte_hex), "%02X ", mod_info.m_patched_data[i]);
											hex_line += byte_hex;
										}
										ImGui::TextWrapped("%s", hex_line.c_str());
									}
									ImGui::EndChild();
									ImGui::PopStyleVar();

									ImGui::NewLine();
									ImGui::Separator();
								}
								ImGui::TreePop();
							}
							ImGui::PopID();
						}
					}

					ImGui::TreePop();
				}
			}
			ImGui::End();
		}

		pop_theme_colors();
	}

	void gui::save_default_style()
	{
		memcpy(&m_default_config, &ImGui::GetStyle(), sizeof(ImGuiStyle));
	}

	void gui::restore_default_style()
	{
		memcpy(&ImGui::GetStyle(), &m_default_config, sizeof(ImGuiStyle));
	}

	void gui::push_theme_colors()
	{
		//auto button_color = ImGui::ColorConvertU32ToFloat4(g_gui->button_color);
		auto button_color = ImGui::ColorConvertU32ToFloat4(2'947'901'213);
		auto button_active_color =
		    ImVec4(button_color.x + 0.33f, button_color.y + 0.33f, button_color.z + 0.33f, button_color.w);
		auto button_hovered_color =
		    ImVec4(button_color.x + 0.15f, button_color.y + 0.15f, button_color.z + 0.15f, button_color.w);
		auto frame_color = ImGui::ColorConvertU32ToFloat4(2'942'518'340);
		auto frame_hovered_color =
		    ImVec4(frame_color.x + 0.14f, frame_color.y + 0.14f, frame_color.z + 0.14f, button_color.w);
		auto frame_active_color =
		    ImVec4(frame_color.x + 0.30f, frame_color.y + 0.30f, frame_color.z + 0.30f, button_color.w);

		//ImGui::PushStyleColor(ImGuiCol_WindowBg, ImGui::ColorConvertU32ToFloat4(g_gui->background_color));
		//ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(g_gui->text_color));
		ImGui::PushStyleColor(ImGuiCol_Button, button_color);
		ImGui::PushStyleColor(ImGuiCol_ButtonHovered, button_hovered_color);
		ImGui::PushStyleColor(ImGuiCol_ButtonActive, button_active_color);
		ImGui::PushStyleColor(ImGuiCol_FrameBg, frame_color);
		ImGui::PushStyleColor(ImGuiCol_FrameBgHovered, frame_hovered_color);
		ImGui::PushStyleColor(ImGuiCol_FrameBgActive, frame_active_color);
	}

	void gui::pop_theme_colors()
	{
		//ImGui::PopStyleColor(8);
		ImGui::PopStyleColor(6);
	}

	void gui::wndproc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
	{
		if (msg == WM_KEYUP && wparam == g_gui_toggle.get_vk_value())
		{
			// Persist and restore the cursor position between menu instances.
			static POINT cursor_coords{};
			if (g_gui->m_is_open)
			{
				GetCursorPos(&cursor_coords);
			}
			else if (cursor_coords.x + cursor_coords.y != 0)
			{
				SetCursorPos(cursor_coords.x, cursor_coords.y);
			}

			toggle(editing_gui_keybind || !m_is_open);
			if (editing_gui_keybind)
			{
				editing_gui_keybind = false;
			}

			LOG(DEBUG) << "Toggled Modding GUI to: " << (m_is_open ? "visible" : "hidden");
		}
	}

	// TODO: Cleanup all this
	using ClipCursor_t           = BOOL (*)(const RECT* lpRect);
	ClipCursor_t orig_ClipCursor = nullptr;

	static BOOL hook_ClipCursor(const RECT* lpRect)
	{
		if (!g_gui || !g_gui->is_open())
		{
			return orig_ClipCursor(lpRect);
		}

		return 1;
	}

	void gui::toggle_mouse()
	{
		auto& io = ImGui::GetIO();

		if (m_is_open)
		{
			io.MouseDrawCursor  = true;
			io.ConfigFlags     &= ~ImGuiConfigFlags_NoMouse;
			io.ConfigFlags     &= ~ImGuiConfigFlags_NoMouseCursorChange;

			// TODO: Cleanup all this
			static bool first_time = true;
			if (first_time)
			{
				first_time = false;

				if (GetModuleHandleA("user32.dll"))
				{
					orig_ClipCursor = &ClipCursor;

					EachImportFunction(::GetModuleHandleA("WHGame.dll"),
					                   "user32.dll",
					                   [](const char* funcname, void*& func)
					                   {
						                   //if (strcmp(funcname, "SetCursorPos") == 0)
						                   if (strcmp(funcname, "ClipCursor") == 0)
						                   {
							                   ForceWrite<void*>(func, hook_ClipCursor);
						                   }
					                   });
				}
				else
				{
					LOG(ERROR) << "no user32 hook setcus";
				}
			}
		}
		else
		{
			io.MouseDrawCursor  = false;
			io.ConfigFlags     |= ImGuiConfigFlags_NoMouse;
			io.ConfigFlags     |= ImGuiConfigFlags_NoMouseCursorChange;
		}
	}

	void gui::init_pref()
	{
		try
		{
			const auto file_name = rom::g_project_name + '-' + rom::g_project_name + '-' + "GUI.cfg";
			m_file_path          = g_file_manager.get_project_folder("config").get_path() / file_name;
			if (std::filesystem::exists(m_file_path))
			{
				m_table = toml::parse_file(m_file_path.c_str());
			}

			auto init_node = [](toml::table& table, toml::node*& node, const char* node_name, bool default_value)
			{
				const auto entry_doesnt_exist = !table.contains(node_name);
				if (entry_doesnt_exist)
				{
					table.insert_or_assign(node_name, default_value);
				}

				node = table.get(node_name);
				if (node == nullptr)
				{
					LOG(ERROR) << "what";
				}

				if (node == nullptr || node->type() != toml::node_type::boolean)
				{
					LOG(WARNING) << "Invalid serialized data. Clearing " << node_name;

					table.insert_or_assign(node_name, default_value);
					node = table.get(node_name);
					if (node == nullptr)
					{
						LOG(ERROR) << "what2";
					}
				}
			};

			constexpr auto is_open_at_startup_name = "is_open_at_startup";
			init_node(m_table, m_is_open_at_startup, is_open_at_startup_name, false);
			constexpr auto onboarded_name = "onboarded";
			init_node(m_table, m_onboarded, onboarded_name, false);

			save_pref();

			toggle(m_is_open_at_startup->ref<bool>());
		}
		catch (const std::exception& e)
		{
			LOG(INFO) << "Failed init hotkeys: " << e.what();

			toggle(false);
		}
	}

	void gui::save_pref()
	{
		std::ofstream file_stream(m_file_path, std::ios::out | std::ios::trunc);
		if (file_stream.is_open())
		{
			file_stream << m_table;
		}
		else
		{
			LOG(WARNING) << "Failed to save pref.";
		}
	}
} // namespace big
