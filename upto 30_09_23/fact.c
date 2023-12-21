#include <stdio.h>
#include <math.h>
int main(){
	int a = 8;
	int ans = 1;
	while(a != 0){
		ans = ans*a;
		a = a-1;
	}
	printf("%d\n", ans);
	
	//prime no.
	int n = 5;
	for(int i=1;i<=5;i++){
		int c = 0;
		for(int j=1;j<sqrt(i);j++){
			if(i%j == 0){
				c++;
			}
		}
		if(c == 0){
			printf("%d", i);
		}
	}
}
