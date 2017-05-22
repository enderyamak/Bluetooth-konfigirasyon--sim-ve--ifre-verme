#include <SoftwareSerial.h>

SoftwareSerial mySerial(10,11);//Rx Tx
String isim="Arduino uno";
int sifre=1234;
String uart="9600,0,0";




void setup() {
 Serial.begin(9600);
 Serial.println("hc-05 modül ayarlanıyor!!!");
 Serial.println("lütfen 5 saniye içinde hc05 üzerindeki butona basılı tutarak bağlantı yapınız");
 mySerial.begin(38400);
 delay(5000);
 mySerial.print("AT+NAME=");
 mySerial.println(isim);
 Serial.println("isim ayarlandı");
 Serial.println(isim);
 delay(1000);
  mySerial.print("AT+PSWD=");
  mySerial.println(sifre);
  Serial.print("Sifre ayarlandi: ");
  Serial.println(sifre);
  delay(1000);
  mySerial.print("AT+UART=");
  mySerial.println(uart);
  Serial.print("Baud rate ayarlandi: ");
  Serial.println(uart);
  delay(2000);
  Serial.println("Islem tamamlandi.");
}
 


void loop() {
  // put your main code here, to run repeatedly:

}
