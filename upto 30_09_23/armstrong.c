#include <stdio.h>
#include <math.h>

int main(){
	int i=1;
	while(i<10000){
		int c = 0;
		int b = i;
		while(b != 0){
			b = b/10;
			c++;
		}
		int sum = 0;
		int n = i;
		while(n !=0){
			int a = n%10;
			if(c == 3){
				sum += pow(a, 3);
			}
			else{
				sum += pow(a, 4);
			}
			n = n/10;
		}
		if(i == sum){
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
}
