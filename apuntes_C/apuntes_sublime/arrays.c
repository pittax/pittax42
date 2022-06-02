int edades[8];  // se inicializa un array de 8 elementos

// IMPORTANTE: los arrays luego de inicializarlos, hay que
// borrar su contenido, porque al crearlos no se borra lo que
// estaba en ese espacio de memoria

int i;
int edades[8];
for (i = 0; i < 8; i++)
{
	edades[i] = 0;
}

// tambien podemos iniciar asignando valores

// array como puntero
int array[] --> es igual que --> int* array



// ejemplo

int main()
{
	int elementos;
	printf("Numero de elementos:");
	scanf("%d", &elementos);

	int i, datos[elementos];
	for (i = 0; i < elementos; i++)
	{
		printf("Ingrese dato %d:", i+1);
		scanf("%d", &datos[i]);
	}
	for (i = 0; i < elementos; i++)
	{
		printf("Dato %d: %d", i, datos[i]);
	}
	return 0;
}


// array como parametro, calculo de la media de edades

float media(int edades[], int tam) //--> es igual --> (int* edades, int tam)
{
	int i;
	float acum = 0;
	for (i = 0; i < tam; i++)
	{
		acum += edades[i];
	}
	return acum / tam;
}

// aritmetica de punteros

