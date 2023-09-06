#include <SPI.h>
#include <MFRC522.h> //library MFRC522 by GithubCommunity

int LedPinON = 3;             
int LedPinNO = 6;               
int BuzzerPin = 5;
constexpr uint8_t RST_PIN = A3;     //สามารถใช้ขา Analog แทน DigitAL "ได้"
constexpr uint8_t SS_PIN = 10;     
MFRC522 rfid(SS_PIN, RST_PIN);
MFRC522::MIFARE_Key key;
String tag;

void setup() {
  Serial.begin(9600);
  SPI.begin(); // Init SPI bus
  rfid.PCD_Init(); // Init MFRC522
  pinMode(BuzzerPin, OUTPUT);
  pinMode(LedPinON, OUTPUT);
  pinMode(LedPinNO, OUTPUT);
}


void loop() {
  if ( ! rfid.PICC_IsNewCardPresent())
    return;
  if (rfid.PICC_ReadCardSerial()) {
    for (byte i = 0; i < 4; i++) {
      tag += rfid.uid.uidByte[i];
    }
    Serial.print("UID = ");
    Serial.println(tag);
   
    if (tag == "25218120856") {    //24324615148 plate //25218120856 keylike
      Serial.println("Access Granted!");
      digitalWrite(BuzzerPin, HIGH);
      delay(100);
      digitalWrite(BuzzerPin, LOW);
      delay(100);
      digitalWrite(LedPinON, HIGH);
      delay(1000);
      digitalWrite(LedPinON, LOW);
      delay(1000);
          } else {
      Serial.println("Access Denied!");
      digitalWrite(BuzzerPin, HIGH);
      delay(2000);
      digitalWrite(BuzzerPin, LOW);
      delay(100);
      digitalWrite(LedPinNO, HIGH);
      delay(1000);
      digitalWrite(LedPinNO, LOW);
      delay(1000);
    }
    tag = "";
    rfid.PICC_HaltA();
    rfid.PCD_StopCrypto1();
  }
}
