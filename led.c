// Including Library
#include <stdio.h>
#include <wiringPi.h>

// Define Using PinNo and Other Variables
#define LED_PIN 4   //GPIO 23

int main (void)
{
    // Initializing GPIO Port
    if (wiringPiSetup() == -1)
        return 1;
    // Initializing Pins
    pinMode(LED_PIN, OUTPUT);

    // looping program
    for (;;)
    {
        // On
        digitalWrite (LED_PIN, HIGH);
        // Sleep
        delay (1000);
        // Off
        digitalWrite (LED_PIN, LOW); 
        // Sleep
        delay (1000);
    }
    return 0;
}
