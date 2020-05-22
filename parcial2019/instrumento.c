#include "instrumento.h"

void harcodeoInstrumentos(eInstrumentos intrumento[])
{
    int i;
    int idOrquesta[5]={1,1,1,2,2};
    int idInstrumento[5]={1,2,3,4,5};
    char nombre[5][50]={"instumento 1","instrumento 2","instrumento 3","instrumento 4","instrumento 5"};
    int tipo[5]={1,1,1,2,3};
    int isEmpty[5]={1,1,1,1,1};

    for(i=0;i<10;i++)
        {
            intrumento[i].idOrquesta=idOrquesta[i];
            intrumento[i].idInstrumento=idInstrumento[i];
            strcpy(intrumento[i].nombre,nombre[i]);
            intrumento[i].tipo=tipo[i];
            intrumento[i].isEmpty=isEmpty[i];
        }
}

void mostraInstrumento(eInstrumentos instrumento[],int sizeInstrumento)
{
    int i;
    int hayInstrumento;

    hayInstrumento=contadorInstrumento(instrumento,sizeInstrumento);

    if(hayInstrumento>=1){

        for(i=0;i<sizeInstrumento;i++)
            {
                if(instrumento[i].isEmpty==OCUPADO)
                    {
                        printf("%5d %10s  %5d %s\n",instrumento[i].idInstrumento,instrumento[i].nombre,instrumento[i].tipo,Tipo(instrumento[i].tipo));
                    }
            }
    }
    else
        {
            printf("No hay ningun instrumento cargado en el sistema\n");
        }
}
void inicializarInstrumentos(eInstrumentos instrumento[],int sizeInstrumento)
{
    int i;

    for(i=0;i<sizeInstrumento;i++)
        {
            instrumento[i].isEmpty=LIBRE;
        }
}

int buscarIndexLibre(eInstrumentos instrumento[], int sizeInstrumento)
{
    int i;
    int indice=-1;
    int id;

    id=idInstrumento(instrumento,sizeInstrumento);

    for(i=0;i<sizeInstrumento;i++)
        {
            if(instrumento[i].isEmpty==LIBRE && instrumento[i].idInstrumento==id)
                {
                    indice=i;
                    break;
                }
        }
    return indice;
}

int idInstrumento(eInstrumentos instrumento[],int sizeInstrumento)
{
    int id=1;
    int i;

    for(i=0; i<sizeInstrumento; i++)
    {
        if(instrumento[i].isEmpty==LIBRE)
        {
            instrumento[i].idInstrumento=id;
            break;
        }else
        {
            id++;
        }
    }
    return id;
}

int contadorInstrumento(eInstrumentos instrumento[],int sizeInstrumento)
{
    int i;
    int contador=0;

    for(int i=0;i<sizeInstrumento;i++)
        {
            if(instrumento[i].isEmpty==OCUPADO)
                {
                    contador++;
                }

        }
    return contador;
}
char* Tipo(int id)// esta funcion es para poder mostrar los tipos con su numero
{
    char* buffer="";

    switch(id)
    {
        case 1:
            buffer="Cuerdas";
            break;

        case 2:
            buffer="Viento-madera";
            break;

        case 3:
            buffer="Viento-metal";
            break;
        case 4:
            buffer="Percusion";
            break;

        default:
            buffer="Opcion incorrecta";
            break;
    }

    return buffer;
}
void Listar() //aca lo que hace es listarlo y lo muestra, esta es la funcion que hace que muestre
{
    for(int i=1;i<=4;i++)
    {
        printf("%d - %s\n",i ,Tipo(i));
    }
}


int altaInstrumento(eInstrumentos instrumento[],int sizeInstrumento)
{
    int altaExistosa;
    int indiceEncontrado;

    indiceEncontrado=buscarIndexLibre(instrumento,sizeInstrumento);
    if(indiceEncontrado==-1)
        {
            printf("No hay mas espacio en el sistema\n");
        }
    else
        {
            getCharString(&instrumento[indiceEncontrado].nombre,"Ingrese nombre del nombre del instrumento\n","Error, no es nombre valido\n",1,50,10);
            Listar();
            getInt(&instrumento[indiceEncontrado].tipo,"Ingrese una opcion:\n","Error, numero invalido[1/4]\n",1,4,10);

            instrumento[indiceEncontrado].isEmpty=OCUPADO;

            system("pause");
            system("cls");
            printf("Instrumento cargado correctamente, el ID es %d\n\n",instrumento[indiceEncontrado].idInstrumento);

            altaExistosa=1;

        }
    return altaExistosa;
}



