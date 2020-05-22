#include <stdio.h>
#include <string.h>
#include "materias.h"
#define LIBRE 0
#define OCUPADO 1


typedef struct
{
    int dia;
    int mes;
    int anno;

}eFecha;

typedef struct
{
    int idMateria;
    int legajo;
    char nombre[50];
    char apellido[50];
    int celular;

    eFecha fechaIngreso;
    int isEmpty;


}eAlumnos;

int inicilizarAlumno(eAlumnos alumno[],int sizeAlumno);
int idAlumno(eAlumnos alumno[],int sizeAlumno);
int contadoAlumno(eAlumnos alumno[],int sizeAlumno);
int busarIdAlumno(eAlumnos alumno[],int sizeAlumno);
int buscarLibre(eAlumnos alumno[],int sizeAlumno);
int altaAlumno(eAlumnos alumno[],int sizeAlumno,eMaterias materias[],int sizeMaterias);
