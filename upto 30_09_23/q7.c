#include <stdio.h>
#include <math.h>
int main(void){
	double s;
	printf("Enter the side : \n");
	scanf("%lf", &s);
	
	double area = (3*sqrt(3)/2)*pow(s,2);
	
	printf("The area of the hexagon is %lf\n", area);
}
