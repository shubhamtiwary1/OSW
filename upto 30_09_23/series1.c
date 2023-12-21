#include <stdio.h>
int fact(int x);
int main(){
	double sum = 1;
	int n = 10;
	for(int i=1;i<=n;i++){
		if(i%2 == 1){
			sum = sum-1.0/(fact(i+1)*fact(i+2));
		}
		else{
			sum = sum+1.0/(fact(i+1)*fact(i+2));
		}
	}
	printf("%lf\n", sum);
}
int fact(int x){
	if(x == 0 | x == 1){
		return 1;
	}
	return x*fact(x-1);
}

