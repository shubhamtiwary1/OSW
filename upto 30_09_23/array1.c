#include <stdio.h>

int main(){
	int a[5];
	printf("Enter the elements:\n");
	for(int i=0;i<5;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<5;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	int sum = 0;
	for(int i=0;i<5;i++){
		sum += a[i];
	}
	float avg = sum/5.0;
	printf("%f\n", avg);
}
