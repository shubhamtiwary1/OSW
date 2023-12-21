#include <stdio.h>

void ascend(int a)
{
    if (a == 0)
    {
        return;
    }
    ascend(a - 1);
    printf("%d ", a);
}
void descend(int a)
{
    if (a == 0)
    {
        return;
    }
    printf("%d ", a);
    descend(a - 1);
}
int main()
{
    int a = 10;
    ascend(a);
    printf("\n");
    descend(a);
}