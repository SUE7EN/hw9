int led = 13;
int button = 2;

void setup() {
  Serial.begin(19200);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}
void loop() {
  if (digitalRead(button) == LOW) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
