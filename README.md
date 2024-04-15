<p align="center">
  <img src="https://www.svgrepo.com/show/302089/cube-3d.svg" width="100" alt="project-logo">
</p>
<p align="center">
    <h1 align="center">MGP Gamepad Terraria Project</h1>
</p>
<p align="center">
    <em><code>MGP (MBED Gamepad Project). ELEC2645 2D Terraria/Minecraft style videogame written in C for custom-built Gamepad run by an MBED FRDM-K64 microprocessor</code></em>
</p>

<br><!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary><br>

- [ Overview](#-overview)
- [ Directory Structure](#directory-structure)
- [ Repository Structure](#repository-structure)
- [ Modules](#modules)
- [ Getting Started](#-getting-started)
  - [ Installation](#-installation)
  - [ Usage](#-usage)
- [ Contributing](#-contributing)
</details>
<hr>

##  Overview

<code>This project develops a 2D Terraria/Minecraft style video game specifically tailored for a custom-built Gamepad controlled by an MBED FRDM-K64 microprocessor. The game involves building environments and controlling characters through various interactions, coded in C. This documentation provides a high-level overview and setup instructions for running the Terraria/Minecraft style game on an MBED FRDM-K64 microprocessor. </code>

---

##  Directory Structure

* **GameClasses/**: Contains the core game logic and engines.
   * **BlockEngine/**: Handles the creation and manipulation of game blocks.
   * **Character/**: Manages player character properties and behaviors.
   * **CollisionEngine/**: Processes collision detection and response.
   * **GameEngine/**: Central control for game states and processes.
   * **Maps/**: Stores and handles map data structures.
   * **SceneEngine/**: Manages rendering of scenes.
   * **Sprites/**: Handles sprite operations.
* **Gamepad2/**: Libraries for Gamepad hardware interaction.
   * **Bitmap.h/cpp**: Bitmap operations for display.
   * **Gamepad.h/cpp**: Interfaces for the Gamepad.
   * **N5110.h/cpp**: LCD display control.
* **main.cpp**: The main entry point for the game.
* **tests/**: Contains test cases for various modules.

---

##  Repository Structure

```sh
└── mgp_gamepad/
    ├── ELEC2645_Project_el18apsr
    │   ├── GameClasses
    │   ├── Gamepad2
    │   ├── GettingStarted.html
    │   ├── main.cpp
    │   ├── mbed
    │   ├── mbed.bld
    │   ├── mbed_config.h
    │   └── tests
    └── README.md
```

---

##  Modules

<details closed><summary>ELEC2645_Project_el18apsr</summary>

| File                                                                                                                              | Summary                         |
| ---                                                                                                                               | ---                             |
| [main.cpp](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/main.cpp)                       | <code>► INSERT-TEXT-HERE</code> |
| [mbed.bld](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed.bld)                       | <code>► INSERT-TEXT-HERE</code> |
| [mbed_config.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed_config.h)             | <code>► INSERT-TEXT-HERE</code> |
| [GettingStarted.html](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/GettingStarted.html) | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>ELEC2645_Project_el18apsr.mbed</summary>

| File                                                                                                                     | Summary                         |
| ---                                                                                                                      | ---                             |
| [mbed.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/mbed.h)             | <code>► INSERT-TEXT-HERE</code> |
| [targets.json](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/targets.json) | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>ELEC2645_Project_el18apsr.mbed.drivers</summary>

| File                                                                                                                                         | Summary                         |
| ---                                                                                                                                          | ---                             |
| [SerialWireOutput.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/SerialWireOutput.h) | <code>► INSERT-TEXT-HERE</code> |
| [DigitalInOut.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/DigitalInOut.h)         | <code>► INSERT-TEXT-HERE</code> |
| [LowPowerTimer.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/LowPowerTimer.h)       | <code>► INSERT-TEXT-HERE</code> |
| [BusIn.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/BusIn.h)                       | <code>► INSERT-TEXT-HERE</code> |
| [I2CSlave.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/I2CSlave.h)                 | <code>► INSERT-TEXT-HERE</code> |
| [DigitalIn.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/DigitalIn.h)               | <code>► INSERT-TEXT-HERE</code> |
| [PwmOut.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/PwmOut.h)                     | <code>► INSERT-TEXT-HERE</code> |
| [Ethernet.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/Ethernet.h)                 | <code>► INSERT-TEXT-HERE</code> |
| [InterruptManager.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/InterruptManager.h) | <code>► INSERT-TEXT-HERE</code> |
| [LowPowerTicker.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/LowPowerTicker.h)     | <code>► INSERT-TEXT-HERE</code> |
| [SerialBase.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/SerialBase.h)             | <code>► INSERT-TEXT-HERE</code> |
| [DigitalOut.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/DigitalOut.h)             | <code>► INSERT-TEXT-HERE</code> |
| [AnalogIn.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/AnalogIn.h)                 | <code>► INSERT-TEXT-HERE</code> |
| [PortOut.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/PortOut.h)                   | <code>► INSERT-TEXT-HERE</code> |
| [InterruptIn.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/InterruptIn.h)           | <code>► INSERT-TEXT-HERE</code> |
| [MbedCRC.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/MbedCRC.h)                   | <code>► INSERT-TEXT-HERE</code> |
| [PortInOut.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/PortInOut.h)               | <code>► INSERT-TEXT-HERE</code> |
| [UARTSerial.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/UARTSerial.h)             | <code>► INSERT-TEXT-HERE</code> |
| [LowPowerTimeout.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/LowPowerTimeout.h)   | <code>► INSERT-TEXT-HERE</code> |
| [SPI.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/SPI.h)                           | <code>► INSERT-TEXT-HERE</code> |
| [I2C.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/I2C.h)                           | <code>► INSERT-TEXT-HERE</code> |
| [QSPI.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/QSPI.h)                         | <code>► INSERT-TEXT-HERE</code> |
| [BusOut.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/BusOut.h)                     | <code>► INSERT-TEXT-HERE</code> |
| [SPISlave.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/SPISlave.h)                 | <code>► INSERT-TEXT-HERE</code> |
| [CAN.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/CAN.h)                           | <code>► INSERT-TEXT-HERE</code> |
| [Serial.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/Serial.h)                     | <code>► INSERT-TEXT-HERE</code> |
| [Timeout.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/Timeout.h)                   | <code>► INSERT-TEXT-HERE</code> |
| [Timer.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/Timer.h)                       | <code>► INSERT-TEXT-HERE</code> |
| [BusInOut.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/BusInOut.h)                 | <code>► INSERT-TEXT-HERE</code> |
| [TableCRC.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/TableCRC.h)                 | <code>► INSERT-TEXT-HERE</code> |
| [TimerEvent.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/TimerEvent.h)             | <code>► INSERT-TEXT-HERE</code> |
| [FlashIAP.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/FlashIAP.h)                 | <code>► INSERT-TEXT-HERE</code> |
| [AnalogOut.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/AnalogOut.h)               | <code>► INSERT-TEXT-HERE</code> |
| [PortIn.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/PortIn.h)                     | <code>► INSERT-TEXT-HERE</code> |
| [RawSerial.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/RawSerial.h)               | <code>► INSERT-TEXT-HERE</code> |
| [Ticker.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/drivers/Ticker.h)                     | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>ELEC2645_Project_el18apsr.mbed.TARGET_K64F.TOOLCHAIN_ARM_STD</summary>

| File                                                                                                                                                                               | Summary                         |
| ---                                                                                                                                                                                | ---                             |
| [fsl_sai.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_sai.h)                                   | <code>► INSERT-TEXT-HERE</code> |
| [fsl_edma.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_edma.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [dma_api_hal.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/dma_api_hal.h)                           | <code>► INSERT-TEXT-HERE</code> |
| [arm_math.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/arm_math.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [PeripheralPins.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/PeripheralPins.h)                     | <code>► INSERT-TEXT-HERE</code> |
| [core_armv8mbl.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/core_armv8mbl.h)                       | <code>► INSERT-TEXT-HERE</code> |
| [core_cm0.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/core_cm0.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [fsl_i2c.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_i2c.h)                                   | <code>► INSERT-TEXT-HERE</code> |
| [mbed_cmsis_conf.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/mbed_cmsis_conf.h)                   | <code>► INSERT-TEXT-HERE</code> |
| [fsl_enet.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_enet.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [PortNames.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/PortNames.h)                               | <code>► INSERT-TEXT-HERE</code> |
| [core_sc000.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/core_sc000.h)                             | <code>► INSERT-TEXT-HERE</code> |
| [fsl_llwu.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_llwu.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [fsl_flexcan.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_flexcan.h)                           | <code>► INSERT-TEXT-HERE</code> |
| [fsl_rcm.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_rcm.h)                                   | <code>► INSERT-TEXT-HERE</code> |
| [fsl_i2c_edma.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_i2c_edma.h)                         | <code>► INSERT-TEXT-HERE</code> |
| [core_sc300.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/core_sc300.h)                             | <code>► INSERT-TEXT-HERE</code> |
| [cmsis_compiler.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/cmsis_compiler.h)                     | <code>► INSERT-TEXT-HERE</code> |
| [fsl_dspi.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_dspi.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [fsl_device_registers.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_device_registers.h)         | <code>► INSERT-TEXT-HERE</code> |
| [fsl_pit.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_pit.h)                                   | <code>► INSERT-TEXT-HERE</code> |
| [cmsis_armcc.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/cmsis_armcc.h)                           | <code>► INSERT-TEXT-HERE</code> |
| [fsl_vref.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_vref.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [fsl_clock.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_clock.h)                               | <code>► INSERT-TEXT-HERE</code> |
| [fsl_sai_edma.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_sai_edma.h)                         | <code>► INSERT-TEXT-HERE</code> |
| [core_armv8mml.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/core_armv8mml.h)                       | <code>► INSERT-TEXT-HERE</code> |
| [fsl_cmp.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_cmp.h)                                   | <code>► INSERT-TEXT-HERE</code> |
| [device.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/device.h)                                     | <code>► INSERT-TEXT-HERE</code> |
| [mbed_lib.json](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/mbed_lib.json)                           | <code>► INSERT-TEXT-HERE</code> |
| [fsl_port.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_port.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [fsl_smc.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_smc.h)                                   | <code>► INSERT-TEXT-HERE</code> |
| [fsl_pmc.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_pmc.h)                                   | <code>► INSERT-TEXT-HERE</code> |
| [fsl_flash.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_flash.h)                               | <code>► INSERT-TEXT-HERE</code> |
| [fsl_sysmpu.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_sysmpu.h)                             | <code>► INSERT-TEXT-HERE</code> |
| [fsl_rnga.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_rnga.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [MK64F12.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/MK64F12.h)                                   | <code>► INSERT-TEXT-HERE</code> |
| [core_cm0plus.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/core_cm0plus.h)                         | <code>► INSERT-TEXT-HERE</code> |
| [core_cm3.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/core_cm3.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [fsl_lptmr.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_lptmr.h)                               | <code>► INSERT-TEXT-HERE</code> |
| [cmsis_gcc.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/cmsis_gcc.h)                               | <code>► INSERT-TEXT-HERE</code> |
| [cmsis_armclang.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/cmsis_armclang.h)                     | <code>► INSERT-TEXT-HERE</code> |
| [fsl_ftm.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_ftm.h)                                   | <code>► INSERT-TEXT-HERE</code> |
| [fsl_rtc.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_rtc.h)                                   | <code>► INSERT-TEXT-HERE</code> |
| [dma_reqs.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/dma_reqs.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [crc.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/crc.h)                                           | <code>► INSERT-TEXT-HERE</code> |
| [fsl_dspi_edma.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_dspi_edma.h)                       | <code>► INSERT-TEXT-HERE</code> |
| [MK64F12_features.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/MK64F12_features.h)                 | <code>► INSERT-TEXT-HERE</code> |
| [PinNames.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/PinNames.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [fsl_uart.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_uart.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [cmsis_version.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/cmsis_version.h)                       | <code>► INSERT-TEXT-HERE</code> |
| [RTE_Components.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/RTE_Components.h)                     | <code>► INSERT-TEXT-HERE</code> |
| [mpu_armv8.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/mpu_armv8.h)                               | <code>► INSERT-TEXT-HERE</code> |
| [fsl_sdhc.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_sdhc.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [system_MK64F12.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/system_MK64F12.h)                     | <code>► INSERT-TEXT-HERE</code> |
| [cmsis.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/cmsis.h)                                       | <code>► INSERT-TEXT-HERE</code> |
| [core_cm23.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/core_cm23.h)                               | <code>► INSERT-TEXT-HERE</code> |
| [fsl_pdb.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_pdb.h)                                   | <code>► INSERT-TEXT-HERE</code> |
| [fsl_common.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_common.h)                             | <code>► INSERT-TEXT-HERE</code> |
| [objects.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/objects.h)                                   | <code>► INSERT-TEXT-HERE</code> |
| [PeripheralNames.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/PeripheralNames.h)                   | <code>► INSERT-TEXT-HERE</code> |
| [core_cm1.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/core_cm1.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [core_cm7.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/core_cm7.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [fsl_dmamux.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_dmamux.h)                             | <code>► INSERT-TEXT-HERE</code> |
| [fsl_adc16.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_adc16.h)                               | <code>► INSERT-TEXT-HERE</code> |
| [fsl_sim.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_sim.h)                                   | <code>► INSERT-TEXT-HERE</code> |
| [mbed_rtx.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/mbed_rtx.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [core_cm33.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/core_cm33.h)                               | <code>► INSERT-TEXT-HERE</code> |
| [gpio_object.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/gpio_object.h)                           | <code>► INSERT-TEXT-HERE</code> |
| [core_cm4.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/core_cm4.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [fsl_uart_edma.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_uart_edma.h)                       | <code>► INSERT-TEXT-HERE</code> |
| [fsl_crc.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_crc.h)                                   | <code>► INSERT-TEXT-HERE</code> |
| [fsl_clock_config.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_clock_config.h)                 | <code>► INSERT-TEXT-HERE</code> |
| [fsl_cmt.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_cmt.h)                                   | <code>► INSERT-TEXT-HERE</code> |
| [fsl_flexbus.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_flexbus.h)                           | <code>► INSERT-TEXT-HERE</code> |
| [fsl_gpio.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_gpio.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [cmsis_nvic.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/cmsis_nvic.h)                             | <code>► INSERT-TEXT-HERE</code> |
| [peripheral_clock_defines.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/peripheral_clock_defines.h) | <code>► INSERT-TEXT-HERE</code> |
| [fsl_dac.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_dac.h)                                   | <code>► INSERT-TEXT-HERE</code> |
| [fsl_wdog.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_wdog.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [fsl_phy.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_phy.h)                                   | <code>► INSERT-TEXT-HERE</code> |
| [mpu_armv7.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/mpu_armv7.h)                               | <code>► INSERT-TEXT-HERE</code> |
| [MK64FN1M0xxx12.sct](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/MK64FN1M0xxx12.sct)                 | <code>► INSERT-TEXT-HERE</code> |
| [cmsis_iccarm.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/cmsis_iccarm.h)                         | <code>► INSERT-TEXT-HERE</code> |
| [fsl_ewm.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/fsl_ewm.h)                                   | <code>► INSERT-TEXT-HERE</code> |
| [tz_context.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/TARGET_K64F/TOOLCHAIN_ARM_STD/tz_context.h)                             | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>ELEC2645_Project_el18apsr.mbed.platform</summary>

| File                                                                                                                                                | Summary                         |
| ---                                                                                                                                                 | ---                             |
| [mbed_version.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_version.h)               | <code>► INSERT-TEXT-HERE</code> |
| [mbed_mem_trace.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_mem_trace.h)           | <code>► INSERT-TEXT-HERE</code> |
| [wait_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/wait_api.h)                       | <code>► INSERT-TEXT-HERE</code> |
| [mbed_error.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_error.h)                   | <code>► INSERT-TEXT-HERE</code> |
| [FunctionPointer.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/FunctionPointer.h)         | <code>► INSERT-TEXT-HERE</code> |
| [FileLike.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/FileLike.h)                       | <code>► INSERT-TEXT-HERE</code> |
| [FilePath.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/FilePath.h)                       | <code>► INSERT-TEXT-HERE</code> |
| [mbed_stats.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_stats.h)                   | <code>► INSERT-TEXT-HERE</code> |
| [NonCopyable.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/NonCopyable.h)                 | <code>► INSERT-TEXT-HERE</code> |
| [LocalFileSystem.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/LocalFileSystem.h)         | <code>► INSERT-TEXT-HERE</code> |
| [CriticalSectionLock.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/CriticalSectionLock.h) | <code>► INSERT-TEXT-HERE</code> |
| [mbed_assert.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_assert.h)                 | <code>► INSERT-TEXT-HERE</code> |
| [semihost_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/semihost_api.h)               | <code>► INSERT-TEXT-HERE</code> |
| [mbed_critical.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_critical.h)             | <code>► INSERT-TEXT-HERE</code> |
| [critical.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/critical.h)                       | <code>► INSERT-TEXT-HERE</code> |
| [FileSystemHandle.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/FileSystemHandle.h)       | <code>► INSERT-TEXT-HERE</code> |
| [mbed_wait_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_wait_api.h)             | <code>► INSERT-TEXT-HERE</code> |
| [ScopedLock.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/ScopedLock.h)                   | <code>► INSERT-TEXT-HERE</code> |
| [mbed_rtc_time.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_rtc_time.h)             | <code>► INSERT-TEXT-HERE</code> |
| [PlatformMutex.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/PlatformMutex.h)             | <code>► INSERT-TEXT-HERE</code> |
| [CircularBuffer.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/CircularBuffer.h)           | <code>► INSERT-TEXT-HERE</code> |
| [mbed_poll.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_poll.h)                     | <code>► INSERT-TEXT-HERE</code> |
| [toolchain.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/toolchain.h)                     | <code>► INSERT-TEXT-HERE</code> |
| [Transaction.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/Transaction.h)                 | <code>► INSERT-TEXT-HERE</code> |
| [mbed_toolchain.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_toolchain.h)           | <code>► INSERT-TEXT-HERE</code> |
| [platform.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/platform.h)                       | <code>► INSERT-TEXT-HERE</code> |
| [Callback.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/Callback.h)                       | <code>► INSERT-TEXT-HERE</code> |
| [mbed_mktime.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_mktime.h)                 | <code>► INSERT-TEXT-HERE</code> |
| [mbed_preprocessor.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_preprocessor.h)     | <code>► INSERT-TEXT-HERE</code> |
| [mbed_semihost_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_semihost_api.h)     | <code>► INSERT-TEXT-HERE</code> |
| [Stream.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/Stream.h)                           | <code>► INSERT-TEXT-HERE</code> |
| [SingletonPtr.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/SingletonPtr.h)               | <code>► INSERT-TEXT-HERE</code> |
| [FileSystemLike.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/FileSystemLike.h)           | <code>► INSERT-TEXT-HERE</code> |
| [DeepSleepLock.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/DeepSleepLock.h)             | <code>► INSERT-TEXT-HERE</code> |
| [mbed_application.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_application.h)       | <code>► INSERT-TEXT-HERE</code> |
| [mbed_debug.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_debug.h)                   | <code>► INSERT-TEXT-HERE</code> |
| [mbed_error_hist.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_error_hist.h)         | <code>► INSERT-TEXT-HERE</code> |
| [CThunk.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/CThunk.h)                           | <code>► INSERT-TEXT-HERE</code> |
| [sleep.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/sleep.h)                             | <code>► INSERT-TEXT-HERE</code> |
| [FileBase.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/FileBase.h)                       | <code>► INSERT-TEXT-HERE</code> |
| [rtc_time.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/rtc_time.h)                       | <code>► INSERT-TEXT-HERE</code> |
| [mbed_power_mgmt.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_power_mgmt.h)         | <code>► INSERT-TEXT-HERE</code> |
| [Span.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/Span.h)                               | <code>► INSERT-TEXT-HERE</code> |
| [SharedPtr.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/SharedPtr.h)                     | <code>► INSERT-TEXT-HERE</code> |
| [mbed_sleep.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_sleep.h)                   | <code>► INSERT-TEXT-HERE</code> |
| [DirHandle.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/DirHandle.h)                     | <code>► INSERT-TEXT-HERE</code> |
| [mbed_retarget.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_retarget.h)             | <code>► INSERT-TEXT-HERE</code> |
| [mbed_interface.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/mbed_interface.h)           | <code>► INSERT-TEXT-HERE</code> |
| [CallChain.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/CallChain.h)                     | <code>► INSERT-TEXT-HERE</code> |
| [ATCmdParser.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/ATCmdParser.h)                 | <code>► INSERT-TEXT-HERE</code> |
| [FileHandle.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/platform/FileHandle.h)                   | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>ELEC2645_Project_el18apsr.mbed.hal</summary>

| File                                                                                                                                                 | Summary                         |
| ---                                                                                                                                                  | ---                             |
| [gpio_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/gpio_api.h)                             | <code>► INSERT-TEXT-HERE</code> |
| [LowPowerTickerWrapper.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/LowPowerTickerWrapper.h)   | <code>► INSERT-TEXT-HERE</code> |
| [analogout_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/analogout_api.h)                   | <code>► INSERT-TEXT-HERE</code> |
| [pinmap.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/pinmap.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [us_ticker_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/us_ticker_api.h)                   | <code>► INSERT-TEXT-HERE</code> |
| [can_helper.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/can_helper.h)                         | <code>► INSERT-TEXT-HERE</code> |
| [crc_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/crc_api.h)                               | <code>► INSERT-TEXT-HERE</code> |
| [flash_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/flash_api.h)                           | <code>► INSERT-TEXT-HERE</code> |
| [buffer.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/buffer.h)                                 | <code>► INSERT-TEXT-HERE</code> |
| [flash_data.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/flash_data.h)                         | <code>► INSERT-TEXT-HERE</code> |
| [critical_section_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/critical_section_api.h)     | <code>► INSERT-TEXT-HERE</code> |
| [ticker_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/ticker_api.h)                         | <code>► INSERT-TEXT-HERE</code> |
| [port_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/port_api.h)                             | <code>► INSERT-TEXT-HERE</code> |
| [lp_ticker_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/lp_ticker_api.h)                   | <code>► INSERT-TEXT-HERE</code> |
| [serial_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/serial_api.h)                         | <code>► INSERT-TEXT-HERE</code> |
| [rtc_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/rtc_api.h)                               | <code>► INSERT-TEXT-HERE</code> |
| [i2c_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/i2c_api.h)                               | <code>► INSERT-TEXT-HERE</code> |
| [ethernet_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/ethernet_api.h)                     | <code>► INSERT-TEXT-HERE</code> |
| [itm_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/itm_api.h)                               | <code>► INSERT-TEXT-HERE</code> |
| [dma_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/dma_api.h)                               | <code>► INSERT-TEXT-HERE</code> |
| [Driver_Storage.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/Driver_Storage.h)                 | <code>► INSERT-TEXT-HERE</code> |
| [mbed_lp_ticker_wrapper.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/mbed_lp_ticker_wrapper.h) | <code>► INSERT-TEXT-HERE</code> |
| [sleep_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/sleep_api.h)                           | <code>► INSERT-TEXT-HERE</code> |
| [can_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/can_api.h)                               | <code>► INSERT-TEXT-HERE</code> |
| [analogin_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/analogin_api.h)                     | <code>► INSERT-TEXT-HERE</code> |
| [pwmout_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/pwmout_api.h)                         | <code>► INSERT-TEXT-HERE</code> |
| [Driver_Common.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/Driver_Common.h)                   | <code>► INSERT-TEXT-HERE</code> |
| [spi_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/spi_api.h)                               | <code>► INSERT-TEXT-HERE</code> |
| [gpio_irq_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/gpio_irq_api.h)                     | <code>► INSERT-TEXT-HERE</code> |
| [trng_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/trng_api.h)                             | <code>► INSERT-TEXT-HERE</code> |
| [qspi_api.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/mbed/hal/qspi_api.h)                             | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>ELEC2645_Project_el18apsr.GameClasses.CollisionEngine</summary>

| File                                                                                                                                                          | Summary                         |
| ---                                                                                                                                                           | ---                             |
| [CollisionEngine.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/GameClasses/CollisionEngine/CollisionEngine.h)     | <code>► INSERT-TEXT-HERE</code> |
| [CollisionEngine.cpp](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/GameClasses/CollisionEngine/CollisionEngine.cpp) | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>ELEC2645_Project_el18apsr.GameClasses.Maps</summary>

| File                                                                                                                                   | Summary                         |
| ---                                                                                                                                    | ---                             |
| [MapEngine.cpp](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/GameClasses/Maps/MapEngine.cpp) | <code>► INSERT-TEXT-HERE</code> |
| [MapData.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/GameClasses/Maps/MapData.h)         | <code>► INSERT-TEXT-HERE</code> |
| [MapEngine.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/GameClasses/Maps/MapEngine.h)     | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>ELEC2645_Project_el18apsr.GameClasses.SceneEngine</summary>

| File                                                                                                                                              | Summary                         |
| ---                                                                                                                                               | ---                             |
| [SceneEngine.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/GameClasses/SceneEngine/SceneEngine.h)     | <code>► INSERT-TEXT-HERE</code> |
| [SceneEngine.cpp](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/GameClasses/SceneEngine/SceneEngine.cpp) | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>ELEC2645_Project_el18apsr.GameClasses.BlockEngine</summary>

| File                                                                                                                                              | Summary                         |
| ---                                                                                                                                               | ---                             |
| [BlockEngine.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/GameClasses/BlockEngine/BlockEngine.h)     | <code>► INSERT-TEXT-HERE</code> |
| [BlockEngine.cpp](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/GameClasses/BlockEngine/BlockEngine.cpp) | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>ELEC2645_Project_el18apsr.GameClasses.Sprites</summary>

| File                                                                                                                                            | Summary                         |
| ---                                                                                                                                             | ---                             |
| [SpriteEngine.cpp](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/GameClasses/Sprites/SpriteEngine.cpp) | <code>► INSERT-TEXT-HERE</code> |
| [SpriteEngine.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/GameClasses/Sprites/SpriteEngine.h)     | <code>► INSERT-TEXT-HERE</code> |
| [Sprites.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/GameClasses/Sprites/Sprites.h)               | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>ELEC2645_Project_el18apsr.GameClasses.GameEngine</summary>

| File                                                                                                                                           | Summary                         |
| ---                                                                                                                                            | ---                             |
| [GameEngine.cpp](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/GameClasses/GameEngine/GameEngine.cpp) | <code>► INSERT-TEXT-HERE</code> |
| [GameEngine.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/GameClasses/GameEngine/GameEngine.h)     | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>ELEC2645_Project_el18apsr.GameClasses.Character</summary>

| File                                                                                                                                        | Summary                         |
| ---                                                                                                                                         | ---                             |
| [Character.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/GameClasses/Character/Character.h)     | <code>► INSERT-TEXT-HERE</code> |
| [Character.cpp](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/GameClasses/Character/Character.cpp) | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>ELEC2645_Project_el18apsr.Gamepad2</summary>

| File                                                                                                                       | Summary                         |
| ---                                                                                                                        | ---                             |
| [Bitmap.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/Gamepad2/Bitmap.h)       | <code>► INSERT-TEXT-HERE</code> |
| [Gamepad.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/Gamepad2/Gamepad.h)     | <code>► INSERT-TEXT-HERE</code> |
| [Gamepad.cpp](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/Gamepad2/Gamepad.cpp) | <code>► INSERT-TEXT-HERE</code> |
| [Bitmap.cpp](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/Gamepad2/Bitmap.cpp)   | <code>► INSERT-TEXT-HERE</code> |
| [N5110.h](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/Gamepad2/N5110.h)         | <code>► INSERT-TEXT-HERE</code> |
| [N5110.cpp](https://github.com/Alexpascual28/mgp_gamepad.git/blob/master/ELEC2645_Project_el18apsr/Gamepad2/N5110.cpp)     | <code>► INSERT-TEXT-HERE</code> |

</details>

---

##  Getting Started

**Set up your development environment:**

Ensure that you have MBED CLI installed and configured for your system. You will also need a compiler that supports the C++14 standard, such as ARM GCC.

**Required Libraries**

Ensure the following libraries are included in your project:

* MBED OS (ensure it is updated to the latest version compatible with your hardware).
* Any specific libraries for additional sensors or input devices you wish to integrate.

###  Installation

<h4>From <code>source</code></h4>

> 1. Clone the mgp_gamepad repository:
>
> ```console
> $ git clone https://github.com/Alexpascual28/mgp_gamepad.git
> ```
>
> 2. Change to the project directory:
> ```console
> $ cd mgp_gamepad
> ```
> 3. Compile the project:
> Navigate to the root of the project directory and run the following command:
>
>```console
> mbed compile -m K64F -t GCC_ARM
> ```
>
> Replace **K64F** with your specific MBED board model and **GCC_ARM** with your compiler.
>

###  Usage

1. Load the compiled program:

After compilation, load the **.bin** file generated into your MBED FRDM-K64 via USB.

2. Hardware setup:

Connect the Gamepad hardware as specified in the **Gamepad2** documentation. Ensure all connections are secure and that the LCD screen (N5110) is correctly wired to the MBED board.

<h4>From <code>source</code></h4>

> Run mgp_gamepad using the command below:
> ```console
> $ ./main
> ```

---

##  Detailed Explanation of Core Processes

The game operates using several core components:

* **BlockEngine**: Manages the blocks used to construct the game world. The engine updates block states and interacts with the **GameEngine** to reflect changes in the game world.
* **Character**: Controls the attributes and actions of the player's character, such as movement and interactions with the game world.
* **CollisionEngine**: Checks for and handles collisions between characters, blocks, and other entities within the game.
* **GameEngine**: Coordinates all other engines and manages the overall game state, including starting, pausing, and resuming the game.
* **SceneEngine**: Renders the current scene to the display using data from **Sprites** and the **N5110** library for output on the LCD.

---

##  Contributing

Contributions are welcome! Here are several ways you can contribute:

- **[Report Issues](https://github.com/Alexpascual28/mgp_gamepad.git/issues)**: Submit bugs found or log feature requests for the `mgp_gamepad` project.
- **[Submit Pull Requests](https://github.com/Alexpascual28/mgp_gamepad.git/blob/main/CONTRIBUTING.md)**: Review open PRs, and submit your own PRs.
- **[Join the Discussions](https://github.com/Alexpascual28/mgp_gamepad.git/discussions)**: Share your insights, provide feedback, or ask questions.

<details closed>
<summary>Contributing Guidelines</summary>

1. **Fork the Repository**: Start by forking the project repository to your github account.
2. **Clone Locally**: Clone the forked repository to your local machine using a git client.
   ```sh
   git clone https://github.com/Alexpascual28/mgp_gamepad.git
   ```
3. **Create a New Branch**: Always work on a new branch, giving it a descriptive name.
   ```sh
   git checkout -b new-feature-x
   ```
4. **Make Your Changes**: Develop and test your changes locally.
5. **Commit Your Changes**: Commit with a clear message describing your updates.
   ```sh
   git commit -m 'Implemented new feature x.'
   ```
6. **Push to github**: Push the changes to your forked repository.
   ```sh
   git push origin new-feature-x
   ```
7. **Submit a Pull Request**: Create a PR against the original project repository. Clearly describe the changes and their motivations.
8. **Review**: Once your PR is reviewed and approved, it will be merged into the main branch. Congratulations on your contribution!
</details>

<details closed>
<summary>Contributor Graph</summary>
<br>
<p align="center">
   <a href="https://github.com{/Alexpascual28/mgp_gamepad.git/}graphs/contributors">
      <img src="https://contrib.rocks/image?repo=Alexpascual28/mgp_gamepad.git">
   </a>
</p>
</details>

---
