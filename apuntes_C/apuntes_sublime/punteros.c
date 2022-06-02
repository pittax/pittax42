// direccion de memoria

// con &, se accede a la celda de memoria

x = 10
&x --> -9876592436592 // direccion de memoria

// las direcciones de memoria se guardan en punteros

int x = 10;		// asigna valor 10 a x
int* dirX = &x;	// asigna direccion de la celda que contiene x a dirX

// inicializacion de un puntero
int* punt;

// el tipo de dato de x y de dirX, debe coincidir

// PUNTERO: en los punteros, se almacenan direcciones


int x = *n  // asigna a x el valor contenido en el puntero n
int x = &n  // asigna a x la direccion del puntero n (solo el numero de la direccion)
int* x = &n // asigna al puntero x la direccion del puntero n (apunta a la direccion)

*n --> // n contiene una direccion, *n muestra lo que hay en esa direccion
	
// ejemplo

int x = 10;

printf("valor de x: %d\n", x); --> valor de x: 10
printf("direccion: %u\n", &x); --> direccion: 122039034930
printf("direccion: %d\n", &x); --> direccion: -203439493743

// ejemplo de uso