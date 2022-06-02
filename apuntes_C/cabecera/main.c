#include <stdio.h>
#include <string.h>
#include "empleados.h"
//#include "sueldos.h"

/*
int main()
{
    printf("hola %d %d", x, y);
}
*/


int main()
{
    Empleado e;
    strncpy(e.nombre, "Gonzalo", 30);
    strncpy(e.apellido, "Pittaluga", 40);
    strncpy(e.identificador, "346792", 9);
    e.cargo = ANALISTA;
    print_empleado(&e);
    //pagar_sueldos(&e);
    return 0;
}
