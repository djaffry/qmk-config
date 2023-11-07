# QMK Keymap for Piantor
2023-11-07 Modified by djaffry

Source: [link](https://github.com/qmk/qmk_firmware/tree/5b25a8aa/keyboards/beekeeb/piantor)

Piantor is a Cantor fork with Raspberry Pi Pico, hybrid hotswap socket and soldered-in switches support, and a breakable column. 
This code is the keymap I currently use on my broken off column Piantor.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

To use this keymap, clone the latest [QMK firmware](https://github.com/qmk/qmk_firmware). In the root of the QMK firmware repository, do `git submodule add git@github.com:djaffry/qmk-config.git keyboards/0_qmk_config`. Then use `qmk compile -kb 0_qmk_config/piantor -km djaffry` to compile the firmware.
