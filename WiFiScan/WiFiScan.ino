/*
    This sketch demonstrates how to scan WiFi networks.
    The API is almost the same as with the WiFi Shield library,
    the most obvious difference being the different file you need to include:
*/
#include "WiFi.h"

#define LED_PICO 18
static uint32_t ledState = 0;

void setup()
{
  Serial.begin(115200);
  pinMode(LED_PICO, OUTPUT);
  digitalWrite(LED_PICO, HIGH);   // turn the LED on (HIGH is the voltage level)

  // Set WiFi to station mode and disconnect from an AP if it was previously connected
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);

  delay(2000); // Pause for 2 seconds
  Serial.println("\n" __FILE__ " " __DATE__ " " __TIME__);
#ifdef ARDUINO_TINYPICO
  Serial.println("TinyPICO!");
#else
  Serial.println("LittlePICO!");
#endif
  Serial.println("Setup done");
}

void loop()
{
#ifdef ARDUINO_TINYPICO
  Serial.print("TinyPICO! :");
#else
  Serial.print("LittlePICO! :");
#endif
  Serial.print("\tscan start ms =");
  Serial.println(millis());

  // WiFi.scanNetworks will return the number of networks found
  int n = WiFi.scanNetworks();
  Serial.println("scan done");
  if (n == 0) {
    Serial.println("no networks found");
  } else {
    Serial.print(n);
    Serial.println(" networks found");
    for (int i = 0; i < n; ++i) {
      // Print SSID and RSSI for each network found
      Serial.print(i + 1);
      Serial.print(": ");
      Serial.print(WiFi.SSID(i));
      Serial.print(" (");
      Serial.print(WiFi.RSSI(i));
      Serial.print(")");
      Serial.println((WiFi.encryptionType(i) == WIFI_AUTH_OPEN) ? " " : "*");
      delay(10);
    }
  }
  Serial.println("");

  // Wait a bit before scanning again
  delay(500);
  ledState++;
  if ( ledState % 2 )
    digitalWrite(LED_PICO, HIGH);   // turn the LED on (HIGH is the voltage level)
  else
    digitalWrite(LED_PICO, LOW);    // turn the LED off by making the voltage LOW

}
