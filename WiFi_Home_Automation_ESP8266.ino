
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.

char auth[] = "XXXXXXXXXXXXXXXXXXX";//Enter your Auth token here

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "XXXXXXX";           //SSID
char pass[] = "XXXXXXXXXXX";      //Password

void setup()
{
  // Debug console
  Serial.begin(115200); //ESP8266 boards

  //Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 8080);
  //Blynk.begin(auth, ssid, pass, IPAddress(XXX,XXX,X,XX), 8080);
}

void loop()
{
  Blynk.run();
}
