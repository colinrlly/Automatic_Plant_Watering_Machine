int motorPin = A0; // pin that turns on the motor
int watertime = 90; // how long to water in seconds
int waittime = 4320; // how long to wait between watering, in minutes

void setup() {
  pinMode(motorPin, OUTPUT);    // set A0 to an output so we can use it to turn on the transistor
  pinMode(LED_BUILTIN, OUTPUT); // set pin 13 to an output so we can use it to turn on the LED
}

void loop() {
  digitalWrite(motorPin, HIGH);    // turn on the motor
  digitalWrite(LED_BUILTIN, HIGH); // turn on the LED
  delay(90000);                    // multiply by 1000 to translate seconds to milliseconds

  digitalWrite(motorPin, LOW);    // turn off the motor
  digitalWrite(LED_BUILTIN, LOW); // turn off the LED
  delay(waittime*60000);          // multiply by 60000 to translate minutes to milliseconds
}
