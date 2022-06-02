#include <stdio.h>
#include <string.h>

struct cuenta
{
    char nombre[30];
    char apellido[40];
    int identificador;
    int saldo;
};

// utilizamos la estructura basica
void imprimir_datos_estructura(struct cuenta cliente)
{
    printf("Cliente: %s %s tiene %d euros (estructura)\n",
    cliente.nombre, cliente.apellido, cliente.saldo);
}

//utilizamos la estructura como un puntero
void imprimir_datos_puntero(struct cuenta *cliente)
{
    printf("Cliente: %s %s tiene %d euros (puntero)\n",
    cliente->nombre, cliente->apellido, cliente->saldo);
}

int main()
{
    struct cuenta c1;
    strcpy(c1.nombre, "Gonzalo");
    strcpy(c1.apellido, "Pittaluga");
    c1.identificador = 1235;
    c1.saldo = 400;

    imprimir_datos_estructura(c1); //estructura basica
    imprimir_datos_puntero(&c1);   //estructura puntero


    return 0;
}