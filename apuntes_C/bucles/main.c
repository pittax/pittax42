#include <stdio.h>

int main()
{
    // while
    int k = 10;
    while (k < 20)
    {
        printf("k vale %d\n", k);
        k++;
    }
    printf("hemos salido del bucle k\n");

    // do (while)
    int x = 10;
    do
    {
        printf("x vale %d\n", x);
        x++;
    } while (x < 20);
    printf("hemos salido del bucle x\n");

    // for
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Iteracion %d\n", i);
    }
    printf("fuera del bucle\n");
    
    
    return 0;
}