#include <Arduino.h>

void setup() {
    pinMode(12,OUTPUT);
    Serial.begin(9600);
    Serial.println("Listening...put your ear on the sensor!");
}

void loop() {
    digitalWrite(12, HIGH);
    delayMicroseconds(10);
    digitalWrite(12, LOW);
    delay(60);
}