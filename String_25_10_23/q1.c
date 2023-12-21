#include <stdio.h>
#include <stdlib.h>
int main(){
	char c[] = "Hello";
	for(int i=0; c[i]!='\0'; i++){
		printf("%c", c[i]);
	}
	printf("\n");
	printf("%s", c);
	printf("\n");
	
	char *a;
	a = (char*)malloc(100*sizeof(char));
	printf("Enter a line:\n");
	/*gets(a);
	printf("%s",a);
	
	printf("Press any key to quit...");
	char ch = getchar();
	printf("\n%",ch);*/
	char ch;
	for(int i=0; (ch=getchar()) != '\n';i++){
		a[i] = ch;
	}
	printf("%s\n",a);
	return 0;
}
