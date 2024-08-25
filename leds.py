import serial
import sqlite3
from time import sleep

# Set up serial connection to Arduino
ser = serial.Serial('COM4', 9600)  # Replace 'COM4' with your Arduino port

# Set up SQLite database
conn = sqlite3.connect('led_log.db')
cursor = conn.cursor()

# Create table if it doesn't exist
cursor.execute('''CREATE TABLE IF NOT EXISTS log
                  (timestamp TEXT, led TEXT, state TEXT)''')


def log_state(led, state):
    cursor.execute("INSERT INTO log (timestamp, led, state) VALUES (datetime('now'), ?, ?)", (led, state))
    conn.commit()


# Command mapping for LEDs
commands = {
    '1': ('LED1', 'ON'), '2': ('LED1', 'OFF'),
    '3': ('LED2', 'ON'), '4': ('LED2', 'OFF'),
    '5': ('LED3', 'ON'), '6': ('LED3', 'OFF'),
    '7': ('LED4', 'ON'), '8': ('LED4', 'OFF'),
    '9': ('LED5', 'ON'), '0': ('LED5', 'OFF')
}

# Control LEDs
while True:
    command = input("Enter command (1=LED1 ON, 2=LED1 OFF, 3=LED2 ON, etc., 0=LED5 OFF, q=quit): ")

    if command in commands:
        ser.write(command.encode())  # Send command to Arduino
        log_state(commands[command][0], commands[command][1])  # Log the state

        sleep(0.1)  # Give Arduino time to respond
        print(ser.readline().decode().strip())  # Print Arduino response

    elif command == 'q':
        break

# Close connections
ser.close()
conn.close()
