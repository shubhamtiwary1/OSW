#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatinate(char* str1, char* str2);
int main(){
	char str1[100];
	printf("Enter a line: ");
	gets(str1);
	char str2[100];
	printf("Enter a line: ");
	gets(str2);
	char* str3 = concatinate(str1, str2);
	puts(str3);
}

char* concatinate(char* str1, char* str2){
	int i=0;
	int l = strlen(str1)+strlen(str2)+1;
	char* str3 = (char*)malloc(l*sizeof(char));
	
	while(str1[i] != '\0'){
		str3[i] = str1[i];
		i++;
	}
	int k=0;
	while(str2[k] != '\0'){
		str3[i] = str2[k];
		i++;
		k++;
	}
	str3[i] = '\0';
	return str3;
	
}
