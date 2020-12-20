#include <SPI.h>

void setup()
{
  Serial.begin(115200);
  SPI.begin();
  for (byte i = 8; i <= 10; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
  digitalWrite(10, LOW);
  SPI.transfer(0x41);     // Boot from slot
  SPI.transfer(0x01);     // slot 1
  digitalWrite(10, HIGH);
}

void loop()
{
  Serial.println("Hello world");
  delay(500);
}
