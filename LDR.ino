//when the enviroment gets darker, led will turn on
int led = 13;

void setup() {
  pinMode (led, OUTPUT);
  Serial.begin(19200);
  pinMode(A0, INPUT);
  }

void loop() {
  int value;
  value = analogRead(A0);
  Serial.println (value);
  if (value <= 50) {
    digitalWrite(led, HIGH);
    Serial.println("turning the LED on");
  } else {
    digitalWrite(led, LOW);
    Serial.println("turning the LED off");
  }
}
