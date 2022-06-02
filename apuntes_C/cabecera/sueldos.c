#include <stdio.h>
#include "empleados.h"

void pagar_sueldos(Empleado* e)
{
    int sueldo = 2000;
    printf("Pagando %d € a %s %s\n", 
    sueldo, e->nombre, e->apellido);
}