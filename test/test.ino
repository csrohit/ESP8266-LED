#include<ESP8266WiFi.h>
const char* ssid = "OnePlus3";
const char* password = "node_mcu";
void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);
  digitalWrite(D5,HIGH);
}

void loop() {
 
  digitalWrite(5,HIGH);
  delay(200);
  digitalWrite(5,LOW);
  delay(200);

}
