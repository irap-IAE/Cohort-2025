void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  while (!Serial);

  // Create tasks
  xTaskCreate(
    TaskBlinkLED,       // Task function
    "Blink",            // Task name
    128,                // Stack size
    NULL,               // Parameters
    LEDPriority,        // Priority
    NULL                // Task handle
  );

  xTaskCreate(
    TaskPrintMessage,
    "Print",
    128,
    NULL,
    PrintPriority,
    NULL
  );

  // Start the scheduler
  // After this, setup() and loop() won't be called anymore
  vTaskStartScheduler();
}

void loop() {
  // This will never run when using FreeRTOS
}
