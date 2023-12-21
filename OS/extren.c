#include <stdio.h>
#include "file.h"

int main(int argc, char const *argv[])
{
    extern int a;
    printf("%d\n", a);
    return 0;
}
