#include <stdio.h>
#include <math.h>
int isprime(int x){
	int a = 1;
	for(int j=2;j<=sqrt(x);j++){	
		if(x%j == 0){
			a = 0; 
			break;
		}	
	}
	if(a == 1){
		return 1;
	}	
	return 0;	
}

int rev(int n){
	int a = n;
	int c = 0;
	while(a != 0){
		int rem = a%10;
		a = a/10;
		c++;
	}
	int rev = 0;
	while(c != 0){
		rev = rev+pow(10,c-1)*(n%10);
		n = n/10;
		c--;
	}
	return rev;
}

int main(){
	int n = 100000;
	for(int i=2;i<=n;i++){
		if(isprime(i) == 1 && rev(i) == i){
			printf("%d ", i);
		}
	}
	printf("\n");
}
