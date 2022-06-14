#include <M5Stack.h>
const int Analog = 36;
const int Digtal = 2;
void setup() {
// put your setup code here, to run once:
M5.begin();
pinMode(Digtal, INPUT_PULLUP); //membaca input nilai
dacWrite(25, 0); //
M5.Lcd.setCursor(100, 0, 4); //mengatur kursos di lcd M5Stack
M5.Lcd.print("MICROPHONE"); //menampilkan kata "Microphone" di lcd
}
uint16_t a_data; //menyimpan data dengan lebar data 16 bit untuk analog
uint16_t d_data; //menyimpan data dengan lebar data 16 bit untuk digital
void loop() {
// put your main code here, to run repeatedly:
a_data = analogRead(Analog); //membaca nilai analog
d_data = digitalRead(Digtal); //membaca nilai digital
Serial.printf("Analog:%0d Digtal:%0d\n", a_data, d_data); //menampilkan nilai pada serial monitor
M5.Lcd.setCursor(30, 120, 4);
M5.Lcd.printf("Analog:%0d Digtal:%0d\n", a_data, d_data); //menampilkan nilai pada lcd m5stack
delay(200);
}
