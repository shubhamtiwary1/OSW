#include <stdio.h>
int main(){
	double sum=0, product=1;
	int n=0;
	double a;
	double savg = 0;
	double pavg = 1;
	while(a != -101){
		printf("Enter the number: ");
		scanf("%lf", &a);
		if(a != -101){
			sum += a;
			product *= a;
			n++;
			
		}
	}
	if(n>0){
		savg = (double)sum/n;
		pavg = (double)product/n;
	}
	printf("Sum is: %lf, Product is: %lf, sumAverage is: %lf, productAverage: %lf\n", sum, product, savg, pavg);
}
	
	
