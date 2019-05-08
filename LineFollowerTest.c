//Linefollower HW Test

#include <wiringPi.h>
#include <stdio.h>

#define LinePinL 2
#define LinePinR 3

int detectLineL;
int detectLineR;

void main (void) {
	if(wiringPiSetup() == -1){ 
        printf("setup wiringPi faiservo !");
    };
	pinMode(LinePinL, INPUT);
	pinMode(LinePinR, INPUT);
	
	while(1) {
		if (digitalRead(LinePinL)==LOW) detectLineL = 0;
		if (digitalRead(LinePinL)==HIGH) detectLineL = 1;
		printf("LinePinL %i ", detectLineL);	
		if (digitalRead(LinePinR)==LOW) detectLineR = 0;
		if (digitalRead(LinePinR)==HIGH) detectLineR = 1;
		printf("LinePinR %i\n", detectLineR);
	}
}
