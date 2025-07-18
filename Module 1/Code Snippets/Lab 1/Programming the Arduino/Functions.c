// Task 1: Blink an LED (if available)
void TaskBlinkLED(void *pvParameters) {
  pinMode(LED_BUILTIN, OUTPUT);
  while (1) {
    digitalWrite(LED_BUILTIN, HIGH);
    vTaskDelay(5000 / portTICK_PERIOD_MS); // Delay for 5000ms
    digitalWrite(LED_BUILTIN, LOW);
    vTaskDelay(5000 / portTICK_PERIOD_MS);
  }
}

// Task 2: Print a message
void TaskPrintMessage(void *pvParameters) {
  int x = 0;
  while (1) {
    x = x + 1;
    Serial.println(x);
    vTaskDelay(500 / portTICK_PERIOD_MS); // Delay for 500ms
  }
}
