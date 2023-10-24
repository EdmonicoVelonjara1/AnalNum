#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define Pi 3.14

double f(double x){
	return log(x)-1;	
}

int main(){
	double a = 1;
	double b = 10;
	double aire = 0.;
	double e = 0.0000001; 
	double rectaire =0.;
	double corde = 0.;
	double aireSimp = 0.;
	double aireArc = 0;
	
	while(a+e<b){
		
		corde = sqrt((pow(e,2) + pow(f(a+e)-f(a),2)));
		aireArc = (60/360)*2*Pi*pow(corde,2);
		
		//Pour trapèze
		aire += (f(a)*(e) + e*(f(a+e)-f(a))/2);	
		
		//pour rectangle
		rectaire +=(f(a+e)*(e)) ;	
		
		//Simpson method 
		aireSimp += (f(a)*(e) + e*(f(a+e)-f(a))/2) + aireArc - pow(corde,2)*sqrt(3)/2 ;
		a = a +e;
	}
	printf("trap = %lf\nrect = %lf\naireSimp = %lf",aire,rectaire,aireSimp);

	return 0;
}
