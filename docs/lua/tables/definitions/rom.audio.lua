---@meta audio

---@class (exact) rom.audio
---@field events table<string> # All fmod string events used by the game so far.

-- The game currently use FMod Studio `2.02.21`. You can query the version by clicking checking Properties -> Details of the game `fmodstudio.dll`.
--If your sound events correcty play but nothing can be heard, make sure that the guid of the Mixer masterBus, MixerInput output and MixerMaster id matches one from the game
--You'll want to string replace the guids in the (at minimum 2) .xml files Master, Mixer, and any Metadata/Event events files that were made before the guid setup change
---@param file_path string Path to the fmod .bank to load
---@return bool # Returns true if bank loaded successfully.
function audio.load_bank(file_path) end

---@param file_path string Path to the fmod .bank to load
---@return bool # Returns true if bank unloaded successfully.
function audio.unload_bank(file_path) end

-- The passed function will be called before the game loads a fmod event. is_early_main setup/check required.
---@param function function signature (string event_name) return new_event_name or nil
function audio.on_fmod_getevent(function) end


