/* Simple "Hello World" example.

   After uploading this to your board, use Serial Monitor
   to view the message.  When Serial is selected from the
   Tools > USB Type menu, the correct serial port must be
   selected from the Tools > Serial Port AFTER Teensy is
   running this code.  Teensy only becomes a serial device
   while this code is running!  For non-Serial types,
   the Serial port is emulated, so no port needs to be
   selected.

   This example code is in the public domain.
*/

#define LED_PICO 18

void setup()
{
  pinMode(LED_PICO, OUTPUT);
  digitalWrite(LED_PICO, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.begin(115200);
  delay(1000);
  digitalWrite(LED_PICO, LOW);   // turn the LED on (HIGH is the voltage level)
  Serial.println("\n" __FILE__ " " __DATE__ " " __TIME__);
#ifdef BOARD_HAS_PSRAM
  Serial.println("BOARD_HAS_PSRAM");
  Serial.printf("Total heap: %d\n", ESP.getHeapSize());
  Serial.printf("Free heap: %d\n", ESP.getFreeHeap());
  Serial.printf("Total PSRAM: %d\n", ESP.getPsramSize());
  Serial.printf("Free PSRAM: %d\n", ESP.getFreePsram());
  delay(100);
  logMemory();
#endif
}

uint32_t myTime = millis();
uint32_t lCnt = 0;
void loop()
{
  static uint32_t ledState = 0;

  /*
    if ( !(lCnt % 100) )
      Serial.printf("#%d\n", lCnt);
    else
      Serial.print('.');
  */
  lCnt++;
  /*
    if ( !(lCnt % 1000) ) {
      digitalWrite(18, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(100);
    }
    else
      digitalWrite(18, LOW);    // turn the LED off by making the voltage LOW
  */
  if ( 0 && Serial.available() ) {
    while ( Serial.available() ) {
      Serial.print( (char)Serial.read() );
      delay(1);
    }
  }
  if ( (millis() - myTime) > 1000 ) {
    Serial.printf( "Loops/sec=%d\n", lCnt );
    //Serial.println("\n ... Hello World...\n");
    myTime += 1000;
    lCnt = 0;
    ledState++;
    if ( ledState % 2 )
      digitalWrite(LED_PICO, HIGH);   // turn the LED on (HIGH is the voltage level)
    else
      digitalWrite(LED_PICO, LOW);    // turn the LED off by making the voltage LOW
  }
}