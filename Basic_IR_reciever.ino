//https://roboticsbackend.com/arduino-ir-remote-controller-tutorial-setup-and-map-buttons/
#include <IRremote.h>
#define IR_RECEIVE_PIN 7
void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN);
}
void loop() {
  if (IrReceiver.decode()) {
    IrReceiver.resume();
    delay(50);
    //Serial.print("NUmber button =");
    int real_data = IrReceiver.decodedIRData.command;
    //Serial.println(real_data);
    switch (real_data) {
    case 22:{
     Serial.println("Number button = 0"); break;}
    case 12:{
      Serial.println("Number button = 1"); break;}
    case 24:{
     Serial.println("Number button = 2"); break;}
    case 94:{
     Serial.println("Number button = 3"); break;}
    case 8:{
     Serial.println("Number button = 4"); break;}
    case 28:{
     Serial.println("Number button = 5"); break;}
    case 90:{
     Serial.println("Number button = 6"); break;}
    case 66:{
     Serial.println("Number button = 7"); break;}
    case 82:{
     Serial.println("Number button = 8"); break;}
    case 74:{
     Serial.println("Number button = 9"); break;}
    case 13:{
     Serial.println("Number button = C"); break;}
    default: {
        Serial.println("Button not recognized");}
    }
  }
}
