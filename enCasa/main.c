#include <stdio.h>
#include <stdlib.h>
#define tamanio 5


/**
 * 1-Inicializar el array
 * 2-La cantidad de notas cargadas 3
 * 3-La cantidad de aprobados 2
 * 4-La cantidad de desaprobados 1
 * 5-La nota maxima
 * 6-La nota minima
 * 7-La cantidad de notas pares 2
 * 8-El promedio de las notas 6
 * 9-La suma acumulada 19
 * a-mostrar todos los elementos
 * b-mostrar los elementos vacios con su indice(para el cliente)
 * c-mostrar solo los elementos cargados
 *
 * */

int main()
{
    int arrayNumeros[tamanio];
    int i=0;
    int ubicacion;
    int sumaAcumulada =0;
    int contadorAprobados=0;
    int contadorDesaprobados=0;
    int contadorDeNumerosPares=0;
    int notaMaxima;
    float promedio;
    int notaMinima;
    char seguir = 's';
/*

    //aca le doy valor al array
    for(i=0;i<tamanio;i++)
        {
            arrayNumeros[i]=-1;

        }
    //aca lo muestro
    for(i=0;i<tamanio;i++)
        {
            printf("Los valores del array %d\n",arrayNumeros[i]);
        }


    do
        {
            printf("Ingrese en la ubicacion del 1 a 10 en donde quiera guardar un numero:");
            scanf("%d",&ubicacion);


            if(arrayNumeros[ubicacion-1]==-1)
                {
                    printf("\nIngrese el numero: ");
                    scanf("%d",&arrayNumeros[ubicacion-1]);
                }
            else
                {
                    printf("Ya hay un numero\n");
                }
            printf("\nDesea continuar: ");
            fflush(stdin);
            scanf("%c",&seguir);


        }while(seguir == 's');

       for(i=0;i<tamanio;i++)
        {
            printf("Los valores son: %d\n",arrayNumeros[i]);
        }

    */

    for(i=0;i<tamanio;i++)
        {
            arrayNumeros[i]=-1;
        }



        arrayNumeros[2]=5;
        arrayNumeros[3]=57;
        arrayNumeros[1]=1;

            for(i=0;i<tamanio;i++)
        {
            printf("\nLos valores son: %d",arrayNumeros[i]);

        }







    for(i=0;i<tamanio;i++)
        {
            sumaAcumulada=sumaAcumulada+arrayNumeros[i];//es arrayNumeros pq es donde se guarda los numeros(es donde ingresamos los numeros)
        }


    for(i=0;i<tamanio;i++)
        {
            if(arrayNumeros[i]>=6)
                {
                    contadorAprobados++;
                }
            else if(arrayNumeros[i]<6 && arrayNumeros[i]!=-1)
                {
                    contadorDesaprobados++;
                }
        }



      notaMaxima=arrayNumeros[0];

        {
            if(arrayNumeros>notaMaxima)
                {
                    notaMaxima=arrayNumeros[i];
                }

        }

         for(i=0;i<tamanio;i++)
            {
                if(arrayNumeros[i]%2==0)
                    {
                        contadorDeNumerosPares++;
                    }
            }


        promedio=sumaAcumulada/i;


    for(i=0;i<tamanio;i++)
        {
            printf("\nLos valores son: %d",arrayNumeros[i]);

        }




        for(i=0;i<tamanio;i++)
            {
                if(arrayNumeros[i]!=-1)
                    {
                        printf("los valores cargados son:%d ",arrayNumeros[i]);
                    }
            }









    return 0;
}
