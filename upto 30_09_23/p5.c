#include <stdio.h>
int main(){
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10-i;j++){
			printf("  ");
		}
		for(int k=1;k<=i;k++){
			printf("%d ",k);
		}
		for(int l=i-1;l>=1;l--){
			printf("%d ",l);
		}
		printf("\n");
	}
	for(int i=1;i<=10;i++){
		for(int j=1;j<=i;j++){
			printf("  ");
		}
		for(int k=1;k<=10-i;k++){
			printf("%d ",k);
		}
		for(int l=10-i-1;l>=1;l--){
			printf("%d ",l);
		}
		printf("\n");
	}
}
