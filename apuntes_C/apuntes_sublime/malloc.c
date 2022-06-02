// memoria dinamica

malloc(4000 * sizeof(float)) // reserva espacio para 4000 flotantes


// asignamos a un puntero el espacio reservado
float* valores;
valores = (float*) malloc(4000 * sizeof(float));

// si malloc falla, devuelve NULL, por eso es bueno verificarlo con
if (valores == NULL)
{
	printf("Error en malloc\n");
	return 1;
}

// luego de utilizar la memoria, hay que liberarla con
free(valores)