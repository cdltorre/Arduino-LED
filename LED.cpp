#include "LED.h"

LED::LED() {
	setPin(DEFAULT_PIN);
}

LED::LED(int pPin) {
	setPin(pPin);
}

void LED::setPin(int pPin) {
	pin = pPin;
	state = LOW;
}

int LED::getPin() const {
	return pin;
}

void LED::on() {
	state = HIGH;
	digitalWrite(pin, state);
}

void LED::off() {
	state = LOW;
	digitalWrite(pin, state);
}

void LED::dim(int percentege){
	int val = constrain(percentege, 0, 100);
	int value = map(val, 0, 100, 0, 255);
	
	analogWrite(pin, value);
}

void LED::init() {
	pinMode(pin, OUTPUT);
}

void LED::setState(int pState) {
	state = pState;
}

int LED::getState() const {
	return state;
}

LED led = LED();