#include <stdio.h>
#include <math.h>

int main(){
	int i=2;
	while(i<10000){
	
		int a = 1;
		for(int j=2;j<=sqrt(i);j++){
		
			if(i%j == 0){
				a = 0; 
				break;
			}
		}
		if(a == 1){
			printf("%d ", i);
		}
		i++;
	}
}
