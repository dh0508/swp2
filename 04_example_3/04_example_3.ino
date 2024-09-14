#define PIN_LED 13
unsigned int count, toggle;
void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial) {
    ;
  }
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle);

}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(count);
  digitalWrite(PIN_LED, toggle%2);
  delay(1000);

}

int toggle_state(int toggle) {
  return toggle;
}