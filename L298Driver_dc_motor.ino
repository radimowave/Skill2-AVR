//โปรแกรมสำหรับขับ L298 module โดยใช้สวิตว์ในการกด
//มอเตอร์ DC แรงดัน 3-6 V จ่ายจากบอร์ด UNO กินกระแสประมาณ 140-150 mA ต่อ 1 ตัว
// Define pins for switches
const int switch1 = 2;
const int switch2 = 3;
const int switch3 = 4;
const int switch4 = 5;

// Define motor pins
const int motor1Pin1 = 8;  // Motor 1 IN1 (for clockwise)
const int motor1Pin2 = 9;  // Motor 1 IN2 (for anticlockwise)
const int motor2Pin1 = 10; // Motor 2 IN3 (for clockwise)
const int motor2Pin2 = 11; // Motor 2 IN4 (for anticlockwise)

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize switch pins as input with internal pull-up resistors
  pinMode(switch1, INPUT_PULLUP);
  pinMode(switch2, INPUT_PULLUP);
  pinMode(switch3, INPUT_PULLUP);
  pinMode(switch4, INPUT_PULLUP);

  // Initialize motor pins as output
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
}

void loop() {
  // Check switch 1 for Motor 1 clockwise (active LOW)
  if (digitalRead(switch1) == LOW) {
    digitalWrite(motor1Pin1, HIGH);
    digitalWrite(motor1Pin2, LOW);
    Serial.println("Motor 1: Rotating Clockwise");
    //delay(1000);
  }
  // Check switch 2 for Motor 1 anticlockwise (active LOW)
  else if (digitalRead(switch2) == LOW) {
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, HIGH);
    Serial.println("Motor 1: Rotating Anticlockwise");
    //delay(1000);
  }
  
  // Stop Motor 1 if no switch is pressed
  else {
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, LOW);
    Serial.println("Motor 1: Stopped");
    //delay(1000);
  }
  

  // Check switch 3 for Motor 2 clockwise (active LOW)
  if (digitalRead(switch3) == LOW) {
    digitalWrite(motor2Pin1, HIGH);
    digitalWrite(motor2Pin2, LOW);
    Serial.println("Motor 2: Rotating Clockwise");
    //delay(1000);
  }
  
  // Check switch 4 for Motor 2 anticlockwise (active LOW)
  else if (digitalRead(switch4) == LOW) {
    digitalWrite(motor2Pin1, LOW);
    digitalWrite(motor2Pin2, HIGH);
    Serial.println("Motor 2: Rotating Anticlockwise");
    //delay(1000);
  }
  
  // Stop Motor 2 if no switch is pressed
  else {
    digitalWrite(motor2Pin1, LOW);
    digitalWrite(motor2Pin2, LOW);
    Serial.println("Motor 2: Stopped");
    //delay(1000);
  }
  

  // Add a small delay to avoid flooding the Serial Monitor
  delay(500);
}
