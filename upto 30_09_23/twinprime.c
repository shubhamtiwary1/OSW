#include <stdio.h>
#include <math.h>

int prime(int x){
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
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	for(int i=2;i<=sqrt(n);i++){
		if(n%i == 0){
			if(prime(i)+prime(n/i) == 2){
				printf("%d %d\n", i, n/i);
			}
		}	
	}
	
}
