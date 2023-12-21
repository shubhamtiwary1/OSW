#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b){
	return a+b;
}
int subtract(int a, int b){
	return a-b;
}
int multiply(int a, int b){
	return a*b;
}
 
int main(){
	int op1, op2,res;
	char choice;
	do{
		
		printf("+ : Addition\n- : Subtraction\n* : Multiplication\nq : Quite\n");
		printf("please choice any one: ");
		scanf(" %c", &choice);
		//scanf("%c", &choice);
		if(choice == 'q'){
			break;
		}
		else{
			printf("Enter two numbers: ");
			scanf("%d%d", &op1, &op2);
			switch(choice){
				case '+' : res = sum(op1, op2);
					printf("Result = %d\n", res);
					break;
				case '-' : res = subtract(op1, op2);
					printf("Result = %d\n", res);
					break;
				case '*' : res = multiply(op1, op2);
					printf("Result = %d\n", res);
					break;
				
				default :
					printf("Invalid choice, Try Again...\n");				
			}
	 	}	
	}while(1);
}
