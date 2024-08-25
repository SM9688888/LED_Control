const int ledPins[5] = {2, 3, 4, 5, 6}; // LEDs connected to digital pins 2-6

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT); // Set each LED pin as output
  }
  Serial.begin(9600); // Start serial communication
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read(); // Read the command from serial
    
    switch(command) {
      case '1':
        digitalWrite(ledPins[0], HIGH); // Turn on LED1
        Serial.println("LED1 ON");
        break;
      case '2':
        digitalWrite(ledPins[0], LOW); // Turn off LED1
        Serial.println("LED1 OFF");
        break;
      case '3':
        digitalWrite(ledPins[1], HIGH); // Turn on LED2
        Serial.println("LED2 ON");
        break;
      case '4':
        digitalWrite(ledPins[1], LOW); // Turn off LED2
        Serial.println("LED2 OFF");
        break;
      case '5':
        digitalWrite(ledPins[2], HIGH); // Turn on LED3
        Serial.println("LED3 ON");
        break;
      case '6':
        digitalWrite(ledPins[2], LOW); // Turn off LED3
        Serial.println("LED3 OFF");
        break;
      case '7':
        digitalWrite(ledPins[3], HIGH); // Turn on LED4
        Serial.println("LED4 ON");
        break;
      case '8':
        digitalWrite(ledPins[3], LOW); // Turn off LED4
        Serial.println("LED4 OFF");
        break;
      case '9':
        digitalWrite(ledPins[4], HIGH); // Turn on LED5
        Serial.println("LED5 ON");
        break;
      case '0':
        digitalWrite(ledPins[4], LOW); // Turn off LED5
        Serial.println("LED5 OFF");
        break;
    }
  }
}
