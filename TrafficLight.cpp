// Week 4: Arduino Traffic Light Simulation
// Author: 0xHitek

// Pin assignments
#define RED_LED    8
#define YELLOW_LED 9
#define GREEN_LED  10

// Timing (ms)
const int GREEN_TIME  = 4000;
const int YELLOW_TIME = 2000;
const int RED_TIME    = 4000;

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  // Green light ON
  digitalWrite(GREEN_LED, HIGH);
  delay(GREEN_TIME);
  digitalWrite(GREEN_LED, LOW);

  // Yellow light ON
  digitalWrite(YELLOW_LED, HIGH);
  delay(YELLOW_TIME);
  digitalWrite(YELLOW_LED, LOW);

  // Red light ON
  digitalWrite(RED_LED, HIGH);
  delay(RED_TIME);
  digitalWrite(RED_LED, LOW);
}
