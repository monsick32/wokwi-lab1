void setup() {
  Serial.begin(115200);
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(25, OUTPUT);

  Serial.println("");
  Serial.println("hello, this is the furry detector");
  Serial.println("the LEDs flash when a furry is neardy");
  Serial.println("furry detection");
}

void loop() {
  digitalWrite(32, HIGH);
  delay(500);
  digitalWrite(32, LOW);

  digitalWrite(33, HIGH);
  delay(500);
  digitalWrite(33, LOW);

  digitalWrite(25, HIGH);
  delay(500);
  digitalWrite(25, LOW);
}
