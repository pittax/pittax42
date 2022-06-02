#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Cuantos elementos quieres almacenar?: ");
    int longitud;
    scanf("%d", &longitud);

    float* valores;
    valores = (float*) malloc(longitud * sizeof(float));

    // control de error
    if (valores == NULL)
    {
        printf("Error en malloc\n");
        return 1;
    }

    // llenado del array
    int i;
    for (i = 0; i < longitud; i++)
    {
        valores[i] = 5.55E50;
    }

    printf("Todo esta correcto");
    free(valores); // lueo del free, no puede utilizarse 'valores'
    
    return 0;
}