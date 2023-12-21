#include <stdio.h>
#include <stdio.h>
int fact(int x){
	if(x == 0){
		return 1;
	}
	return x*fact(x-1);
}

int main(){
	int n = 5;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int k=0;k<i;k++){
			int x = fact(i)/(fact(k)*fact(i-k));
			}
			if(x<9){
				printf("%d ",x);
			}
			else{
				printf("%d", x);
			}	
		}
		printf("\n");
	}
}
