// Analogic pins
const int flame_Pin = A0;
int flame_value = 0;

// Digital pins
const int passiveBuzzer_Pin = 2;
const int led_Pin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(passiveBuzzer_Pin, OUTPUT);
  pinMode(led_Pin, OUTPUT);
  digitalWrite(passiveBuzzer_Pin, LOW);
  digitalWrite(led_Pin, LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  flame_value = analogRead(flame_Pin);
  Serial.println(flame_value);

  if (flame_value < 28) {
    Serial.println("Fire detected !!!");
    Serial.println("LED & Buzzer ON!");
    activateBuzzer(passiveBuzzer_Pin, 400);
    blinkLed(led_Pin, 400);
  } else {
    Serial.println("Nothing to signaled!!!");
    digitalWrite(passiveBuzzer_Pin, LOW);
    digitalWrite(led_Pin, LOW);
  }
}

void activateBuzzer(int passiveBuzzer_Pin, int delayTime) {
  digitalWrite(passiveBuzzer_Pin, HIGH);
  delay(delayTime / 2);
  digitalWrite(passiveBuzzer_Pin, LOW);
  delay(delayTime / 2);
}

void blinkLed(int led_Pin, int delayTime) {
  digitalWrite(led_Pin, HIGH);
  delay(delayTime / 2);
  digitalWrite(led_Pin, LOW);
  delay(delayTime / 2);
}
