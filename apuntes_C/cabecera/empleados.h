//#include "empleados.c"

typedef enum cargo_t
{
    ANALISTA, DESARROLLO, SISTEMAS
} Cargo;

typedef struct empleado_t
{
    char nombre[30];
    char apellido[40];
    char identificador[9];
    Cargo cargo;
} Empleado;

void print_empleado(Empleado* empl);

//int x = 15;
//int y = 45;

/*
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
*/