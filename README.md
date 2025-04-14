# Wise-Moonlander Keyboard Layout

This is a custom keymap for the ZSA Moonlander keyboard, optimized for ergonomics and productivity. The layout features multiple layers including Colemak as the base layer, with specialized layers for numeric input, text navigation, mouse control, application shortcuts, function keys, and keyboard settings.

## Features

- **Colemak** base layer for improved typing ergonomics
- **Numpad** layer with optimized numeric keypad layout
- **Text Navigation** layer with cursor and page movement controls
- **Mouse** layer for controlling cursor and scrolling
- **App** layer with application shortcuts and media controls
- **Function** layer with F1-F15 keys arranged in a logical 3-column grid
- **Keyboard** layer for keyboard-specific settings

## Installation

### Prerequisites

- [QMK Firmware](https://docs.qmk.fm/#/newbs_getting_started) installed on your system
- Git

### Setup Instructions

1. Clone the QMK firmware repository (if you haven't already):
   ```bash
   git clone https://github.com/qmk/qmk_firmware.git
   cd qmk_firmware
   ```

2. Set up your QMK environment:
   ```bash
   ./util/qmk_install.sh
   ```

3. Create the keymap directory (if it doesn't exist):
   ```bash
   mkdir -p keyboards/moonlander/keymaps/wise-moonlander
   ```

4. Copy the files from this repository to the keymap directory:
   ```bash
   # If you have this repository cloned separately
   cp -r /path/to/wise-moonlander/* keyboards/moonlander/keymaps/wise-moonlander/
   
   # Or if you're downloading individual files
   # Place keymap.c, config.h, and rules.mk in the directory
   ```

## Flashing Your Keyboard

1. Put your Moonlander into bootloader mode by pressing the reset button on the bottom of the keyboard or using the key combination if you have one mapped.

2. Compile and flash the firmware:
   ```bash
   qmk flash -kb moonlander -km wise-moonlander
   ```

3. Wait for the flashing process to complete. Your keyboard will automatically restart with the new layout.

## Keyboard Layout Visualization with qmk.nvim

This keymap uses nice ASCII keyboard layout comments that provide a visual representation of each layer. To get these visualizations when editing the keymap, you can use the qmk.nvim plugin for Neovim.

### Installing qmk.nvim

1. Make sure you have [Neovim](https://neovim.io/) installed (version 0.5.0 or later)

2. Install qmk.nvim using your preferred plugin manager:

   Using [lazy.nvim](https://github.com/folke/lazy.nvim):
   ```lua
   return {
     "codethread/qmk.nvim",
     config = function()
       -- Configuration will be in a separate file
     end
   }
   ```

   Using [vim-plug](https://github.com/junegunn/vim-plug):
   ```vim
   Plug 'codethread/qmk.nvim'
   ```

3. Configure qmk.nvim in your Neovim config using auto-detection for Moonlander keymap files:

   ```lua
   -- In your Neovim config (e.g., ~/.config/nvim/lua/plugins/qmk.lua)
   return {
     "codethread/qmk.nvim",
     config = function()
       local group = vim.api.nvim_create_augroup("MyQMK", {})
       
       vim.api.nvim_create_autocmd("BufEnter", {
         desc = "Format moonlander keymap",
         group = group,
         pattern = "*moonlander*keymap.c",
         callback = function()
           require("qmk").setup({
             name = "LAYOUT_moonlander",
             auto_format_pattern = "*moonlander*keymap.c",
             layout = {
               "x x x x x x x _ _ _ _ x x x x x x x",
               "x x x x x x x _ _ _ _ x x x x x x x",
               "x x x x x x x _ _ _ _ x x x x x x x",
               "x x x x x x _ _ _ _ _ _ x x x x x x",
               "x x x x x _ x _ _ _ _ x _ x x x x x",
               "_ _ _ _ _ x x x _ _ x x x _ _ _ _ _",
             },
             comment_preview = {
               position = "inside",
             }
           })
         end,
       })
     end
   }
   ```

4. With this configuration, the plugin will automatically format your keymap.c file whenever you open it in Neovim. The ASCII keyboard layout comments will be generated based on your keymap definitions.

5. You can also use these commands manually:
   - `:QMKFormat` - Format the current keymap
   - `:QMKPreview` - Preview the current keymap
   - `:QMKToggleComment` - Toggle between comment styles

The plugin will help you maintain the nice ASCII keyboard layout comments and make it easier to visualize your keymap changes.

## Customization

To customize this layout further:

1. Edit the `keymap.c` file to modify the key mappings
2. Adjust settings in `config.h` if needed
3. Recompile and flash using the instructions above

## Layer Overview

- **_COLEMAK**: Base layer with Colemak layout
- **_NUMPAD**: Numeric keypad and punctuation symbols
- **_TXT_NAV**: Text navigation with cursor controls
- **_MOUSE**: Mouse movement and scrolling
- **_APP**: Application shortcuts and media controls
- **_FUNC**: Function keys F1-F15
- **_KEYB**: Keyboard settings and RGB controls

## License

This keymap is provided under the GPL license that comes with QMK firmware.

## Credits

Created by Brian Wise, April 2025.
