#include <BLEDevice.h>
#include <BLEScan.h>
int ledPin = 13;
int buzzer = 11;
const int distanceInch = 1;
void setup() 
{
 pinMode(ledPin, OUTPUT);
 Serial.begin(9600);
 while(!Serial)
 if(!BLE.begin())
 {
  Serial.println("Starting BLE failed..");
  while (1);
 }
 Serial.println("BLE Central scan..");
 BLE.scan();
}
void loop() 
{
 BLEDevice peripheral = BLE.available();
   if(peripheral)
   {
    Serial.println("Discovered a peripheral..");
    Serial.println("Address: ");
    Serial.println(peripheral.address());
    }
    else
    {Serial.println("No device detected");}
  if(BLE.available())
  {
  tone(buzzer, 450);
  delay(500);
  noTone(buzzer);
  delay(500);
  digitalWrite(ledPin,HIGH);
  delay(500);
  digitalWrite(ledPin,LOW);
  delay(500);
  }
  else
  {
    digitalWrite(ledPin,LOW);
    noTone(buzzer);  
  }
}   
