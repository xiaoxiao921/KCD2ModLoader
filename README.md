# KCD2ModLoader

[Kingdom Come: Deliverance II Modding Discord](https://discord.gg/8nSKqQCJ)

---

KCD2ModLoader is a modding plugin / framework for Kingdom Come: Deliverance II.

(A game made with CryEngine 5)

It's using [ReturnOfModdingBase](https://github.com/xiaoxiao921/ReturnOfModdingBase) as a base. You can check its README for more information on how it works.

## Mod Manager Installation

- TODO

## Manual Installation

- Place the main KCD2ModLoader file, called `d3d12.dll`, next to the game executable called `KingdomCome.exe` inside the game folder.

- To uninstall the mod loader or revert to a vanilla experience without mods, you can simply rename or delete the `d3d12.dll` file.

## Feature Summary

- Easy hot reloading of .lua files through a file watcher system, just save your .lua file and your main.lua file will get executed again by the mod loader.

- Dear ImGui library integrated into lua directly, [documented here](https://github.com/xiaoxiao921/KCD2ModLoader/blob/master/docs/lua/tables/ImGui.md) [and here](https://github.com/xiaoxiao921/KCD2ModLoader/blob/master/docs/lua/tables/rom.gui.md).

- FMOD modding.

- Generic game file modifications.

- ASI mod loading, it has the same feature set as [this one](https://github.com/ThirteenAG/Ultimate-ASI-Loader), minus the configuration part.

- XML Merging System. For files like InventoryPreset which are not supported fully by the game PTF System.

- Trainer, right now with a very easy and nice to use Noclip.

- Debug Inspectors: PTF, Entities.

## Test Mod

[The Test Mod is located here](https://github.com/xiaoxiao921/KCD2ModLoader/tree/master/examples/plugins/KCD2ModLoader-TestMod)

It showcase multiple things:

### Custom UI

- The usage of the Dear ImGui library, for easy creation of an UI for your mod.

### FMOD

- FMOD getevent function is hooked the passed string identifier can be modified, meaning that you can easily swap and replace sounds.
 
- You can also add additional FMOD events through xml modifications (more on that just below) since FMOD event names are also described inside xml nodes.
 
- The mod loader also provide a way of loading / unloading additional FMOD sound banks. This specific feature is untested for now but should work with more details available inside the `rom.audio.md` file inside the lua docs.

### Generic game file modifications

#### XML

- ~XML parsing function from the game is hooked and modified on the fly, you can then hook up a xml <-> lua table library ([like this one](https://github.com/manoelcampos/xml2lua)) for very easy modifications for merging and so on.~ (Currently disabled due to crashes related to the Lua VM being used across multiple threads, will try to re-enable it in the future.)

- XML Merging System: 

- For files like InventoryPreset which are not supported fully by the game PTF System yet.

- For `levels` xmls, right now only `objects_mission0` files are supported.

#### CryEngine Pak Files

- `rom.game_data.on_cryfile_open` for swapping almost any files that the game loads

- `rom.game_data.on_pak_openable` event for loading / oepning pak files as soon as possible through the usage of `rom.game_data.open_pak`.

### Using the vanilla Lua game api

- Example usage of `rom.game.player.inventory:CreateItem`.