#include <Arduino.h>
#include <WiFi.h> 
void setup(){
  Serial.begin(115200);
  WiFi.mode(WIFI_AP_STA);
  WiFi.begin("Wokwi-GUEST", "", 6);
  Serial.print("Connecting to WiFi ..");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print('.');
    delay(1000);
  }
  Serial.println(WiFi.localIP());
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop(){
  Serial.println(digitalRead(LED_BUILTIN));
  digitalWrite(LED_BUILTIN, digitalRead(LED_BUILTIN)?LOW:HIGH);
  delay(1000);
}