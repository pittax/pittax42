#include <stdio.h>

void imprimir_dia(int num_dia)
{
    switch (num_dia)
    {
        case 1:
            printf("Lunes\n");
            break;
        case 2:
            printf("Martes\n");
            break;
        case 3:
            printf("Miercoles\n");
            break;
        default:
            printf("No es dia\n");
            break;
    }
}


int main()
{    
    imprimir_dia(10);


    // if
    
    int x = 20;

    if (x == 20)
        printf("x vale 20");
    else
        printf("x no vale 20");
    
    printf("\nesto se imprime siempre");

    return 0;
}