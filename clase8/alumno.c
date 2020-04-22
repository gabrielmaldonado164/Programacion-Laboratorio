#include "alumno.h"
#define tamanio 5

eAlumno cargarUnAlumno(void)
{
    eAlumno miAlumno;

    printf("Ingrese legajo: ");
    scanf("%d",&miAlumno.legajo);


     printf("Ingrese nota1: ");
    scanf("%d",&miAlumno.nota1);

     printf("Ingrese nota2: ");
    scanf("%d",&miAlumno.nota2);

     printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    printf("Ingrese email: ");
    fflush(stdin);
   gets(miAlumno.email);

    miAlumno.promedio=(float)(miAlumno.nota1+miAlumno.nota2)/2;


 return miAlumno;
}
void mostrarAlumnos(eAlumno miAlumno)
{
    printf("%10d %10d  %10d  %10.2f  %10s  %10s\n", miAlumno.legajo,miAlumno.nota1,miAlumno.nota2,miAlumno.promedio,miAlumno.nombre,miAlumno.email);// el operador punto es para moostrar la estructura, voy eligiendo el campo
    //siempre va el nombre que va alado de eAlumno, el que tiene E nunca lo llamo para moostrar
}

void cargarListaDeAlumnos(eAlumno listado[],int cantidad)
{
    int i=0;

     for(i=0;i<tamanio;i++)
    {
        listado[i]=cargarUnAlumno();
    }

}
void mostrarListaDeAlumnos(eAlumno listado[],int cantida)
{
    int i=0;

    for(i=0;i<tamanio;i++)
    {
        mostrarAlumnos(listado[i]);
    }

}

void mostrarListaDeAlumnosPromocionados(eAlumno listado[], int cantidad, int valorAprobado)
{
     int i=0;

    for(i=0;i<tamanio;i++)
    {
        if(listado[i].promedio>=valorAprobado)
            {
                mostrarAlumnos(listado[i]);
            }
    }

}


void ordenarListaDeAlumnoPorNombre(eAlumno listado[], int cantidad)
{
    int i;
    int j;
    eAlumno auxAlumno;

    for(i=0;i<cantidad-1;i++)
        {
            for(j=i+1;j<cantidad;j++)
                {
                    if(strcmp(listado[i].nombre,listado[j].nombre)>0)// el menor a 0 es para menor a mayor a - z // z-a
                        {
                            auxAlumno=listado[i];
                            listado[i]=listado[j];
                            listado[j]=auxAlumno;
                        }
                }
        }
}

void ordenarListaDeAlumnoPorNombreYporPromdio(eAlumno listado[], int cantidad)
{
    int i;
    int j;
    eAlumno auxAlumno;

    for(i=0;i<cantidad-1;i++)
        {
            for(j=i+1;j<cantidad;j++)
                {
                    if(strcmp(listado[i].nombre,listado[j].nombre)>0)// el menor a 0 es para menor a mayor a - z // z-a
                        {
                            auxAlumno=listado[i];
                            listado[i]=listado[j];
                            listado[j]=auxAlumno;
                        }
                        else
                            {
                                if(strcmp(listado[i].nombre,listado[j].nombre)==0)// este if es para cuando hay nmobres iguales, genero otro criterio para ordernar
                                    {
                                        if(listado[i].promedio>listado[j].promedio)
                                            {
                                                auxAlumno=listado[i];
                                                listado[i]=listado[j];
                                                listado[j]=auxAlumno;
                                            }
                                            else
                                                {
                                                    if(listado[i].promedio==listado[j].promedio)//
                                                        {
                                                            if(listado[i].legajo>listado[j].legajo) //aca tabmein lo ordeno por legajo en caso de que se repita el promedio
                                                                {
                                                                    auxAlumno=listado[i];
                                                                    listado[i]=listado[j];
                                                                    listado[j]=auxAlumno;
                                                                }
                                                        }
                                                }

                                    }
                            }
                }
        }
}


float calcularMaximoPromedio(eAlumno listado[], int cantidad)
{
    float maximoPromedio;
    int i=0;

    for(i=0;i<cantidad;i++)
        {
            if(listado[i].promedio>maximoPromedio || i==0)
                {
                    maximoPromedio=listado[i].promedio;
                }
        }

    return maximoPromedio;
}

void mostrarAlumnosConMaximo(eAlumno listado[], int cantidad, int maximo)
{

        int i;
        for(i=0;i<cantidad;i++)
            {
                if(listado[i].promedio==maximo)
                    {
                        mostrarAlumnos(listado[i]);
                    }
            }
}


void mostrarAlumnosConMaximoPromedio(eAlumno listado[], int cantidad)
{
    float maximoPromedio;
    int i;

    maximoPromedio=calcularMaximoPromedio(listado,tamanio);
    mostrarAlumnosConMaximo(listado,tamanio,maximoPromedio);




}
