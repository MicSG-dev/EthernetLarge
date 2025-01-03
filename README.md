# Ethernet Large
Ethernet library for Arduino W5500 with compatibility for the [SSLClient](https://github.com/OPEnSLab-OSU/SSLClient) library for using HTTPS connections. 

Library was based on the Arduino Ethernet Library: https://github.com/arduino-libraries/Ethernet

## Instructions for Generating Certificate
To generate the certificate (which will be stored in `trust_anchors.h`, file located next to the sketch), access https://openslab-osu.github.io/bearssl-certificate-utility/ and enter the websites you will access.

## Compatibility
Only compatible with W5500. W5100 support has been removed. To continue using the W5100 chip, use the [EthernetLargeW5100](https://github.com/MicSG-dev/EthernetLargeW5100) library.

## License

Copyright (c) 2010 Arduino LLC. All right reserved.

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

---
_Some modifications based on [SapientHetero/Ethernet](https://github.com/SapientHetero/Ethernet)_
