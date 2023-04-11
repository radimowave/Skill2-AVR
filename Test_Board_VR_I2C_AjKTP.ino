#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);   //Module IIC/I2C Interface บางรุ่นอาจจะใช้ 0x3f
//LED
int ledPin6 = 6;      // LED connected to digital pin 6
int ledPin9 = 9;      // LED connected to digital pin 9
int ledPin3 = 3;      // LED connected to digital pin 3
int ledPin5 = 5;      // LED connected to digital pin 5
//
//int OutPin0 = A1;      // LED connected to digital pin 14
#define BUZZER_PIN 10
//SW
int SW1 = 2;
int SW2 = 4;
int SW3 = 7;
#define SW4 8
//int SW4 = 8;
int analogPin = A0;  // potentiometer connected to analog pin 3
int val_VR = 0;         // variable to store the read value

//LCD
byte Heart[8]={0b00000,0b01010,0b11111,0b11111,0b01110,0b00100,0b00000,0b00000};
byte Bell[8] = {0b00100,0b01110,0b01110,0b01110,0b11111,0b00000,0b00100,0b00000};
byte Smile[8] = {0B00000, 0B11011, 0B11011, 0B00000, 0B10001, 0B10001, 0B11111, 0B00000} ;
byte Lock[8] = {0B01110,  0B10001,  0B10001,  0B11111,  0B11011,  0B11011,  0B11111,  0B00000};
byte Sound[8] = {0B00001, 0B00011,  0B00101, 0B01001, 0B01001,  0B01011, 0B11011, 0B11000};
byte Speaker[8] = {  B00001,  B00011,  B01111,  B01111,  B01111,  B00011,  B00001,  B00000};

void setup()
{
  Serial.begin(9600); // ถ้าไม่ใส่จะไม่มีข้อความออก
  pinMode(ledPin6, OUTPUT);   // sets the pin as output
  pinMode(ledPin9, OUTPUT);   // sets the pin as output
  pinMode(ledPin3, OUTPUT); // ถ้าไม่กำหนด pinmode แต่ให้ digitalwrite ก็ออกแต่ออกน้อย
  pinMode(ledPin5, OUTPUT);   // sets the pin as output
  //
  pinMode(BUZZER_PIN, OUTPUT);  
  //SW
  pinMode(SW1, INPUT_PULLUP);
  pinMode(SW2, INPUT_PULLUP);
  pinMode(SW3, INPUT_PULLUP);
  pinMode(SW4, INPUT_PULLUP);
  //lcd
  lcd.begin();
  //lcd.noBacklight();   // ปิด backlight
  lcd.backlight();       // เปิด backlight 
  lcd.home();
  lcd.createChar(0, Heart); //ออกแบบตัวอักษรตัวที่ 1 เริ่มต้นที่ 0ชื่อ Heart
  lcd.createChar(1, Bell);
  lcd.createChar(2,Smile);
  lcd.createChar(3,Lock);
  lcd.createChar(4,Sound);
  lcd.createChar(5,Speaker);
  //
  lcd.setCursor(0,0); //Heart
  lcd.write(0);
    lcd.setCursor(1,0); //Hello
  lcd.print("Hello, Myduino");
  lcd.setCursor(15,0); //
  lcd.write(1);
  lcd.setCursor(0, 1);
  lcd.write(2);
  lcd.setCursor(1, 1); //ESE
  lcd.print("ESE @Khon Kaen");
  lcd.setCursor(15, 1);
  lcd.write(3);
}

void loop()
{
  val_VR = analogRead(analogPin); // read the input pin
  Serial.println(val_VR);
  ///VR LED 6 and 9
  analogWrite(ledPin6, val_VR / 4);// analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  analogWrite(ledPin9, 255-val_VR / 4);// analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  //Switch LED 3  and 5
  bool val_SW1 = digitalRead(SW1); 
  bool val_SW2 = digitalRead(SW2); 
  bool val_SW3 = digitalRead(SW3); 
  bool val_SW4 = digitalRead(SW4); 
  if(val_SW1 == 0){
    digitalWrite(3, HIGH); //ไม่ตรง
    delay (1000);
    digitalWrite(3, LOW);
    digitalWrite(BUZZER_PIN, HIGH);
    delay (500);
     digitalWrite(BUZZER_PIN, LOW);
        ;} 
    else if(val_SW2 == 0){
  digitalWrite(5, HIGH);  //ตรง
  delay(1000); 
digitalWrite(5, LOW);   // ตรง
 digitalWrite(BUZZER_PIN, HIGH);
    delay (500);
     digitalWrite(BUZZER_PIN, LOW);
 } else if(val_SW3 == 0){
   for(int i=0; i < 4; i++) { 
    digitalWrite(3, HIGH); //ไม่ตรง
    delay (500);
    digitalWrite(3, LOW);
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(5, HIGH);  //ตรง
    delay(500); 
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(5, LOW);   // ตรง
 } } else  if(val_SW4 == 0){
   Serial.println(val_SW4);
   for (int i=0; i < 5; i++){
     digitalWrite(BUZZER_PIN, HIGH);
     digitalWrite(3, HIGH); //ไม่ตรง
      digitalWrite(5, HIGH);  //ตรง
    delay(500); 
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);   // ตรง
    delay(500); 
   } }
}