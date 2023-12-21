#include <stdio.h>
#include <stdlib.h>

int** multiply(int** a, int** b, int n1, int m1, int n2, int m2);
int** display(int** ans, int n1, int m2);
int main(){
	int n1;
	int m1;
	int** a;
	printf("Enter size of 1st matrix: ");
	scanf("%d %d", &n1, &m1);
	
	a = (int**)malloc(n1*sizeof(int*));	
	for(int i=0;i<n1;i++){
		a[i] = (int*)malloc(m1*sizeof(int));
	}
	
	printf("Enter the elements of 1st the matrix: ");
	for(int i=0;i<n1;i++){
		for(int j=0;j<m1;j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	int n2;
	int m2;
	printf("Enter size of 2nd matrix: ");
	scanf("%d%d", &n2, &m2);
	
	int** b = (int**)malloc(n2*sizeof(int*));
	for(int i=0;i<n2;i++){
		b[i] = (int*)malloc(m2*sizeof(int));
	}
	
	printf("Enter the elements of 2nd matrix: ");
	for(int i=0;i<n2;i++){
		for(int j=0;j<m2;j++){
			scanf("%d", &b[i][j]);
		}	
	}
	
	if(m1 == n2){
		int** a1 = multiply(a, b, n1, m1, n2, m2);
		display(a1, n1, m2);
	}
	else{
		printf("Error in the dimensions");
	}
	
}

int** multiply(int** a, int** b, int n1, int m1, int n2, int m2){
	int** ans = (int**)malloc(n1*sizeof(int*));
	for(int i=0;i<n1;i++){
		ans[i] = (int*)malloc(m2*sizeof(int));
	}
	for(int i=0;i<n1;i++){
		for(int j=0;j<m2;j++){
			ans[i][j] = 0;
			for(int k=0;k<m1;k++){
				ans[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	return ans;
}

int** display(int** ans, int n1, int m2){
	for(int i=0;i<n1;i++){
		for(int j=0;j<m2;j++){
			printf("%-6.2d", ans[i][j]);
		}
		printf("\n");	
	}
}

