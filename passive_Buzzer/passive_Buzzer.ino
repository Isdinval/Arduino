// Digital pins
const int passiveBuzzer_Pin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(passiveBuzzer_Pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 80; i++) // When a frequency sound
  {
    digitalWrite (passiveBuzzer_Pin, HIGH) ; //send tone
    delay (500) ;
    digitalWrite (passiveBuzzer_Pin, LOW) ; //no tone
    delay (500) ;
  }
}
