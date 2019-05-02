//Linefollower HW Test

#include <wiringPi.h>
#include <stdio.h>

#define LinePin0 0
#define LinePin1 2

int detectLine0;
int detectLine1;

void main (void) {
	if(wiringPiSetup() == -1){ 
        printf("setup wiringPi faiservo !");
    };
	pinMode(LinePin0, INPUT);
	pinMode(LinePin1, INPUT);
	
	while(1) {
		detectLine0 = -1;
		if (digitalRead(LinePin0)==LOW) then detectLine0 = 0;
		if (digitalRead(LinePin0)==HIGH) then detectLine0 = 1;
		printf("LinePin0 %i\n", detectLine0);
		detectLine1 = -1;
		if (digitalRead(LinePin1)==LOW) then detectLine1 = 0;
		if (digitalRead(LinePin1)==HIGH) then detectLine1 = 1;
		printf("LinePin1 %i\n", detectLine1);
	}
}
