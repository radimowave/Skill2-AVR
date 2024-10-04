# Skill2-AVR
นี่ใช้สำหรับ Skill 2 ที่ศึกษาเกี่ยวกับ AVR atMega8/328


1. Output_all_4LEDs.ino  ให้ LED ทั้ง 4 ดวงติด รวมทั้งมี input ที่ขา analog ปรับ POT จะขึ้นค่าแรงดันและเลขฐาน 10
2. Basic_Servo.ino ใช้ในการขับ Servo motor โดยต่าเข้าที่ D10 
3. Layout.pdf เป็นการบอกตำแหน่งขาต่าง ๆ ของบอร์ด
4. Basic_Servo.ino เป็นการต่อ Servo motor ที่ขา D10 (เปลี่ยนขาได้)=> https://docs.arduino.cc/learn/electronics/servo-motors
5. Sweep_servo.ino เป็นการต่อ Servo motor ที่ขา D9 ค่อย ๆ ปรับมุม 0-180 ทีละ 1 องศา
6. BlinkWithoutDelay.ino เป็นการทำให้หลอด LED ทั้ง 4 ดวง กระพริบโดยใช้ miilli()
7. Switches_test_with_LEDs.ino เป็นการทดสอบ Switch ถ้ากด LED จะติด 500 ms และดับ 500 ms
8. Swap_Switch_LEDs.ino เป็นการทดสอบการกด Switch แล้วทำให้ LED สลับติดในแต่ละเงื่อนไข
9. Switch_LEDs_test_Loop_5_Rounds เหมือน 8 แต่มีการวนซ้ำ 5 รอบ (มีใช้ Serial.prinf, %d, /n เหมือน c++)
10. DHT11_test.ino ต่อ Sensor DHT11 ที่ขา 10 (ถ้ากำหนด delay น้อยเกินไปจะอ่านผิด)
11. DHT11_LED.ino ตั้งอุณหภูมิ ถ้าเกิน LED ที่ตั้งไว้จะติดหรือจะต่อ Buzzer ให้ดังก็ได้
12. Basic_soil_sensor_analog.ino ทดสอบ Sensor วัดความชื้น (รูปซ้อม 2 ขาแบบอนาล็อก)
13. Basic_PIR_HR501.ino ทดสอบ PIR sensor (ต้องปรับระยะทางการรับและเวลาให้ดี ๆ)
14. Basic_LCD_I2C.ino ต่อจอ LCD แสดงผล (https://youtu.be/Y6erfEm4UPM)
15. Basic_RFID_MFRC522.ino ใช้ RFID reader MFRC522 (https://youtu.be/cKAUV7U7E14)
16. Basic_Tone_to_Buzzer.ino กำหนดความถี่และช่วงเวลาให้เสียงออก Buzzer (https://youtu.be/5WUuBDHbtc0)
17. Basic_IR_reciever.ino ใช้วนรับ IR ตามปุ่มกด
18. Ultrasonic_Buzzer.ino ใช้สำหรับ sensor HR-04 แสดงผลผ่าน LED และ Buzzer
19. L298Driver_dc_motor.ino ใช้สำหรับขับมอเตอร์ DC โดยการหมุนผ่าน switch (การต่อ https://1.bp.blogspot.com/-QUq3hP4PC3c/V763S6dbbuI/AAAAAAAAAXk/S3ichYnF1DYv2min01l4-zlutG2_jp2gwCLcB/s1600/L298N-motor-driver-connect-Arduino-R3.jpg )แต่มอเตอร์ที่ใช้คือ ตัวเหลือง (https://www.flyrobo.in/dc_3_6v_bo_gear_motor_for_arduino)
20. 
