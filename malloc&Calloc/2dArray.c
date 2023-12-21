#include <stdio.h>
#include <stdlib.h>

void delete(int* , int, int);
void display(int*, int);
int main(){
	int n;
	int m;
	int* a;
	printf("Enter n and m: ");
	scanf("%d %d", &n, &m);
	a = (int**)(malloc(n
	*sizeof(int*)));
	
	printf("Enter the elements: ");
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int x;
	printf("Enter the element to delete: ");
	scanf("%d", &x);
	delete(a, n, x);
	display(a, n-1);
	
}

void delete(int* a, int n, int x){
	for(int i=0;i<n;i++){
		
	}
}

void display(int* a, int n){
	for(int i=0;i<n;i++){
		printf("%d ", *(a+i));
	}
	printf("\n");
}
