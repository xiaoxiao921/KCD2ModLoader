# Table: rom.xml

## Functions (1)

### `on_xml_parse(function)`

The passed function will be called before the game loads a .lua script from the vanilla game. is_early_main setup/check required for some of the files.

- **Parameters:**
  - `function` (function): signature (string file_name, string file_content) return new_file_content or nil

**Example Usage:**
```lua
rom.xml.on_xml_parse(function)
```


