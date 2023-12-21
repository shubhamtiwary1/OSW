#include <stdio.h>
void currency(int, int *,int *,int *,int *,int *,int *,int *,int *,int *);

int main(){
	int amount = 57245846;
	int n500, n200, n100, n50, n20, n10, n5, n2, n1;
	currency(amount, &n500, &n200, &n100, &n50, &n20, &n10, &n5, &n2, &n1);
	printf("500 : %d\n200 : %d\n100 : %d\n50 : %d\n20 : %d\n10 : %d\n5 : %d\n2 : %d\n1 : %d\n", n500, n200, n100, n50, n20, n10, n5, n2, n1);
}

void currency(int amount, int *n500, int *n200, int *n100, int *n50, int *n20, int *n10, int *n5, int *n2, int *n1){
	*n500 = amount/500;
	*n200 = (amount % 500)/200;
	*n100 = (amount % 200)/100;
	*n50 = (amount % 100)/50;
	*n20 = (amount % 50)/20;
	*n10 = (amount % 20)/10;
	*n5 = (amount % 10)/5;
	*n2 = (amount % 5)/2;
	*n1 = (amount % 2)/1;
}\

