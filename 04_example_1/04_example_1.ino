#define PIN_LED 13

void setup() {
  pinMode(PIN_LED, OUTPUT);

}

void loop() {
  digitalWrite(PIN_LED, 1);
  //digitalWrite(PIN_LED, 0);

}
