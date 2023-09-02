#define ledPin   3
#define inputPin 10

void setup(){
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
}

void loop(){
  int value= digitalRead(inputPin);
  Serial.printf("value = %d \n", value);
  delay(500);

  if (value == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    delay(1000) ;
  }

  else
  {
    digitalWrite(ledPin, LOW);
  }
}
