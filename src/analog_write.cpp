#include <Arduino.h>

const int ledPin = 9;

void setup() {

}

void loop() {
    for (int value = 0; value <= 255; value += 5) {
        analogWrite(ledPin, value);
        delay(50);
    }

    for (int value = 255; value >= 0; value -= 5){
        analogWrite(ledPin, value);
        delay(50);
    }

    analogWrite(9,0);
    delay(1000);
    analogWrite(9,64);
    delay(1000);
    analogWrite(9,128);
    delay(1000);
    analogWrite(9,255);
    delay(1000);
}
