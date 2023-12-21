#include <stdio.h>
#include <math.h>

int main(){
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	/*int a = n;
	int c = 0;
	int z = 0;
	while(a != 0){
		int rem = a%10;
		a = a/10;
		if(rem == 0){
			z++;
		}
		c++;
	}
	
	int rev = 0;
	while(c != 0){
		rev = rev+pow(10,c-1)*(n%10);
		n = n/10;
		c--;
	}
	while(z != 0){
		printf("0");
		z--;
	}*/
	
	while(n 1= 0 ){
		printf("%d", (n%10));
		n /= 10;
	}
	printf("\n");
}
