# 8051-ADC-Interfacing-Programs
8051 ADC Interfacing Programs

📌 Introduction
A 7-segment display is an electronic display device used to show decimal numbers (0–9) and some alphabets.
With the 8051 microcontroller, we can drive the display by sending appropriate bit patterns.

There are two main types:
Common Cathode (CC) → All cathodes tied to GND, segments glow with logic HIGH.
Common Anode (CA) → All anodes tied to VCC, segments glow with logic LOW.

⚙️ Hardware Requirements
8051 Microcontroller (AT89C51/AT89S52 or compatible)
7-Segment Display (Common Cathode or Common Anode)
Resistors (330Ω) for current limiting
Breadboard / Development board
Power supply (5V DC)

🖥️ Software Requirements
Keil µVision IDE (for C/Assembly code)
Proteus (for simulation, optional)
Flash Programmer tool (for burning HEX file)

Patterns for Common Cathode
Digit	Hex Code	Segments ON
0	0x3F	a,b,c,d,e,f
1	0x06	b,c
2	0x5B	a,b,d,e,g
3	0x4F	a,b,c,d,g
4	0x66	b,c,f,g
5	0x6D	a,c,d,f,g
6	0x7D	a,c,d,e,f,g
7	0x07	a,b,c
8	0x7F	a,b,c,d,e,f,g
9	0x6F	a,b,c,d,f,g

🚀 Applications
Digital counters (0–9, 0000–9999)
Clocks and timers

Simple numeric displays for embedded systems
