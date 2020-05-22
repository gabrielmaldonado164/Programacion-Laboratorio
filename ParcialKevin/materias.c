#include "materias.h"

void harcodeoMaterias(eMaterias materias[])
{
    int id[10]={1,2,3,4,5,6,7,8,9,10};
    char nombre[10][100]={"Programacion","Laboratorio de Computacion","Estadística","Análisis Matemático","Bases de Datos","Sistemas Operativos","Sistemas de Redes","Seguridad Informática","Sistema de Procesamiento de Datos","Elementos de la Investigacion Operativa"};
    int anno[10]={2020,2020,2020,2020,2020,2020,2020,2020,2020,2020};
    int isEmpty[10]={1,1,1,1,1,1,1,1,1,1};

    int i;
    for( i=0;i<10;i++)
        {
            materias[i].idMateria=id[i];
            strcpy(materias[i].nombre,nombre[i]);
            materias[i].anno=anno[i];
            materias[i].isEmpty=isEmpty[i];
        }
}

void mostrarMaterias(eMaterias materias[],int sizeMaterias)
{
    int i;
    for(i=0;i<sizeMaterias;i++)
        {
            if(materias[i].isEmpty==1)
                {
                    printf("ID  MATERIA ANIO\n");
                    printf("%10d  %10s  %10d\n\n",materias[i].idMateria,materias[i].nombre,materias[i].anno);
                }
        }
}



