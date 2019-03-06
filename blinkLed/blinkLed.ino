// Digital pins
const int L1 = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(L1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  blinkLed(L1);
}

void blinkLed(int L) {
  digitalWrite(L, HIGH);
  delay(1000);
  digitalWrite(L, LOW);
  delay(1000);
}

