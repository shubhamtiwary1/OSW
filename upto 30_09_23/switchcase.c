#include <stdio.h>
int main(void){
	int n;
	printf("Enter a number :");
	scanf("%d", &n);
	switch(n) {
		case 1: printf("Hello\ngcc");
			break;
		case 2: printf("Hi\n");
			break;
		case 3: printf("Good\n");
			break;
		case 4: printf("Bye\n");
			break;
		default: printf("Exit\n");
	}
	return 0;
}
