#include<stdio.h>

int main(void){
	printf("Hello World\n");
	
	
	int a = 10;
	int b = 20;
	int sum = a+b;
	printf("The sum of %d and %d is %d\n", a, b, sum);
	
	
	int c1;
	float d,sum1;
	
	printf("Enter two data: ");
	scanf("%d %f", &c1, &d);
	sum1 = c1+d;
	printf("The sum is %f \n" , sum1);
	
	float c;
	float f;
	printf("Enter degree in celsius: ");
	scanf("%f", &c);
	f =(9*c/5)+32;
	printf("%f \n" , f);
	return 0;
}
