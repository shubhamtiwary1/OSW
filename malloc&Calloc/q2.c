#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int *p = NULL;
    p = (int *)malloc(sizeof(int));
    *p = 10;
    free(p);
    int *q;
    q = (int *)malloc(sizeof(sizeof(int)));
    *q = 15;
    printf("%d %d\n", *p, *q);
    return 0;
}
