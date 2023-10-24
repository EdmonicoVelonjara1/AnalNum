#include <stdio.h>
#include <math.h>

float f(float x){return sin(x);}
float df(float x){return cos(x);}
int main()
{
    float x0 = 3.001;
    float a = 1.;
    float b = 4.;
    float eps = 0.01;
    float x = 1.;
    
    for(int i = 0;i<100;i++){
        x = x0 - f(x0)/df(x0);
      
        if(fabs(f(x))<=eps && x<=b && x >=a){
			  printf("x = %f\n",x);
			break;}
        x0 = x;
    }
   
    return 0;
}
