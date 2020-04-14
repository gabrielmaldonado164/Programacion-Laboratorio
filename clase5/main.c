#include <stdio.h>
#include "funcionesArray.h"
#define TAMANIO 10

/**
 * 1-La suma acumulada 19
 * 2-La cantidad de notas cargadas 3
 * 3-La cantidad de aprobados 2
 * 4-La cantidad de desaprobados 1
 * 5-La nota maxima 10
 * 6-La nota minima 2
 * 7-La cantidad de notas pares 2
 * 8-El promedio de las notas 6
 * 9-Inicializar el array
 * a-mostrar todos los elementos
 * b-mostrar los elementos vacios con su indice(para el cliente)
 * c-mostrar solo los elementos cargados
 *
 * */


int main()
{

    int edad;
    int edadDos;
    int arrayEdades[TAMANIO];
    int i;
    char respuesta;
    int ubicacion;
    char sobreescribir;
    int sumaAcumulada;
    int cantidadDeAprobados;
    int notaMaxima;
    int cantidadNotasPares;
    float promedio;

    //9- inicializar en -1
    InicializarArray(arrayEdades,TAMANIO);


    arrayEdades[2]=3;
    arrayEdades[5]=6;
    arrayEdades[8]=10;

    /*a-mostrar todos los elementos*/
    MostrarTodosLosElementos(arrayEdades,TAMANIO);

    /*1-La suma acumulada 19*/
    sumaAcumulada=SacarSumaAcumulada(arrayEdades,TAMANIO);
    printf("\n\tsuma acumulada :%d",sumaAcumulada);

    /*3-La cantidad de aprobados 2*/
    cantidadDeAprobados=SacarCantidadDeAprobados(arrayEdades,TAMANIO);
    printf("\n\tAprobados :%d",cantidadDeAprobados);


    /** 5-La nota maxima 10*/
    notaMaxima=SacarNotaMaxima(arrayEdades,TAMANIO);
    printf("\n\t nota mas alta :%d",notaMaxima);



     promedio=SacarPromedio(arrayEdades,TAMANIO);
     printf("\n\t Promedio :%f",promedio);




    return 0;



}
