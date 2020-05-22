#include <stdio.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1


typedef struct
{
    int idMateria;
    char nombre[50];
    int anno;
    int isEmpty;

}eMaterias;

void harcodeoMaterias(eMaterias materias[]);
void mostrarMaterias(eMaterias materias[],int sizeMaterias);
