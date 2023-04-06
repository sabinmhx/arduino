// Define pins for LEDs
const int ledPins[] = {9, 10, 11, 12, 13};
// Define number of LEDs
const int numLeds = 5;
// Define variable for random number
int randLed;

void setup() {
  // Set pins as outputs
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Generate a random number between 0 and numLeds - 1
  randLed = random(numLeds);
  // Turn on the selected LED
  digitalWrite(ledPins[randLed], HIGH);
  // Wait for half a second
  delay(500);
  // Turn off the selected LED
  digitalWrite(ledPins[randLed], LOW);
