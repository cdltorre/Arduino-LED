#ifndef LED_H_

#include <Arduino.h>

/********************************************************************
 * File Name: LED.h
 * Date     : 07/08/2016
 * Author   : Carlos M. De La Torre-Ugarte
 * Description:
 *				Manage LED's turn on and off, and dimmer a LED. 
 *
 ********************************************************************/
 
#define DEFAULT_PIN 13

class LED {
private:
	int pin;
	int state;
	
public:
	LED();
	LED(int pPin);
	
	void setPin(int pPin);
	int getPin() const;
	
	void setState(int pState);
	int getState() const;
	
	void on();
	void off();
	void dim(int percentege);
	void init();
};

extern LED led;
#endif