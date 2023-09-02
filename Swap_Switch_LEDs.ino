int button1 = 2;
int button2 = 4;
int button3 = 7;
int button4 = 8;
int LED1 = 3;
int LED2 = 5;
int LED3 = 6;
int LED4 = 9;

void setup() {
  Serial.begin(9600);

  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);

}

void loop() {
  if (digitalRead(button1) == LOW) {
    Serial.print("Logic = ");Serial.print(digitalRead(button1));Serial.print("  ");
    Serial.println("button 1 is pressed and LED on 500 ms");
      digitalWrite(LED1, HIGH);
      delay(500);
      digitalWrite(LED1, LOW);
      delay(500);
      digitalWrite(LED2, HIGH);
      delay(500);
      digitalWrite(LED2, LOW);
      delay(500);
      digitalWrite(LED3, HIGH);
      delay(500);
      digitalWrite(LED3, LOW);
      delay(500);
      digitalWrite(LED4, HIGH);
      delay(500);
      digitalWrite(LED4, LOW);
      delay(500);
      
  } else if(digitalRead(button2) == LOW) {
     Serial.print("Logic = ");Serial.print(digitalRead(button1));Serial.print("  ");
    Serial.println("button 1 is pressed and LED on 500 ms");
       digitalWrite(LED4, HIGH);
      delay(500);
      digitalWrite(LED4, LOW);
      delay(500);
      digitalWrite(LED3, HIGH);
      delay(500);
      digitalWrite(LED3, LOW);
      delay(500);
      digitalWrite(LED2, HIGH);
      delay(500);
      digitalWrite(LED2, LOW);
      delay(500);
      digitalWrite(LED1, HIGH);
      delay(500);
      digitalWrite(LED1, LOW);
      delay(500);
      
  } else if(digitalRead(button3) == LOW) {
     Serial.print("Logic = ");Serial.print(digitalRead(button1));Serial.print("  ");
    Serial.println("button 1 is pressed and LED on 500 ms");
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      delay(500);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      delay(500);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);
      delay(500);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);
      delay(500);
      
  } else if(digitalRead(button4) == LOW) {
     Serial.print("Logic = ");Serial.print(digitalRead(button1));Serial.print("  ");
    Serial.println("button 1 is pressed and LED on 500 ms");
      digitalWrite(LED2, HIGH);
      digitalWrite(LED4, HIGH);
      delay(500);
      digitalWrite(LED2, LOW);
      digitalWrite(LED4, LOW);
      delay(500);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED3, HIGH);
      delay(500);
      digitalWrite(LED1, LOW);
      digitalWrite(LED3, LOW);
      delay(500);
  }
   
}
