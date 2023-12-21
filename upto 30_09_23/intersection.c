#include <stdio.h>

int intersection(int a1[], int a2[], int n1, int n2){

	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			if(a1[i] == a2[j]){
				printf("%d ", a1[i]);
				break;
			}	
		}	
	}
	printf("\n");
}

int main(){
	int a1[7] = {6,3,2,3,5,8,11};
	int a2[5] = {8,9,0,2,1};
	intersection(a1, a2, 7, 5);
}
