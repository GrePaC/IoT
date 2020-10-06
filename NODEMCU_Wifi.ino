#include <ESP8266WiFi.h>
String ssid = "Totalplay-E3A2";
String password = "E3A29384K7W5caWD";

byte cont=0;
byte max_intentos=50;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("\n");
  // conecxion wifi
  WiFi.begin(ssid.c_str(),password.c_str());
  while(WiFi.status()!= WL_CONNECTED and cont<max_intentos){
      cont++;
      delay(500);
      Serial.print(".");
   }
   Serial.println("");
   if (cont<max_intentos){
      Serial.println("************************");
      Serial.print("Conectado a la red Wifi: ");
      Serial.println(WiFi.SSID());
      Serial.print("IP: ");
      Serial.println(WiFi.localIP());
      Serial.println("************************");
    }
    else{
      Serial.println("************************");
      Serial.println("Error de conexion");
      Serial.println("************************");
    }
}

void loop() {
  // put your main code here, to run repeatedly:

}
