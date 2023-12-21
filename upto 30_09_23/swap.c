#include <stdio.h>


void swap1(int a, int b){
	/*int x = a;
	a = b;
	b = x;*/
	
}

int swap2(int a[], int i, int j){
	int b = a[i];
	a[i] = a[j];
	a[j] = b;
}

int main(){
	int a[2] = {4, 9};
	
	swap2(a, 0, 1);
	
	for(int i=0;i<2;i++){
		printf("%d ", a[i]);
	}
	
	printf("\n");
	/*int a = 4;
	int b = 7;
	swap1(a, b);
	printf("%d %d",a, b);*/
}
