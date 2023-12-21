#include <stdio.h>
#include <string.h>

int validpass(char *a)
{
	int ans = 1;
	int len = strlen(a);
	if (len < 8 || len > 16)
	{
		printf("Length of password must be > 8 ans < 16.\n");
		ans = 0;
	}
	int n = 0, lc = 0, uc = 0, sc = 0;
	for (int i = 0; a[i] != '\0'; i++)
	{
		int c = (int)(a[i]);
		if (c >= 65 && c <= 90)
		{
			uc++;
		}
		else if (c >= 48 && c <= 57)
		{
			n++;
		}
		else if (c >= 97 && c <= 122)
		{
			lc++;
		}
		else
		{
			sc++;
		}
	}
	if (lc < len)
	{
		if (sc < 2)
		{
			printf("At least 2 special character.\n");
			ans = 0;
		}
		if (uc == 0)
		{
			printf("At least 1 upper case character.\n");
			ans = 0;
		}
		if (n < 2)
		{
			printf("At least 2 Numbers.\n");
			ans = 0;
		}
	}

	if (lc == len)
	{
		printf("At least 2 special character.\n");
		printf("At least 1 upper case character.\n");
		printf("At least 2 Numbers.\n");
		ans = 0;
	}
	return ans;
}
int main()
{
	char a[100];
	printf("Enter your Password:\n");
	gets(a);

	int x = validpass(a);
	if (x)
	{
		printf("%s is a valid Password.\n", a);
	}
	else
	{
		printf("Invalid Password.\n");
	}
}
