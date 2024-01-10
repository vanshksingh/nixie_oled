# Nixe OLED Clock Project !

The Nixe OLED Clock is a modern take on the classic Nixie tube clock, using six 128x32 OLED displays to create a visually stunning timepiece. This project involves the use of a microcontroller to control the OLED displays, displaying time in a unique and elegant manner. Perfect for DIY enthusiasts and those who appreciate a blend of technology and art in their decor.

## Table of Contents

1. Introduction
2. Features
3. Components Needed
4. Assembly Instructions
5. Firmware Installation
6. Usage
7. Troubleshooting
8. Contributing
9. License
10. Contacts

## Introduction

The Nixe OLED Clock is designed for hobbyists who enjoy building and programming their own timepieces. This README provides a comprehensive guide on how to assemble and program the clock.

## Features

- Six 128x32 OLED displays.
- Adjustable brightness and contrast.
- 12/24 hour time format.
- Low power consumption.
- Aesthetic design, reminiscent of classic Nixie tube clocks.
- Simple interface for time setting.

## Components Needed

- 1 x Microcontroller (e.g., Arduino, ESP32, or similar).
- 6 x 128x32 OLED displays.
- 1 x Real-Time Clock (RTC) module (e.g., DS3231).
- Wires and connectors.
- Power supply (appropriate for your microcontroller).
- Optional: 3D printed or laser-cut enclosure.

## Assembly Instructions

1. **Microcontroller Setup**: Begin by setting up your microcontroller. Ensure it's programmed with a bootloader and ready for firmware upload.

2. **Display Connection**: Connect the OLED displays to the microcontroller. Ensure that the connections are correct for power (VCC and GND) and data (SDA and SCL).

3. **RTC Module**: Connect the RTC module to your microcontroller. This is crucial for keeping accurate time.

4. **Testing**: Before finalizing the assembly, it's a good idea to test the connections. Power up the microcontroller and run a basic script to check if all displays and the RTC module are working.

5. **Enclosure Assembly**: If you have an enclosure, assemble it according to the design specifications and install the components inside.

## Firmware Installation

1. Connect the microcontroller to your computer.

2. Use the Arduino IDE or a similar tool to upload the Nixe OLED Clock firmware to the microcontroller. The firmware code is available in the `firmware` directory.

3. After uploading, disconnect the microcontroller from the computer and power it using the intended power supply.

## Usage

- **Setting the Time**: Use the designated buttons or interface to set the time. The time should remain accurate thanks to the RTC module.
- **Adjusting Brightness**: Brightness can be adjusted through a menu accessible via the control buttons.

## Troubleshooting

- If the displays do not light up, check your power connections and ensure that the OLED displays are correctly connected to the microcontroller.
- If the time is inaccurate, ensure that the RTC module is working and correctly set.

## Contributing

Contributions to the Nixe OLED Clock project are welcome. Please read `CONTRIBUTING.md` for details on our code of conduct, and the process for submitting pull requests.

## License

This project is licensed under the MIT License - see the `LICENSE.md` file for details.

## Contact

For any additional questions or feedback, please contact the project maintainer at vsvsasas@gmail.com

---

**Note**: This README is a generic template and should be modified according to the specific details of your project, such as the exact microcontroller and OLED models used, detailed wiring diagrams, and specific firmware functionalities.
