#include <stdio.h>
#include <string.h>
#define T 10
#define LIBRE 0
#define OCUPADO 1


void inicializarAlumnos(int estado[], int tam, int valorLibre);
int buscarLibre(int estado[], int tam, int valorLibre);
int cargarAlumno(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][20], int estado[], int tam, int valorLibre, int valorOcupado);
void mostrarAlumnos(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][20], int estado[], int tam, int valorOcupado);
float calcularPromedio(int nota1, int nota2);

int modificarAlumno(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][20], int estado[], int tam, int valorOcupado);
int eliminarAlumno(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][20], int estado[], int tam, int valorLibre, int valorOcupado);

void ordenarAlumnosPorNombre(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][20], int estado[], int tam, int valorOcupado);

int main()
{
    int legajo[T]={100,101,102};
    int nota1[T]={5,6,7};
    int nota2[T]={7,4,9};
    float promedio[T]={6,5,8};
    char nombre[T][20]={"Juan", "Ana", "Martin"};
    int estado[T];
    int i;
    int retornoFuncion;
    int opcion;

    inicializarAlumnos(estado, T, LIBRE);

       estado[0]=OCUPADO;
       estado[1]=OCUPADO;
       estado[2]=OCUPADO;
   do
   {
       printf("1. Cargar ALUMNO\n");
       printf("2. Modificar ALUMNO\n");
       printf("3. Eliminar ALUMNO\n");
       printf("4. Ordenar ALUMNOS por NOMBRE\n");
       printf("5. Listar ALUMNOS\n");
       printf("6. Salir\n");
       printf("Elija una opcion: ");
       scanf("%d", &opcion);
       switch(opcion)
       {
           case 1:
              retornoFuncion = cargarAlumno(legajo,nota1,nota2,promedio,nombre,estado,T,LIBRE,OCUPADO);
              switch(retornoFuncion)
               {
                   case 1:
                     printf("Alumno cargado con exito\n");
                   break;
                   case -1:
                     printf("No existe espacio para cargar al alumno\n");
                   break;
               }
            break;
            case 2:
                retornoFuncion = modificarAlumno(legajo, nota1, nota2, promedio, nombre, estado, T, OCUPADO);
            break;
            case 3:
                retornoFuncion = eliminarAlumno(legajo, nota1, nota2, promedio, nombre, estado, T, LIBRE, OCUPADO);
            break;
            case 4:
                ordenarAlumnosPorNombre(legajo, nota1, nota2, promedio, nombre, estado, T, OCUPADO);
            break;
            case 5:
                mostrarAlumnos(legajo,nota1,nota2,promedio,nombre,estado,T,OCUPADO);
            break;

       }

   }while(opcion!=6);









    return 0;
}

void inicializarAlumnos(int estado[], int tam, int valorLibre)
{
    int i;
    for(i=0; i<tam; i++)
    {
        estado[i] = valorLibre;
    }
}

int buscarLibre(int estado[], int tam, int valorLibre)
{
    int i;
    int indice = -1;
    for(i=0; i<tam; i++)
    {
        if(estado[i]==valorLibre)
        {
            indice = i;
            break;
        }
    }

    return indice;
}
/*
-1: Si no encontro espacio
1: si pudo cargar al alumno

*/
int cargarAlumno(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][20], int estado[], int tam, int valorLibre, int valorOcupado)
{

    int indiceEncontrado;
    //buscar una posicion dentro del array estado p/ guardar datos
    indiceEncontrado = buscarLibre(estado, tam, valorLibre);
    if(indiceEncontrado!=-1)//encontro lugar
    {
         //si encuentro lugar, pido los datos del alumno y calcular el promedio
        //cambiar el estado

        printf("Ingrese un legajo: ");
        scanf("%d", &legajo[indiceEncontrado]);

        printf("Ingrese nota 1: ");
        scanf("%d", &nota1[indiceEncontrado]);

        printf("Ingrese nota 2: ");
        scanf("%d", &nota2[indiceEncontrado]);

        promedio[indiceEncontrado] = calcularPromedio(nota1[indiceEncontrado], nota2[indiceEncontrado]);

        printf("Ingrese nombre: ");
        fflush(stdin);
        fgets(nombre[indiceEncontrado],20,stdin);
        nombre[indiceEncontrado][strlen(nombre[indiceEncontrado])-1]='\0';


        /*otros datos*/
        /*calcular promedio*/
        /*cambiar estado*/

        estado[indiceEncontrado] = valorOcupado;

       indiceEncontrado = 1;
    }
   return indiceEncontrado;
}

void mostrarAlumnos(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][20], int estado[], int tam, int valorOcupado)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(estado[i]==valorOcupado)
        {
            printf("%10d %10d %10d %10.2f %20s\n", legajo[i], nota1[i], nota2[i], promedio[i], nombre[i]);
        }
    }
}

float calcularPromedio(int nota1, int nota2)
{
    return (float)(nota1+nota2)/2;
}
/*
-1 si no encontro al alumno
0 si el usuario cancela la modificacion
1 si pudo modificar
*/
int modificarAlumno(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][20], int estado[], int tam, int valorOcupado)
{
    //pedir un legajo
    //buscar el legajo
        //lo encuentre
            //modificar la nota1
            //cancelar la operacion
        //no lo encruentre
            //informar

    int i;
    int auxLegajo;
    printf("Ingrese el legajo que esta buscando: ");
    scanf("%d", &auxLegajo);

    for(i=0;i<tam; i++)
    {
        if(estado[i] == valorOcupado && auxLegajo == legajo[i])//encontre al alumno
        {
            printf("Ingrese nueva nota 1: ");
            scanf("%d", &nota1[i]);
            promedio[i] = calcularPromedio(nota1[i], nota2[i]);

            break;
        }
    }

    return 1;

}


int eliminarAlumno(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][20], int estado[], int tam, int valorLibre ,int valorOcupado)
{

    int i;
    int auxLegajo;
    printf("Ingrese el legajo que quiere eliminar: ");
    scanf("%d", &auxLegajo);

    for(i=0;i<tam; i++)
    {
        if(estado[i] == valorOcupado && auxLegajo == legajo[i])//encontre al alumno
        {

            estado[i]= valorLibre;
            break;
        }
    }

    return 1;
}

void ordenarAlumnosPorNombre(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][20], int estado[], int tam, int valorOcupado)
{
    int i;
    int j;

    char auxString[20];
    int auxInt;
    float auxFloat;

    for(i=0; i<tam-1; i++)
    {
        if(estado[i]!=valorOcupado)
        {
            continue;
        }
        for(j=i+1; j<tam; j++)
        {
             if(estado[j]!=valorOcupado)
             {
                 continue;
             }
            if(strcmp(nombre[i], nombre[j])<0)
            {
                strcpy(auxString, nombre[i]);
                strcpy(nombre[i], nombre[j]);
                strcpy(nombre[j], auxString);

                auxInt = legajo[i];
                legajo[i] = legajo[j];
                legajo[j] = auxInt;

                auxInt = nota1[i];
                nota1[i] = nota1[j];
                nota1[j] = auxInt;

                auxInt = nota2[i];
                nota2[i] = nota2[j];
                nota2[j] = auxInt;

                auxFloat = promedio[i];
                promedio[i] = promedio[j];
                promedio[j] = auxFloat;


            }
        }
    }
}

