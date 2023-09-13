
int piezoPin = 10; //กำหนดขา D10 ต่อ Buzzer/Piezo

void setup() {
  // put your setup code here, to run once:

}

void loop() {
//tone(pin, frequency, duration) 
//frequency คือ ความถี่ที่จะส่งออกไป duration ส่งออกไปนานเท่าไร
tone(piezoPin, 20000, 1000); 

delay(2000);
noTone(piezoPin);
}
