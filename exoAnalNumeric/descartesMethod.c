#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x){
	return sin(x);
}
 
int main(){
	float x = 1.2; 
	float a = 1.;
	float b = 5.;
	float e = 0.000000001;
	float x0 = a, x1 = b;
	for(int i = 0; i < 1000 ; i++){
		
		if(fabs(f(x1)-f(x0)) <=e){
			printf("%f",x1);
			break;
		}
		x = x1 -((x1-x0)*f(x1))/(f(x1) - f(x0));
		x0 = x1;
		x1 = x;
	}
	
	return 0;
}
