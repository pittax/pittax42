#include <stdio.h>

void imprimir_datos(int edad, char* nombre)
{
    printf("Hola, tu nombre es %s, y tu edad es %d\n", nombre, edad);
}

int main()
{
    // llama a una funcion
    imprimir_datos(20, "Gonzalo");
    
    // declaracion de variables
    char    x;
    int     y;

    x = 'c';
    y = 25;
    
    int z = 2 * y; // podemos definir y operar al mismo tiempo

    printf("y = %d, x = %c", y, x);

    return 0;
}