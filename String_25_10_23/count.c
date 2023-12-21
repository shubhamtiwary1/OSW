#include <stdio.h>
#include <stdlib.h>

int main(){
	char *a;
	a = (char*)malloc(100*sizeof(char));
	printf("Enter a line :\n");
	gets();
	int wc = 0, cc = 0;
	for(int i=0;a[i] != '\0';i++){
		printf("%c", a[i]);
		if(a[i] == ' '){
			wc++;
			continue;
		}
		cc++;
	}
	printf("%d%d",wc, cc);
}
