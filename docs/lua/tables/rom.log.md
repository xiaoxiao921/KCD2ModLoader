# Table: rom.log

Table containing functions for printing to console / log file.

## Functions (6)

### `info(args)`

Logs an informational message.

- **Parameters:**
  - `args` (any)

**Example Usage:**
```lua
rom.log.info(args)
```

### `warning(args)`

Logs a warning message.

- **Parameters:**
  - `args` (any)

**Example Usage:**
```lua
rom.log.warning(args)
```

### `debug(args)`

Logs a debug message.

- **Parameters:**
  - `args` (any)

**Example Usage:**
```lua
rom.log.debug(args)
```

### `error(arg, level)`

Logs an error message. This is a mirror of lua classic `error` function.

- **Parameters:**
  - `arg` (any)
  - `level` (integer)

**Example Usage:**
```lua
rom.log.error(arg, level)
```

### `refresh_filters()`

Refresh the log filters (Console and File) from the config file.

**Example Usage:**
```lua
rom.log.refresh_filters()
```

### `set_output_vanilla_game_log(new_value)`

Pass true to include vanilla game log messages in the console and file log output.

- **Parameters:**
  - `new_value` ()

**Example Usage:**
```lua
rom.log.set_output_vanilla_game_log(new_value)
```


