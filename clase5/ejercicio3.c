#include <stdio.h>
#define TAMANIO 10

/**
 * 1-La suma acumulada 18
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
    //9- inicializar en -1
    for(i=0;i<TAMANIO;i++)
    {
        arrayEdades[i]=-1;
    }


    arrayEdades[2]=2;
    arrayEdades[5]=6;
    arrayEdades[8]=10;

    /*a-mostrar todos los elementos*/
    for(i=0;i<TAMANIO;i++)
    {
        printf("\n valor del array %d ",arrayEdades[i]);
    }

    /*
    do{

        do{
            printf("\n ingrese la ubicacion del 1 al 10 :");//del 0 al 9  es -1
            scanf("%d",&ubicacion);
        }while(ubicacion<1 || ubicacion>TAMANIO);

        //validar


        if(arrayEdades[ubicacion-1]==-1)
        {
            printf("\nBueno, ahora ingresa la nota: ");
            scanf("%d",&arrayEdades[ubicacion-1]);

        }else
        {
            printf("\nYa esta cargada la nota, quiere sobreescribir??: ");
            __fpurge(stdin);
            scanf("%c",&sobreescribir);
            if(sobreescribir=='s')
            {
                printf("\nBueno, ahora ingresa la nota: ");
                scanf("%d",&arrayEdades[ubicacion-1]);
            }
        }

        printf("\n desea continuar :");
        __fpurge(stdin);
        scanf("%c",&respuesta);
    }while(respuesta=='s');

    printf("\n despues");



    */

    /*1-La suma acumulada*/
    sumaAcumulada=0;
    for(i=0;i<TAMANIO;i++){
        sumaAcumulada=sumaAcumulada+arrayEdades[i];
    }
    /*3-La cantidad de aprobados*/
    cantidadDeAprobados=0;
    for(i=0;i<TAMANIO;i++)
    {
        if(arrayEdades[i]>5)
        {
            cantidadDeAprobados++;
        }
    }
    /*5-La nota maxima*/
    notaMaxima= arrayEdades[0];
    for(i=0;i<TAMANIO;i++){
       if(notaMaxima<arrayEdades[i])
       {
           notaMaxima=arrayEdades[i];
       }
    }

    /*7-La cantidad de notas pares*/
    cantidadNotasPares=0;
    for(i=0;i<TAMANIO;i++)
    {
        if(arrayEdades[i]%2==0)
        {
            cantidadNotasPares++;
        }
    }
    /* 8-El promedio de las notas*/
    promedio=sumaAcumulada/cantidadDeAprobados;

    /* a-mostrar todos los elementos*/
    for(i=0;i<TAMANIO;i++)
    {
        printf("\n valor del array %d ",arrayEdades[i]);
    }
    /*c-mostrar solo los elementos cargados*/
    for(i=0;i<TAMANIO;i++)
    {
        if(arrayEdades[i]!=-1)
        {
             printf("\n valor del array %d ",arrayEdades[i]);
        }
    }


    return 0;
}




