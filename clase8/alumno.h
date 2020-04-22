#include <stdio.h>

typedef struct //DENTRO DE UNA ESTRUCTURA NO SE LE AGREGA UN VECTOR, es un molde para crear variale eAlumno
{
    int legajo;
    int nota1;
    int nota2;
    float promedio;
    char nombre[20];
    char email[20];

}eAlumno; // estructura , la E es para indicar que es una estructura


void mostrarAlumnos(eAlumno miAlumno);
eAlumno cargarUnAlumno(void); //se puede generar un funcion con el nombre de la estructura
int compararAlumnosPorLegajo(eAlumno unAlumno, eAlumno otroAlumno);

void cargarListaDeAlumnos(eAlumno listado[],int cantidad);
void mostrarListaDeAlumnos(eAlumno listado[],int cantida);
void mostrarListaDeAlumnosPromocionados(eAlumno listado[], int cantidad, int valorAprobado);
void ordenarListaDeAlumnoPorNombre(eAlumno listado[], int cantidad);
void ordenarListaDeAlumnoPorNombreYporPromdio(eAlumno listado[], int cantidad);
void mostrarAlumnosConMaximoPromedio(eAlumno listado[], int cantidad);
float calcularMaximoPromedio(eAlumno listado[], int cantidad);
void mostrarAlumnosConMaximo(eAlumno listado[], int cantidad, int maximo);
