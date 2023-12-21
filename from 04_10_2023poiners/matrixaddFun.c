#include <stdio.h>

int addMatrix(int n1, int n2, int *m1, int *m2, *m ){
	
}
int main(){
	int n1 = 3;
	int n2 = 3;
	int m1[3][3] = {{1,6,4},{3,5,6},{9,2,1}};
	int m2[3][3] = {{4,3,6},{6,7,5},{2,8,4}};
	int m[n1][n2];
	
	addMatrix(n1, n2, &m1[n1][n2], &m2[n1][n2], m[n1][n2]);
	
}
