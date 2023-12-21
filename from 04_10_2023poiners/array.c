#include <stdio.h>

void fun(int *);
int main(){
	int arr[5] = {4, 5, 1, 12, 43};
	fun(arr);
}

void fun(int *arr){
	for(int i=0;i<5;i++){
		printf("%d ", *(arr+i));
	}
	printf("\n");
}

