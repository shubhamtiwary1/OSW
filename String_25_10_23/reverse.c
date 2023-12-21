#include <stdio.h>
#include <string.h>
void reverse(char *a)
{
	int i = 0;
	int j = strlen(a) - 1;
	while (i < j)
	{
		char c = a[i];
		a[i] = a[j];
		a[j] = c;
		i++;
		j--;
	}
}
int main()
{
	char a[100];
	printf("Ener a line:\n");
	gets(a);
	reverse(a);
	printf("Reversed string is:\n");
	puts(a);
}
