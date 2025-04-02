---@meta cryengine

---@class (exact) rom.cryengine

-- The passed function will be called when a cryengine lua userdata is bound.
---@param function function signature (string cscriptablebase_name, table binded_script_table, table binded_metatable)
function cryengine.on_lua_userdata_bind(function) end


