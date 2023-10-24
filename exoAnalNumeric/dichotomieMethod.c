#include <stdio.h>
#include <math.h>
float f(float x){return sin(x);}
int main()
{
    float a = 1.;
    float b = 5.;
    float x = 0.0;
    float e = 0.000001;
    while(1){
        x = (b + a)/2;
        
        if(fabs(f(x))<=e){break;}
        
        if((f(a)*f(x))<=0){
            b = x;
        }
        if((f(b)*f(x))<=0){
            a = x;
        }
        
    } printf("%f\n",x);
  
    return 0;
}
