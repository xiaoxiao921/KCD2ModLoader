-- early_main is required for some data modifcations, 
-- like when fmod audio getevent is parsed at game start for sound replacement,
-- or when some xml files are parsed by the game.
-- Generally the lua documentation files will tell you if some game events require a is_early_main check
-- for them to do anything meaningful.
if rom.is_early_main then
	rom.log.warning("hello from early")
	
	rom.audio.on_fmod_getevent(function(event_name)
		rom.log.info(event_name)
	end)
	
	rom.xml.on_xml_parse(function(filename, file_content)
		rom.log.info(filename)
	end)
	
	return
end

local example_bool = false
rom.gui.add_to_menu_bar(function()
    local new_value, clicked = rom.ImGui.Checkbox("Example Bool", example_bool)
    if clicked then
        example_bool = new_value
		rom.log.info(example_bool)
	end
end)

-- for k,v in pairs(_G) do
	-- rom.log.warning(k,v)
-- end

-- for k,v in pairs(rom.audio.events) do
	-- rom.log.warning(k,v)
-- end

-- rom.log.set_output_vanilla_game_log(false)

rom.xml.on_xml_parse(function(filename, file_content)
	rom.log.info(filename)
end)

rom.gui.add_imgui(function()
    -- rom.ImGui.PushStyleColor(rom.ImGuiCol.WindowBg, 1, 1, 1, 1)
    
   if rom.ImGui.Begin("My Custom Window") then
       if rom.ImGui.Button("Label") then
         rom.log.info("hi")
       end
	
   end
   rom.ImGui.End()
   
   -- rom.ImGui.PopStyleColor()
end)