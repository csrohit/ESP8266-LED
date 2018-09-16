#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>

byte ledPin = D5;
char ssid[] = "OnePlus3";               
char pass[] = "node_mcu";               

void setup() {
  Serial.begin(9600);
  WiFi.begin(ssid, pass);     
  Serial.printf("Connecting to %s",ssid);            
  while(WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(500);
  }                                                
  Serial.println("Connected to wifi");
  Serial.print("Status: "); Serial.println(WiFi.status());        
  Serial.print("IP: ");     Serial.println(WiFi.localIP());
  Serial.print("Subnet: "); Serial.println(WiFi.subnetMask());
  Serial.print("Gateway: "); Serial.println(WiFi.gatewayIP());
  Serial.print("SSID: "); Serial.println(WiFi.SSID());
  Serial.print("Signal: "); Serial.println(WiFi.RSSI());
  Serial.print("Networks: "); Serial.println(WiFi.scanNetworks());
  pinMode(ledPin, OUTPUT);
}
void loop(){
    Serial.println(httpRequest("http://www.example.org");
 delay(3000);
}

String httpRequest(String url){
   HTTPClient http;
 http.begin(url);
 int httpCode = http.GET();
 if(httpCode > 0){
  String payload = http.getString();
  http.end();
  return payload;
 }
}
