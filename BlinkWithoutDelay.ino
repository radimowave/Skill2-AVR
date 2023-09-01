#define ledPin3 3
#define ledPin5 5
#define ledPin6 6
#define ledPin9 9

// Variables will change:
int ledState = LOW;  // ledState used to set the LED


unsigned long previousMillis = 0;  // will store last time LED was updated

// constants won't change:
const long interval = 1000;  // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin9, OUTPUT);
}

void loop() {
 
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    digitalWrite(ledPin3, ledState);
    digitalWrite(ledPin5, ledState);
    digitalWrite(ledPin6, ledState);
    digitalWrite(ledPin9, ledState);
    
  }
}
