local myVariableYep = 0

for i = 1, 3 do
	myVariableYep = myVariableYep + i
end

rom.log.warning("hello world", tostring(18), _VERSION, myVariableYep)

local example_bool = false
rom.gui.add_to_menu_bar(function()
    local new_value, clicked = rom.ImGui.Checkbox("Example Bool", example_bool)
    if clicked then
        example_bool = new_value
		rom.log.info(example_bool)
    end
end)


for k,v in pairs(_G) do
	-- rom.log.warning(k,v)
end

rom.gui.add_imgui(function()
   if rom.ImGui.Begin("My Custom Window") then
       if rom.ImGui.Button("Label") then
         rom.log.info("hi")
       end
	
   end
   rom.ImGui.End()
end)