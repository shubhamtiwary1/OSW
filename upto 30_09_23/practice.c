#include <stdio.h>
int main(void){
	int a;
	int sum = 0;
	printf("Enter any number from 0 to 1000 :");
	scanf("%d", &a);
	sum = sum + a%10;
	a = a/10;
	sum = sum + a%10;
	a = a/10;
	sum = sum + a%10;
	printf("The sum is %d\n", sum);
	return 0;
}
