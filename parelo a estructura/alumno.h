#include <stdio.h>
typedef struct
{
    char nombre[25];
    int legajo;
    int nota1;
    int nota2;
    float promedio;
    int isEmpty;

}eAlumno;


int menuUsuario();
int menuModificacion(void);
void inicializarAlumno(eAlumno alumno[], int cantidad);
int buscarLibre(eAlumno alumno[],int cantidad);
int cargarAlumno(eAlumno alumno[],int cantidad);
eAlumno unAlumno(void);
void mostrarAlumnos(eAlumno alumno[],int cantidad);
void modificarAlumno(eAlumno alumno[], int cantidad);
int buscarLegajo(eAlumno alumno[],int cantidad);
int contadorDeEmpleados(eAlumno alumno[],int cantidad);
void ordenarAlumno(eAlumno alumno[],int cantidad);
void bajaAlumno(eAlumno alumno[], int cantidad);







