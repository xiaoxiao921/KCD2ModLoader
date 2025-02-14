# Table: rom.kcd2

## Functions (2)

### `set_cvar(cvar_name, new_value)`

- **Parameters:**
  - `cvar_name` (string): The name of the cvar.
  - `new_value` (number): The new value of the cvar.

- **Returns:**
  - `bool`: If the cvar was successfuly set or not.

**Example Usage:**
```lua
bool = rom.kcd2.set_cvar(cvar_name, new_value)
```

### `get_cvar(cvar_name)`

- **Parameters:**
  - `cvar_name` (string): The name of the cvar.

- **Returns:**
  - `number`: The cvar value.

**Example Usage:**
```lua
number = rom.kcd2.get_cvar(cvar_name)
```


