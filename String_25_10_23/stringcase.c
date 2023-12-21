#include <stdio.h>

char* tolowercase(char* a){
	for(int i=0;a[i]!='\0';i++){
		int x = (int)(a[i]);
		if(x >= 65 && x <= 90){
			a[i] = (char)(x+32);
		}
	}
}
int main(){
	char a[100];
	printf("Ener a line (include symbols):\n");
	gets(a);
	tolowercase(a);
	printf("Lowered case string is:\n");
	puts(a);
}
