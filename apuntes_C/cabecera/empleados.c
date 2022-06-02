#include <stdio.h>
#include "empleados.h"

void print_empleado(Empleado* empl)
{
    char* cargo;

    printf("|----- Empleado ---------------------------------|\n");
    printf("|   Nombre: %-35s  |\n", empl->nombre);
    printf("| Apellido: %-35s  |\n", empl->apellido); 
    printf("|      PID: %-35s  |\n", empl->identificador);
    switch (empl->cargo)
    {
        case ANALISTA: cargo = "Analista"; break;
        case SISTEMAS: cargo = "Sistemas"; break;
        case DESARROLLO: cargo = "Desarrollo"; break;
    }
    printf("|    Cargo: %-35s  |\n", cargo);
    printf("|------------------------------------------------|\n");
}

//int y = 25;