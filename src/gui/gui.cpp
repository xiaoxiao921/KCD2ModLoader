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

	static bool g_auto_refresh_enabled = false;
	static auto g_last_dump_time       = std::chrono::steady_clock::now();

	void RenderEntityDetails(int selected_index)
	{
		ImGui::Begin("Entity Details", nullptr, ImGuiWindowFlags_AlwaysAutoResize);

		const EntityInfo& e = g_entities[selected_index];

		ImGui::Text("Name: %s", e.name.c_str());
		ImGui::Text("Class: %s", e.class_name.c_str());
		ImGui::Text("ID: %u", e.id);
		ImGui::Text("ID Mask: %u", e.id_mask);
		ImGui::Text("ID Salt: %u", e.id_salt);
		ImGui::Text("Position: (%.2f, %.2f, %.2f)", e.position[0], e.position[1], e.position[2]);

		if (ImGui::Button("Teleport To Position"))
		{
			const auto formatted_str =
			    std::vformat("if rom and rom.game then "
			                 "rom.game.player:SetWorldPos({{x={:.2f},y={:.2f},z={:.2f}}}) else player:"
			                 "SetWorldPos({{x={:.2f},y={:.2f},z={:.2f}}}) end",
			                 std::make_format_args(e.position[0], e.position[1], e.position[2], e.position[0], e.position[1], e.position[2]));


			g_lua_execute_buffer_queue.push_back(formatted_str);
		}

		ImGui::Text("Active: %s", e.is_active ? "Yes" : "No");
		ImGui::Text("Hidden: %s", e.is_hidden ? "Yes" : "No");
		if (e.layer_name.size())
		{
			ImGui::Text("Layer: %s (ID: %u)", e.layer_name.c_str(), e.layer_id);
		}
		else
		{
			ImGui::Text("Layer: None");
		}
		ImGui::Text("GUID: %s", e.guid.c_str());

		ImGui::End();
	}

	void RenderEntityInspectorTable()
	{
		static int selected_index = -1; // Start with no selection

		if (ImGui::BeginTable("EntityTable", 7, ImGuiTableFlags_RowBg | ImGuiTableFlags_Borders | ImGuiTableFlags_Resizable | ImGuiTableFlags_Sortable))
		{
			// Table Setup
			ImGui::TableSetupColumn("ID", ImGuiTableColumnFlags_WidthStretch);
			ImGui::TableSetupColumn("Name", ImGuiTableColumnFlags_WidthStretch);
			ImGui::TableSetupColumn("GUID", ImGuiTableColumnFlags_WidthStretch);
			ImGui::TableSetupColumn("Active", ImGuiTableColumnFlags_WidthStretch);
			ImGui::TableSetupColumn("Hidden", ImGuiTableColumnFlags_WidthStretch);
			ImGui::TableSetupColumn("Class", ImGuiTableColumnFlags_WidthStretch);
			ImGui::TableSetupColumn("Layer", ImGuiTableColumnFlags_WidthStretch);
			ImGui::TableHeadersRow();

			// Sorting and Table Display Logic (same as before)
			ImGuiTableSortSpecs* sortSpecs = ImGui::TableGetSortSpecs();
			if (sortSpecs->SpecsDirty)
			{
				if (sortSpecs->SpecsCount > 0)
				{
					const ImGuiTableColumnSortSpecs& specs = sortSpecs->Specs[0];
					if (specs.ColumnIndex == 0)
					{
						if (specs.SortDirection == ImGuiSortDirection_Ascending)
						{
							std::sort(g_entities.begin(),
							          g_entities.end(),
							          [](const EntityInfo& a, const EntityInfo& b)
							          {
								          return a.id < b.id;
							          });
						}
						else
						{
							std::sort(g_entities.begin(),
							          g_entities.end(),
							          [](const EntityInfo& a, const EntityInfo& b)
							          {
								          return a.id > b.id;
							          });
						}
					}
					else if (specs.ColumnIndex == 1)
					{
						if (specs.SortDirection == ImGuiSortDirection_Ascending)
						{
							std::sort(g_entities.begin(),
							          g_entities.end(),
							          [](const EntityInfo& a, const EntityInfo& b)
							          {
								          return a.name < b.name;
							          });
						}
						else
						{
							std::sort(g_entities.begin(),
							          g_entities.end(),
							          [](const EntityInfo& a, const EntityInfo& b)
							          {
								          return a.name > b.name;
							          });
						}
					}
					else if (specs.ColumnIndex == 2)
					{
						if (specs.SortDirection == ImGuiSortDirection_Ascending)
						{
							std::sort(g_entities.begin(),
							          g_entities.end(),
							          [](const EntityInfo& a, const EntityInfo& b)
							          {
								          return a.guid < b.guid;
							          });
						}
						else
						{
							std::sort(g_entities.begin(),
							          g_entities.end(),
							          [](const EntityInfo& a, const EntityInfo& b)
							          {
								          return a.guid > b.guid;
							          });
						}
					}
					else if (specs.ColumnIndex == 3)
					{
						if (specs.SortDirection == ImGuiSortDirection_Ascending)
						{
							std::sort(g_entities.begin(),
							          g_entities.end(),
							          [](const EntityInfo& a, const EntityInfo& b)
							          {
								          return a.is_active < b.is_active;
							          });
						}
						else
						{
							std::sort(g_entities.begin(),
							          g_entities.end(),
							          [](const EntityInfo& a, const EntityInfo& b)
							          {
								          return a.is_active > b.is_active;
							          });
						}
					}
					else if (specs.ColumnIndex == 4)
					{
						if (specs.SortDirection == ImGuiSortDirection_Ascending)
						{
							std::sort(g_entities.begin(),
							          g_entities.end(),
							          [](const EntityInfo& a, const EntityInfo& b)
							          {
								          return a.is_hidden < b.is_hidden;
							          });
						}
						else
						{
							std::sort(g_entities.begin(),
							          g_entities.end(),
							          [](const EntityInfo& a, const EntityInfo& b)
							          {
								          return a.is_hidden > b.is_hidden;
							          });
						}
					}
				}
				sortSpecs->SpecsDirty = false;
			}

			ImGuiListClipper clipper;
			clipper.Begin(g_entities.size());

			while (clipper.Step())
			{
				for (int i = clipper.DisplayStart; i < clipper.DisplayEnd; ++i)
				{
					ImGui::TableNextRow();

					const auto& current_entity = g_entities[i];

					// ID column
					ImGui::TableSetColumnIndex(0);
					char idBuffer[16];
					snprintf(idBuffer, sizeof(idBuffer), "%u", current_entity.id);
					if (ImGui::Selectable(idBuffer, selected_index == i, ImGuiSelectableFlags_SpanAllColumns))
					{
						selected_index = i;
					}

					// Name column
					ImGui::TableSetColumnIndex(1);
					ImGui::TextUnformatted(current_entity.name.c_str());

					// GUID column
					ImGui::TableSetColumnIndex(2);
					ImGui::TextUnformatted(current_entity.guid.c_str());

					// Active column
					ImGui::TableSetColumnIndex(3);
					ImGui::TextUnformatted(current_entity.is_active ? "Yes" : "No");

					// Hidden column
					ImGui::TableSetColumnIndex(4);
					ImGui::TextUnformatted(current_entity.is_hidden ? "Yes" : "No");

					// Class column
					ImGui::TableSetColumnIndex(5);
					ImGui::TextUnformatted(current_entity.class_name.c_str());

					// Layer column
					ImGui::TableSetColumnIndex(6);
					ImGui::TextUnformatted(current_entity.layer_name.c_str());
				}
			}

			ImGui::EndTable();
		}

		// Render the separate entity details window if an entity is selected
		if (selected_index >= 0 && selected_index < (int)g_entities.size())
		{
			RenderEntityDetails(selected_index);
		}
	}

	void RefreshEntities()
	{
		if (g_CEntitySystem)
		{
			CEntitySystem_DumpEntities(g_CEntitySystem);
		}
	}

	void RenderEntityInspector()
	{
		ImGui::Begin("Entity List Inspector");

		ImGui::Text("Entity Count: %llu", g_entities.size());

		if (ImGui::Checkbox("Auto-refresh every 5 seconds", &g_auto_refresh_enabled))
		{
			// Reset the last dump time to start fresh when toggling auto-refresh
			if (g_auto_refresh_enabled)
			{
				g_last_dump_time = std::chrono::steady_clock::now();
			}
		}

		// Add button to manually refresh
		if (ImGui::Button("Refresh Now"))
		{
			RefreshEntities();
		}

		// If auto-refresh is enabled, perform automatic refresh every 5 seconds
		if (g_auto_refresh_enabled)
		{
			const auto now = std::chrono::steady_clock::now();
			if (now - g_last_dump_time >= 5s)
			{
				RefreshEntities();
				g_last_dump_time = now;
			}
		}

		RenderEntityInspectorTable();

		ImGui::End();
	}

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
					if (ImGui::Hotkey("Open GUI Keybind", g_gui_toggle))
					{
						editing_gui_keybind = true;
					}

					if (ImGui::Checkbox("Open GUI At Startup", &m_is_open_at_startup->ref<bool>()))
					{
						save_pref();
					}

					ImGui::Checkbox("Let Game Input Go Through GUI Layer", &let_game_input_go_through_gui_layer);

					ImGui::EndMenu();
				}

				if (ImGui::BeginMenu("Log"))
				{
					{
						static bool val = g_hook_log_write_enabled->get_value();
						if (ImGui::Checkbox("Output to the KCD2ModLoader log\nthe vanilla game log (kcd.log)", &val))
						{
							g_hook_log_write_enabled->set_value(val);
						}
					}


					ImGui::EndMenu();
				}

				if (ImGui::BeginMenu("Console"))
				{
					if (ImGui::Button("Dump CVars and Console Commands to Files"))
					{
						{
							const auto path = g_file_manager.get_project_file("cvars.md").get_path();
							std::ofstream cvars_file(path);
							if (cvars_file)
							{
								cvars_file << "# CVars\n\n";
								for (const auto& [name, help_text] : g_cvar_name_to_help_text)
								{
									cvars_file << "- **" << name << "**:\n\n```text\n" << help_text << "\n```\n\n";
								}

								LOG(INFO) << "Dumped CVars to " << (char*)path.u8string().c_str();
							}
						}

						{
							const auto path = g_file_manager.get_project_file("console_commands.md").get_path();
							std::ofstream commands_file(path);
							if (commands_file)
							{
								commands_file << "# Console Commands\n\n";
								for (const auto& [name, help_text] : g_console_command_name_to_help_text)
								{
									commands_file << "- **" << name << "**:\n\n```text\n" << help_text << "\n```\n\n";
								}

								LOG(INFO) << "Dumped Console Commands to " << (char*)path.u8string().c_str();
							}
						}
					}


					ImGui::EndMenu();
				}

				if (ImGui::BeginMenu("Mods"))
				{
					ImGui::Text("Vanilla System Mods");
					for (const auto& module : g_vanilla_mods)
					{
						if (ImGui::BeginMenu(module.m_name.c_str()))
						{
							if (ImGui::BeginMenu("Mod Info"))
							{
								ImGui::Text("Mod ID: %s", module.m_mod_id.c_str());
								ImGui::Text("Description: %s", module.m_description.c_str());
								ImGui::Text("Author: %s", module.m_author.c_str());
								ImGui::Text("Version: %s", module.m_version.c_str());
								ImGui::Text("Folder Name: %s", module.m_folder_name.c_str());
								ImGui::Text("Created On: %s", module.m_created_on.c_str());

								if (module.m_loaded_paks.size())
								{
									if (ImGui::BeginMenu("Loaded Paks"))
									{
										for (const auto& loaded_pak : module.m_loaded_paks)
										{
											ImGui::Text("%s", loaded_pak.c_str());
										}

										ImGui::EndMenu();
									}
								}

								ImGui::EndMenu();
							}

							ImGui::EndMenu();
						}
					}

					ImGui::Separator();

					ImGui::Text("ROM Mods");
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


			if (g_CEntitySystem)
			{
				RenderEntityInspector();
			}

			if (ImGui::Begin("Patched Table Files (PTF) Observer"))
			{
				//if (ImGui::Button("Merge InventoryPreset Test"))
				//{
				//std::ifstream file("C:/Users/Quentin/Desktop/InventoryPreset__shops.xml", std::ios::in | std::ios::binary);
				//if (!file)
				//{
				//}
				//std::ostringstream ss;
				//ss << file.rdbuf(); // Read the file into the stream

				//LOG(INFO) << "patching to disk, " << g_xml_filename_to_modifications["inventorypreset__shops"].size();
				//apply_xml_patches(ss.str(), g_xml_filename_to_modifications["inventorypreset__shops"], "C:/Users/Quentin/Desktop/InventoryPreset__shops__patched.xml");
				//}

				if (ImGui::TreeNode("Modified Lines"))
				{
					size_t forloop_id_1 = 0;
					for (const auto& [table_name, modified_line_map] : g_table_name_to_modified_line_to_info)
					{
						ImGui::PushID(forloop_id_1++);

						ImGui::Text("Table: %s", table_name.c_str());
						ImGui::Separator();

						auto& original_data_maps = g_table_name_to_modified_line_to_original_data[table_name];
						size_t forloop_id_2      = 0;
						for (const auto& [modified_line_name, mod_infos] : modified_line_map)
						{
							ImGui::PushID(forloop_id_2++);

							const auto& original_data = original_data_maps[modified_line_name];

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

								size_t forloop_id_3 = 0;
								for (const auto& mod_info : mod_infos)
								{
									ImGui::PushID(forloop_id_3++);

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

									ImGui::PopID();
								}
								ImGui::TreePop();
							}

							ImGui::PopID();
						}

						ImGui::PopID();
					}

					ImGui::TreePop();
				}

				if (ImGui::TreeNode("Added Lines"))
				{
					size_t forloop_id_1 = 0;
					for (const auto& [table_name, added_line_map] : g_table_name_to_added_line_to_info)
					{
						ImGui::PushID(forloop_id_1++);

						ImGui::Text("Table: %s", table_name.c_str());
						ImGui::Separator();

						size_t forloop_id_2 = 0;
						for (const auto& [added_line_name, mod_infos] : added_line_map)
						{
							ImGui::PushID(forloop_id_2++);

							const auto& first_mod   = mod_infos[0];
							const size_t last_mod_i = mod_infos.size() - 1;
							const auto& last_mod    = mod_infos[last_mod_i];
							const float patched_float_2 = *reinterpret_cast<const float*>(last_mod.m_patched_data.data() + (2 * 4));
							const std::string title =
							    std::format("{}: {} (By: {})", added_line_name, patched_float_2, last_mod.m_mod_name);
							if (ImGui::TreeNode(title.c_str()))
							{
								size_t forloop_id_3 = 0;
								for (const auto& mod_info : mod_infos)
								{
									ImGui::PushID(forloop_id_3++);
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

									ImGui::PopID();
								}
								ImGui::TreePop();
							}

							ImGui::PopID();
						}

						ImGui::PopID();
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
