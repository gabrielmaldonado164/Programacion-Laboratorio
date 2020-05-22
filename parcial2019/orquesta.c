#include "orquesta.h"

void harcodeoOrquesta(eOrquestas orquesta[])
{
    int i;

    int idOrquesta[5]={1,2,3,4,5};
    int idInstrumento[5]={1,1,1,5,1};
    char nombre[5][31]={"orquesta 1","orquesta 2","orquesta 3","orquesta 4","orquesta 5"};
    char lugar[5][31]={"pepe","localid 2","localidad 3","localidad 4","localidad 5"};
    int tipo[5]={1,1,2,3,1};
    int isEmpty[5]={1,1,1,1,1};

    for(i=0;i<5;i++)
        {
            orquesta[i].idOrquesta=idOrquesta[i];
            orquesta[i].idInstrumento=idInstrumento[i];

            strcpy(orquesta[i].nombre,nombre[i]);
            strcpy(orquesta[i].lugar,lugar[i]);
            orquesta[i].tipo=tipo[i];

            orquesta[i].isEmpty=isEmpty[i];
        }

}

/*void incicializarTipo(eOrquesta orquesta[])
{
    printf("1.Sinfonica\n");
    printf("2.")

}*/

int menuUsuario(void)
{
    int opcion;

        system("cls");
        printf("Menu de opciones \n");
        printf("1.Ingresar Orquesta \n");
        printf("2.Eliminar Orquesta \n");
        printf("3.Listar Orquesta \n");
        printf("4.Agregar Musico \n");
        printf("5.Modificar Musico \n");
        printf("6.Eliminar Musico \n");
        printf("7.Listar Musicos \n");
        printf("8.Agregar Instrumentos \n");
        printf("9.Listar Instrumentos \n");
        printf("10.Informes \n");

        printf("11.Salir \n");

        printf("\nElija una opcion:");
        fflush(stdin);
        scanf("%d",&opcion);


    return opcion;

}


void mostraOrquesta(eOrquestas orquesta[],int sizeOrquesta)
{
    int i;
    int hayOrquestas;

    hayOrquestas=contadorOrquesta(orquesta,sizeOrquesta);

    if(hayOrquestas>=1){

        for(i=0;i<sizeOrquesta;i++)
            {
                if(orquesta[i].isEmpty==OCUPADO)
                    {
                        printf("%5d %10s %10s %5d %s\n",orquesta[i].idOrquesta,orquesta[i].nombre,orquesta[i].lugar,orquesta[i].tipo,tipo(orquesta[i].tipo));
                    }
            }
    }
    else
        {
            printf("No hay ninguna orquesta cargada en el sistema\n");
        }
}

int contadorOrquesta(eOrquestas orquesta[],int sizeOrquesta)
{
    int i;
    int contador=0;

    for(int i=0;i<sizeOrquesta;i++)
        {
            if(orquesta[i].isEmpty==OCUPADO)
                {
                    contador++;
                }

        }
    return contador;
}

int inicializarOrquesta(eOrquestas orquesta[],int sizeOrquesta)
{
    int i;

    for(i=0;i<sizeOrquesta;i++)
        {
            orquesta[i].isEmpty=LIBRE;
        }
}

int buscarLibre(eOrquestas orquesta[],int sizeOrquesta)
{
    int indice=-1;
    int i;
    int id=idOrquesta(orquesta,sizeOrquesta);

    for(i=0;i<sizeOrquesta;i++)
        {
            if(orquesta[i].isEmpty==LIBRE && orquesta[i].idOrquesta==id)
                {
                    indice=i;
                    break;
                }
        }
    return indice;
}

int idOrquesta(eOrquestas orquesta[],int sizeOrquesta)
{
    int id=1;
    int i;

    for(i=0; i<sizeOrquesta; i++)
    {
        if(orquesta[i].isEmpty==LIBRE)
        {
            orquesta[i].idOrquesta=id;
            break;
        }else
        {
            id++;
        }
    }
    return id;
}

int buscarIdOrquesta(eOrquestas orquesta[],int sizeOrquesta)
{
    int i;
    int id;
    int indice=-1;

    getInt(&id,"Ingrese ID de orquesta","Error, no se encontro una orquesta con ese ID\n",1,500,10);

    for(i=0;i<sizeOrquesta;i++)
        {
            if(orquesta[i].isEmpty==OCUPADO && orquesta[i].idOrquesta==id)
                {
                    indice=i;
                    break;
                }
        }
    return indice;
}

int altaOrquesta(eOrquestas orquesta[],int sizeOrquesta)
{
    int altaExitosa=-1;
    int indiceEncontrado;

    indiceEncontrado=buscarLibre(orquesta,sizeOrquesta);

    if(indiceEncontrado==-1)
        {
            printf("No hay mas espacio en el sistema\n");
        }
    else
        {
            getCharString(&orquesta[indiceEncontrado].nombre,"Ingrese nombre de la Orquesta:\n","Error no son letras\n",1,50,10);
            getCharString(&orquesta[indiceEncontrado].lugar,"Ingres localidad de la Orquesta:\n","Error, no son letras validas",1,50,10);
            listar();
            getInt(&orquesta[indiceEncontrado].tipo,"Ingrese el numero del tipo de orquesta:\n","Error, no es un numero valido[1/3]",1,3,10);

            orquesta[indiceEncontrado].isEmpty=OCUPADO;


            system("pause");
            system("cls");
            printf("Orquesta  Cargada correctamente, el ID es %d\n\n",orquesta[indiceEncontrado].idOrquesta);

            altaExitosa=1;

        }
        return altaExitosa;
}


char* tipo(int id)// esta funcion es para poder mostrar los tipos con su numero
{
    char* buffer="";

    switch(id)
    {
        case 1:
            buffer="Sinfonica";
            break;

        case 2:
            buffer="Filarmonica";
            break;

        case 3:
            buffer="Camara";
            break;

        default:
            buffer="No hay nada";
            break;
    }

    return buffer;
}
void listar() //aca lo que hace es listarlo y lo muestra, esta es la funcion que hace que muestre
{
    for(int i=1;i<=3;i++)
    {
        printf("%d - %s\n",i ,tipo(i));
    }
}

