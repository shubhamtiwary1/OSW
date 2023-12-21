#include <stdio.h>

void calculator(int, int, int*, int*, int*, double*);
int main(){
	int a = 5;
	int b = 10;
	int add, sub, mult;
	double div;
	calculator(a,b,&add,&sub,&mult,&div);
	printf("%d %d %d %d %d %lf\n", a, b, add, sub, mult, div);
}

void calculator(int a, int b, int *add, int *sub, int *mult, double *div){
	*add = a+b;
	*sub = a-b;
	*mult = a * b;
	*div =(double) a / b;
}
