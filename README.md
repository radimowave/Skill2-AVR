# Skill2-AVR
นี่ใช้สำหรับ Skill 2 ที่ศึกษาเกี่ยวกับ AVR atMega8/328


1. Output_all_4LEDs.ino  ให้ LED ทั้ง 4 ดวงติด รวมทั้งมี input ที่ขา analog ปรับ POT จะขึ้นค่าแรงดันและเลขฐาน 10
2. Basic_Servo.ino ใช้ในการขับ Servo motor โดยต่าเข้าที่ D10 
3. Layout.pdf เป็นการบอกตำแหน่งขาต่าง ๆ ของบอร์ด
4. Basic_Servo.ino เป็นการต่อ Servo motor ที่ขา D10 (เปลี่ยนขาได้)=> https://docs.arduino.cc/learn/electronics/servo-motors
5. Sweep_servo.ino เป็นการต่อ Servo motor ที่ขา D9 ค่อย ๆ ปรับมุม 0-180 ทีละ 1 องศา
6. BlinkWithoutDelay.ino เป็นการทำให้หลอด LED ทั้ง 4 ดวง กระพริบโดยใช้ miilli()
7. Switches_test_with_LEDs.ino เป็นการทดสอบ Switch ถ้ากด LED จะติด 500 ms และดับ 500 ms
