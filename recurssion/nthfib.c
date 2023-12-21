#include <stdio.h>
int findFib(int n);
int main()
{
    int n = 10;
    int ans = findFib(n);
    printf("%d", ans);
}
int findFib(int n)
{
    int sum = 0;
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return findFib(n - 1) + findFib(n - 2);
}