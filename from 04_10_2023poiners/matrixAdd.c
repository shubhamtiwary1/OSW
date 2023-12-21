#include <stdio.h>

int main(){
	int n1 = 3;
	int n2 = 3;
	int m1[3][3] = {{1,6,4},{3,5,6},{9,2,1}};
	int m2[3][3] = {{4,3,6},{6,7,5},{2,8,4}};
	int m[n1][n2];
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			m[i][j] = m1[i][j]+m2[i][j];
		}
	}
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
