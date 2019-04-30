//Linefollower HW Test

#include <wiringPi.h>
#include <stdio.h>

#define LinePin0 0

void main (void) {
	if(wiringPiSetup() == -1){ 
        printf("setup wiringPi faiservo !");
    };
	pinMode(LinePin0, INPUT);
	
	while(1) {
		printf("LinePin %i\n", digitalRead(LinePin0));
	}
}
