#include <stdio.h>

float media(int* edades2, int tam)
{
    int i;
    float acum = 0;

    for (i = 0; i < tam; i++)
    {
        acum += edades2[i];
    }
    return acum / tam;
}

int main()
{
    int i;
    int edades[8];
    for (i = 0; i < 8; i++)
    {
        edades[i] = 0;
    }
    /*
    for (i = 0; i < 8; i++)
    {
        printf("Ingresa edad %d: ", i+1);
        scanf("%d", &edades[i]);
    }
    */
    for (i = 0; i < 8; i++)
    {
        printf("edades[%d]: %d\n", i, edades[i]);
    }

    int y;
    printf("ingresa valor: ");
    scanf("%d", &y);
    printf("y = %d\n", y);


    // ejemplo 2:

    int elementos;
	printf("Numero de elementos: ");
	scanf("%d", &elementos);

	int j, datos[elementos];
	for (j = 0; j < elementos; j++)
	{
		printf("Ingrese dato %d: ", j+1);
		scanf("%d", &datos[j]);
	}
	for (j = 0; j < elementos; j++)
	{
		printf("Dato %d: %d\n", j+1, datos[j]);
	}

    // ejemplo 3

    printf("Media de edad: %f", media(datos, elementos));

    return 0;
}