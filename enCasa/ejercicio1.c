#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define tamanio 5
#define LIBRE 0
#define OCUPADO 1

int BuscarLibre(int estado[], int cantidad, int valorLibre);
void inicializarAlumno(int estado[], int cantidad, int  valorLibre);
int cargarAlumno(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][20], int estado[], int cantidad, int valorLibre, int valorOcupado); //en cargar alumno tengo todos los datos que se van a utilizar
int getInt(char texto[],char error[] , int min , int max);
char getCharString(char texto[],char error[], int min, int max);
int main()
{
    int legajo[tamanio];
    int nota1[tamanio];
    int nota2[tamanio];
    char nombre[tamanio][20];
    int estado[tamanio];
    float promedio[tamanio];
    int opcion;



         printf("1. Cargar ALUMNO\n");
       printf("2. Modificar ALUMNO\n");
       printf("3. Eliminar ALUMNO\n");
       printf("4. Ordenar ALUMNOS por NOMBRE\n");
       printf("5. Listar ALUMNOS\n");
       printf("6. Salir\n");
       printf("Elija una opcion: ");
       scanf("%d", &opcion);





    return 0;
}


int BuscarLibre(int estado[], int cantidad, int valorLibre)
{
    int i=0;
    int indice=-1;

    for(i=0;i<cantidad;i++)
        {
            indice=i;
            break; //el break es para romper la estructura cuando encuentre espacio libre, asi no busca alpedo
        }
    return indice;
}
void inicializarAlumno(int estado[], int cantidad, int  valorLibre)
{
    int i=0;

      for(i=0;i<cantidad;i++)
        {
            estado[i]=valorLibre;
        }
}

int cargarAlumno(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][20], int estado[], int cantidad, int valorLibre, int valorOcupado)
{
    int indiceLibre;

    indiceLibre = BuscarLibre(estado,tamanio,LIBRE);

    if(indiceLibre !=-1)
        {
            getInt("Ingrese legajo","Error, debe ser de 1 a 100", 1, 100);
            getInt("Ingrese nota1","Error, debe ser de 1 a 10", 1, 10);
            getInt("Ingrese nota2","Error, debe ser de 1 a 10", 1, 10);
            getCharString("ingrese nombre","error",2,50);


        }


}
int getInt(char texto[],char error[] , int min , int max)
{
    int valor;

        printf("%s",texto);
        scanf("%d",&valor);

    while(valor<min || valor>max)
    {
        printf("%s",error);
        scanf("%d",&valor);
    }

    return valor;
}
char getCharString(char texto[],char error[], int min, int max)
{
    char palabra[50];

        printf("%s",texto);
        fflush(stdin);
        scanf("%s",palabra);


        while(strlen(palabra)<min || strlen(palabra)>max)
            {
                printf("%s",error);
                printf("%s",texto);
                fflush(stdin);
                scanf("%s",palabra);

            }

    return palabra;

}
