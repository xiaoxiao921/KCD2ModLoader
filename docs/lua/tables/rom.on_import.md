# Table: rom.on_import

## Functions (2)

### `pre(function)`

The passed function will be called before the game loads a .lua script from the vanilla game.
The _ENV returned (if not nil) by the passed function gives you a way to define the _ENV of this lua script.

- **Parameters:**
  - `function` (function): signature (string file_name, current_ENV_for_this_import) return nil or _ENV

**Example Usage:**
```lua
rom.on_import.pre(function)
```

### `post(function)`

The passed function will be called after the game loads a .lua script from the vanilla game.

- **Parameters:**
  - `function` (function): signature (string file_name)

**Example Usage:**
```lua
rom.on_import.post(function)
```


