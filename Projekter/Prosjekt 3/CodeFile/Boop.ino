#include <CapacitiveSensor.h>
CapacitiveSensor capSensor = CapacitiveSensor (5,2);

int threshold = 1000;
int notes = 150;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
long sensorValue = capSensor.capacitiveSensor(30);
Serial.println(sensorValue);
if(sensorValue > threshold){
  tone(12, notes);
}
else if (sensorValue < threshold){
  noTone(12);
}
}
