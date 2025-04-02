# Table: rom.cryengine

## Functions (1)

### `on_lua_userdata_bind(function)`

The passed function will be called when a cryengine lua userdata is bound.

- **Parameters:**
  - `function` (function): signature (string cscriptablebase_name, table binded_script_table, table binded_metatable)

**Example Usage:**
```lua
rom.cryengine.on_lua_userdata_bind(function)
```


