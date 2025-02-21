---@meta log

-- Table containing functions for printing to console / log file.
---@class (exact) rom.log

-- Logs an informational message.
---@param args any
function log.info(args) end

-- Logs a warning message.
---@param args any
function log.warning(args) end

-- Logs a debug message.
---@param args any
function log.debug(args) end

-- Logs an error message. This is a mirror of lua classic `error` function.
---@param arg any
---@param level integer
function log.error(arg, level) end

-- Refresh the log filters (Console and File) from the config file.
function log.refresh_filters() end

-- Pass true to include vanilla game log messages in the console and file log output.
---@param new_value 
function log.set_output_vanilla_game_log(new_value) end


