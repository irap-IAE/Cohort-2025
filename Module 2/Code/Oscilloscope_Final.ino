#include <Servo.h>  // Include the Servo library to control servo motors

Servo myservo;  // Create a Servo object to control a servo motor

// Define an array of servo angles to cycle through
// These correspond to approximate duty cycles: 0°, 30°, 60°, 90°, 180°
int dutyCycleLevels[] = {0, 30, 60, 90, 180};

int index = 0;  // Index to track the current position in the angle array
unsigned long previousMillis = 0;  // Stores the last time the servo was updated
const long interval = 5000;  // Interval between updates in milliseconds (5 seconds)

void setup() {
  myservo.attach(9);  // Attach the servo motor to digital pin 9
}

void loop() {
  unsigned long currentMillis = millis();  // Get the current time

  // Check if 5 seconds have passed since the last update
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;  // Save the current time

    // Move the servo to the next angle in the array
    myservo.write(dutyCycleLevels[index]);

    // Move to the next angle in the array, wrap around to the beginning after the last
    index = (index + 1) % 5;
  }
}
