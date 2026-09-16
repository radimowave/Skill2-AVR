#define BUZZER 10
#define SW4 8
#define LED4 9

void setup() {
  pinMode(BUZZER, OUTPUT);
  pinMode(SW4, INPUT_PULLUP);
  pinMode(LED4, OUTPUT);
}

void loop() {

  if (digitalRead(SW4) == LOW) {

    digitalWrite(LED4, HIGH);

    delay(500);

    tone(BUZZER, 3000);
    delay(2000);

    noTone(BUZZER);

    digitalWrite(LED4, LOW);

    while (digitalRead(SW4) == LOW) {
    }
  }
}
