#include <Arduino.h>

int ledPin = 5;

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    digitalWrite(ledPin,OUTPUT);
}