#include <stdio.h>

void bubblesort(int *, int);
int main(){
	int arr[6] = {20, 20, 8, 44, 1, 31};
	bubblesort(arr, 6);
	for(int i=0;i<6;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void bubblesort(int *arr, int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(*(arr+j+1) < *(arr+j)){
				int n = *(arr+j+1);
				*(arr+j+1) = *(arr+j);
				*(arr+j) = n;
			}
		}
	}
}
