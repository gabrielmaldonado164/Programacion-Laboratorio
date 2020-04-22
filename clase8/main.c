
#include <stdlib.h>
#include "alumno.h"
#define tamanio 5


int main()
{
    //eAlumno miAlumno;// inicio la estructura con los datos, los datos deben ser igual a como esta generado la estructurado
        //printf("%d", sizeof(eAlumno));
    //eAlumno otroAlumno;


   // miAlumno=cargarUnAlumno();
    //otroAlumno=cargarUnAlumno();

    /*printf("Ingrese legajo: ");
    scanf("%d",&miAlumno.legajo);


     printf("Ingrese nota1: ");
    scanf("%d",&miAlumno.nota1);

     printf("Ingrese nota2: ");
    scanf("%d",&miAlumno.nota2);

     printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    miAlumno.promedio=(float)(miAlumno.nota1+miAlumno.nota2)/2;

    otroAlumno = miAlumno;*/

    //printf("%d -- %d -- %d -- %f -- %s\n", otroAlumno.legajo,otroAlumno.nota1,otroAlumno.nota2,otroAlumno.promedio,otroAlumno.nombre);// el operador punto es para moostrar la estructura, voy eligiendo el campo
    //siempre va el nombre que va alado de eAlumno, el que tiene E nunca lo llamo para moostrar
   //mostrarAlumnos(miAlumno);

   /*if(miAlumno.legajo==otroAlumno.legajo)//tengo que agregar los campos para comparar, no se puede comparr las estructuras directamentes
    {

    }*/

   eAlumno listadoAlumno[tamanio]={{100, 7, 9, 8, "Maria","maria@gmail.com"},{101,4,6,5,"Juan","juan@gmail.com"},{102,11,11,11,"Ana","ana@gmail.com"},{103,30,30,30,"Ana","ana1@gmail.com"},{104,11,11,11,"Ana","ana2@gmail.com"}};

    printf("CARGO LISTA DE ALUMNOS\n");

    //cargarListaDeAlumnos(listadoAlumno,tamanio);


    printf("MUESTA DE ALUMNOS\n");


    mostrarListaDeAlumnos(listadoAlumno,tamanio);


    printf("APROBADOS\n");


    mostrarListaDeAlumnosPromocionados(listadoAlumno,tamanio,6);

     printf("ordenar\n");


    ordenarListaDeAlumnoPorNombre(listadoAlumno,tamanio);
    mostrarListaDeAlumnos(listadoAlumno,tamanio);

    printf("ordenar por promedio\n");
    ordenarListaDeAlumnoPorNombreYporPromdio( listadoAlumno, tamanio);
    mostrarListaDeAlumnos(listadoAlumno,tamanio);

   printf("promedio\n");
   mostrarAlumnosConMaximoPromedio(listadoAlumno,tamanio);

    printf("MUESTRO LISTA DE ALUMNOS CON MAYOR PROMEDIO\n");
    mostrarAlumnosConMaximoPromedio(listadoAlumno,tamanio);




    return 0;
}

