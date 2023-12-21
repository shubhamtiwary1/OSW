#include <stdio.h>

int linearsearch(int a[], int n, int ele){
	for(int i=0;i<n;i++){
		if(a[i] == ele){
			return i;
		}
	}
	return -1;
}
int main(){
	int ele;
	printf("Enter the number to search:");
	scanf("%d", &ele);
	int a[5] = {4,7,2,8,1};
	int ans = linearsearch(a, 5, ele);
	if(ans >= 0){
		printf("Element %d is at %d th index.\n", ele, ans);
	}
	else{
		printf("Element is not present in the array.\n");
	}
	
}
