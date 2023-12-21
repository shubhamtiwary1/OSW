#include <stdio.h>
int main(){
	int n1, n2, n3, n4;
	int max = 0;
	printf("Enter the numbers : \n");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	if(n1<n2){
		if(n2<n3){
			if(n3<n4){
				printf("Max is : %d", n4);
				max = n4;
			}
			else{
				printf("Max is : %d", n3);
				max = n3;
			}
		}
		else{
			if(n2>n4){
				printf("Max is : %d", n2);
				max = n2;
			}
			else{
				printf("Max is : %d", n4);
				max = n4;
			}
		}
	}
	else {
		if(n1>n3){
			if(n1>n4){
				printf("Max is : %d", n1);
				max = n1;
			}
			else{
				 printf("Max is : %d", n4);
				 max = n4;
			}
		}
		else{
			if(n3>n4){
				printf("Max is : %d", n3);
				max = n3;
			}
			else{
				printf("Max is : %d", n4);
				max = n4;
			}
		}
	}
	printf("\n");
	n1 = max-n1;
	n2 = max-n2;
	n3 = max-n3;
	n4 = max-n4;
	int smax = 0;
	if(n1!=0 && n1<n2 && n1<n3 && n1<n4){
		smax = n1;
	}
	else if(n2!=0 && n2<n1 && n2<n3 && n2<n4){
		smax = n2;
	}
	else if(n3!=0 && n3<n2 && n3<n1 && n3<n4){
		smax = n3;
	}
	else{
		smax = n4;
	}
	
	printf("Second highest is: %d\n", max-smax);
}
