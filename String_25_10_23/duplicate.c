#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//char* stringcpy(const char* str1);
int main(){
	char str1[100];
	printf("Enter a line: ");
	gets(str1);
	printf("Entered String: %s\n", str1);
	
	//inbuilt fun for duplicating string
	int i=0;
	while(str1[i] != '\0'){
		i++;
	}
	char* strfun = (char*)malloc(i+1*sizeof(char));
	strcpy(strfun, str1);
	puts(strfun);
	
	/*char*str2 = stringcpy(str1);
	char* str3 = str1;
	puts(str3);*/
	
	printf("Duplicated string: ");
	puts(strfun);
	printf("\n");
	
	return 0;
}

/*char* stringcpy(const char* str1){
	char* str2;
	int i=0;
	while(str1[i] != '\0'){
		i++;
	}
	int len = i;
	str2 = (char*)malloc(len+1*sizeof(char));
	
	i=0;
	while(str1[i] != '\0'){
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return str2;
}*/
