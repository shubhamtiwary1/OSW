#include <stdio.h>
#include <stdlib.h>

void delete(int* , int, int);
void display(int*, int);
int main(){
	int n;
	int* a;
	printf("Enter the length of the array: ");
	scanf("%d", &n);
	a = (int*)(malloc(n*sizeof(int)));
	
	printf("Enter the element: ");
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
	int flag = 0;
	for(int i=0;i<n;i++){
		if(flag == 0 && a[i] == x){
			flag = 1;
			continue;
		}
		if(flag == 1){
			*(a+i-1) = *(a+i);	
		}
	}
}

void display(int* a, int n){
	for(int i=0;i<n;i++){
		printf("%d ", *(a+i));
	}
	printf("\n");
}
