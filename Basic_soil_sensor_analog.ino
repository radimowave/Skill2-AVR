int soilPin = A1; // Soilpin แทน analog ขาที่ 24
int val = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
    val = analogRead(soilPin); // อ่านค่าสัญญาณ analog 
    Serial.print("val (max1023) = ");      // แห้งจะมีค่า 1023 เปียกค่าจะลดลง
    Serial.println(val);         // พิมพ์ค่าของตัวแปร val
    delay(2000);
}
