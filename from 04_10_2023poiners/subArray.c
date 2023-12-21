#include <stdio.h>

int* subarray(int *arr ,int n, int k){
	for(int i=0;i<n;i++){
		if(*(arr+i) > k){
			return arr+i;
		}
	}
	return 0;
}

int main(){
	int arr[] = {4,5,7,10,34,56,77};
	int n = 7;
	int *a = subarray(arr, n, 10);
	int i=0;
	while(a < &arr[n]){
		
		printf("%d ", *a);
		a = a+1;
		i = i+1;
	}
	printf("\n");
}

