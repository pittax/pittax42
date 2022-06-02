#include <stdio.h>
#include "lib.h"
//#include "fun.c"

int main()
{
    int x = fun1();
    printf("fun1 = %d\n", x);

    int y = fun2();
    printf("fun2 = %d\n", y);

    return 0;
}