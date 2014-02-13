# Including Library
import RPi.GPIO as GPIO
import time

# Define Using PinNo and Other Variables
LED_PIN = 23

# Initializing GPIO Port
GPIO.setmode(GPIO.BCM)
# Initializing Pins
GPIO.setup(LED_PIN, GPIO.OUT)

# looping program
while(True):
	# On
    GPIO.output(LED_PIN, True)
    # Sleep
    time.sleep(1)
    # Off
    GPIO.output(LED_PIN, False)
    # Sleep
    time.sleep(1)
