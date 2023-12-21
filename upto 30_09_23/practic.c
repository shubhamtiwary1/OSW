#include <stdio.h>
#include <math.h>
int main(){
	double x;
	double sum = 1;
	printf("Enter the number: ");
	scanf("%lf", &x);
	for(int i=1;i<10;i++){
		if(i%2 == 0){
			sum = sum+(pow(x, i)/i);
		}
		else{
			sum = sum-(pow(x,i)/i);
		}	
	}
	printf("%lf\n", sum);
	return 0;
}
