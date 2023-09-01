#define LED3 3
#define LED5 5
#define LED6 6
#define LED9 9


void setup() {
Serial.begin(9600);

portMode(LED3, OUTPUT);
portMode(LED5, OUTPUT);
portMode(LED6, OUTPUT);
portMode(LED9, OUTPUT);
portMode(A0, INPUT);
}

void loop() {
   digitalWrite(LED3, 1);
  digitalWrite(LED5, 1);
  digitalWrite(LED6, 1);
  digitalWrite(LED9, 1);

  float sensorValue = analogRead(A0); 
  float voltage = 4.29*(sensorValue/1023); //
  Serial.print("\tADC10bits: ");Serial.print(sensorValue); Serial.print('\t'); Serial.println(voltage,3);
  delay(1000);
}
