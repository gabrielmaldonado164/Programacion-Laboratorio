
#include <stdio.h>
#define TAMANIO 10 //EL DEFINE es para variar el array

int main()
{

    int edad;
    int edadDos;
    int arrayEdades[TAMANIO];
    int i;
    char respuesta;
    int ubicacion;
    char editar;



    //inicializar en -1
    for(i=0;i<TAMANIO;i++)// ESTO ES SECUENCIAL !!!
    {
        arrayEdades[i]=-1;
    }

    for(i=0;i<TAMANIO;i++)// ESTO ES PARA MOSTRAR!!!!
    {
        printf("\n valor del array %d ",arrayEdades[i]);
    }

    do{//ACA EMPIEZA LA ALEAOTARIA
        do{
        printf("\n ingrese la ubicacion del 1 al 10 :");
        scanf("%d",&ubicacion);
        }while(ubicacion<1 || ubicacion>TAMANIO);
        //ESTO LO VALIDA


        if(arrayEdades[ubicacion-1]==-1)
        {
            printf("\nBueno, ahora ingresa la nota: ");
            scanf("%d",&arrayEdades[ubicacion-1]);
        }else
        {
             printf("\nYa esta cargada la nota, quiere editar nota?: ");
             __fpurge(stdin);
             scanf("%c",&editar);
                if(editar =='s')
                {
                    printf("\nBueno,ahora edite la nota ");
                    scanf("%d",&arrayEdades[ubicacion-1]);
                }
        }



        printf("\n desea continuar :");
        __fpurge(stdin);
        scanf("%c",&respuesta);



    }while(respuesta=='s');

    printf("\n despues");

    for(i=0;i<TAMANIO;i++)
    {
        printf("\n valor del array %d ",arrayEdades[i]);// arrayEdades = &arrayEdades[0]
       // printf("\n pubtero del array %d  ",&arrayEdades[i]);
    }//ACA MUESTRO!!!!!!


    return 0;
}
