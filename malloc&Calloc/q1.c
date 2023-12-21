#include <stdio.h>
#include <stdlib.h>

void display(int *, int );
int main(){
	int n;
	int *a;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	a = (int*)malloc(n*sizeof(int));
	
	printf("Enter elements: ");
	for(int i =0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i =0;i<n;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
