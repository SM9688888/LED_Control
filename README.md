# CS50 Final Project: Arduino LED Controller

## Project Overview
This project is an Arduino-based LED controller that allows users to control 5 LEDs through a Python script. The project logs the state of each LED (ON/OFF) in an SQLite database. The system demonstrates the integration of hardware (Arduino) with software (Python and SQL) and provides a user-friendly interface for controlling the LEDs.

## Features
- Control 5 LEDs using a serial connection to Arduino.
- Log LED states (ON/OFF) with timestamps in an SQLite database.
- Simple command-based interface for turning LEDs on and off.

## Components Used
- Arduino Uno 
- 5 LEDs
- 5 Resistors (220Ω)
- Jumper wires and a breadboard

## Prerequisites
- [Arduino IDE](https://www.arduino.cc/en/software)
- [Python 3.x](https://www.python.org/downloads/)
- [pySerial library](https://pyserial.readthedocs.io/en/latest/): Install using `pip install pyserial`
- [SQLite3](https://www.sqlite.org/index.html) (comes pre-installed with Python)


Hardware Setup:
1-Connect the 5 LEDs to digital pins 2, 3, 4, 5, and 6 on the Arduino.
2-Connect the resistors in series with each LED.
3-Power the Arduino and connect it to your computer using a USB cable.


Software Setup:

Arduino Code:
1-Open led_controller.ino in the Arduino IDE.
2-Upload the code to your Arduino board.


Python Script:
1-Ensure Python 3.x is installed on your system.
2-Install the pySerial library by running


How to Use:
The Python script will prompt you to enter commands to control the LEDs:
1: Turn LED1 ON
2: Turn LED1 OFF
3: Turn LED2 ON
4: Turn LED2 OFF
5: Turn LED3 ON
6: Turn LED3 OFF
7: Turn LED4 ON
8: Turn LED4 OFF
9: Turn LED5 ON
0: Turn LED5 OFF
Enter q to quit the program.

Logging and Database:
The state of each LED (ON/OFF) is logged in an SQLite database (led_log.db) with timestamps.
You can query the database using any SQLite-compatible software to view the logs.

Acknowledgments:
This project was created as part of the CS50 course.
Special thanks to the CS50 team and the open-source community.


Project video:
https://youtu.be/QhM4Kgn-2vA

