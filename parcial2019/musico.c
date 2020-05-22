#include "musico.h"

void harcodeoMusico(eMusicos musico[])
{
    int i;

    int idOrquesta[10]={1,1,1,1,1,1,2,2,3,3};
    int idIntrumento[10]={1,1,3,5,1,2,3,4,5,5};
    int idMusico[10]={1,2,3,4,5,6,7,8,9,10};
    char nombre[10][50]={"musico 1","musico 2","musico 3","musico 4","musico 5","musico 6","musico 7","musico 8","musico 9","musico 10"};
    char apellido[10][50]={"apellido 1", "apellido 2","apellido 3","apellido 4","apellido 5","apeliido 6","apellido 7","apellido 8","apellido 9","apellido 10"};
    int edad[10]={15,30,35,18,25,36,40,16,22,29};
    int isEmpty[10]={1,1,1,1,1,1,1,1,1,1};

    for(i=0;i<10;i++)
        {
            musico[i].idOrquesta=idOrquesta[i];
            musico[i].idIntrumento=idIntrumento[i];
            musico[i].idMusico=idMusico[i];
            strcpy(musico[i].nombre,nombre[i]);
            strcpy(musico[i].apellido,apellido[i]);
            musico[i].edad=edad[i];
            musico[i].isEmpty=isEmpty[i];
        }

}

void mostraMusicosOonInstrumentos(eMusicos listaMusicos[],int sizeMusicos, eInstrumentos listaInstrumentos[],int sizeInstrumentos)
{
    int i;//musicos
    int j;//instrumentos
    char flagTieneInstrumentos;

    for(i=0;i<sizeMusicos;i++)
        {
            if(listaMusicos[i].isEmpty==OCUPADO){

            printf("Musicos %10d   %10s  %10s\n",listaMusicos[i].idMusico,listaMusicos[i].nombre,listaMusicos[i].apellido);
            flagTieneInstrumentos='n';

            for(j=0;j<sizeInstrumentos;j++)
                {
                    if(listaInstrumentos[j].isEmpty==OCUPADO && listaInstrumentos[j].idInstrumento ==listaMusicos[i].idIntrumento)
                        {
                            printf("\nIntrumento: %10s  %10d %s\n",listaInstrumentos[j].nombre,listaInstrumentos[j].tipo,Tipo(listaInstrumentos[j].tipo));
                            flagTieneInstrumentos='s';
                        }
                }
            }
        }
        if(flagTieneInstrumentos=='n')
            {
                printf("No tiene instrumentos\n");
            }
}
void mostrarOquestaConMusicos(eOrquestas listaOquesta[],int sizeOquesta, eMusicos listaMusicos[],int sizeMusicos)
{
    int i;//orquestas
    int j;//musicos
    char flagTieneMusicos;

    for(i=0;i<sizeOquesta;i++)
        {
            if(listaOquesta[i].isEmpty==OCUPADO){

            printf("Orquesta %10d   %10s \n",listaOquesta[i].idOrquesta,listaOquesta[i].nombre);
            flagTieneMusicos='n';

            for(j=0;j<sizeMusicos;j++)
                {
                    if(listaMusicos[j].isEmpty==OCUPADO && listaMusicos[j].idOrquesta ==listaOquesta[i].idOrquesta)
                        {
                            printf("\nMusicos: %10s \n",listaMusicos[j].nombre);
                            flagTieneMusicos='s';
                        }
                }
            }
        }
        if(flagTieneMusicos=='n')
            {
                printf("No tiene musicos\n");
            }
}

void mostraMusico(eMusicos musico [],int sizeMusico)
{
    int i;
    int hayMusicos;

    hayMusicos=contadorMusico(musico,sizeMusico);

    if(hayMusicos>=1){

        for(i=0;i<sizeMusico;i++)
            {
                if(musico[i].isEmpty==OCUPADO)
                    {
                        printf("%5d %10s  %10s\n",musico[i].idMusico,musico[i].nombre,musico[i].apellido);
                    }
            }
    }
    else
        {
            printf("No hay ningun instrumento cargado en el sistema\n");
        }
}

int inicializarMusicos(eMusicos musico[],int sizeMusico)
{
    int i;

    for(i=0;i<sizeMusico;i++)
        {
            musico[i].isEmpty=LIBRE;
        }
}

int contadorMusico(eMusicos musico[],int sizeMusico)
{
    int i;
    int contador=0;

    for(i=0;i<sizeMusico;i++)
        {
            if(musico[i].isEmpty==OCUPADO)
                {
                    contador++;
                }
        }
    return contador;
}
int idMusico(eMusicos musico[],int sizeMusico)
{
    int i;
    int id=1;

    for(i=0;i<sizeMusico;i++)
        {
            if(musico[i].isEmpty==LIBRE)
                {
                    musico[i].idMusico=id;
                    break;
                }
            else
                {
                    id++;
                }
        }
    return id;
}

int buscarIdMusico(eMusicos musico[], int sizeMusico)
{
    int i;
    int id;
    int indice=-1;

    getInt(&id,"Ingrese ID de Musico","Error, no se encontro un Musico con ese ID\n",1,500,10);

    for(i=0;i<sizeMusico;i++)
        {
            if(musico[i].isEmpty==OCUPADO && musico[i].idMusico==id)
                {
                    indice=i;
                    break;
                }
        }
    return indice;

}

int buscarLibreMusico(eMusicos musico[],int sizeMusico)
{
    int i;
    int indice=-1;
    int id;

    id=idMusico(musico,sizeMusico);

    for(i=0;i<sizeMusico;i++)
        {
            if(musico[i].isEmpty==LIBRE && musico[i].idMusico==id)
                {
                    indice=i;
                    break;
                }
        }
    return indice;
}

int altaMusico(eMusicos musico[], int sizeMusico, eOrquestas orquesta[],int sizeOrquesta, eInstrumentos instumento[],int sizeInstrumento)
{
    int altaExitosa=-1;
    int indiceEncontrado;

    indiceEncontrado=buscarLibreMusico(musico,sizeMusico);

    if(indiceEncontrado==-1)
        {
            printf("No hay mas espacio en el sistema\n");
        }
    else
        {
            getCharString(&musico[indiceEncontrado].nombre,"Ingrese nombre del musico:","Error, no es un nombre valido\n",1,50,10);
            getCharString(&musico[indiceEncontrado].apellido,"Ingrese apellido del musico","Error, no es un apellido valido\n",1,50,10);
            getInt(&musico[indiceEncontrado].edad,"Ingrese edad del Musico","Error, no es una edad valida[5/90]",5,90,10);

            mostraOrquesta(orquesta,sizeOrquesta);

            getInt(&musico[indiceEncontrado].idOrquesta,"Ingrese id de la orquesta","Error, id incorrecto\n",1,50,10);

            mostraInstrumento(instumento,sizeInstrumento);

            getInt(&musico[indiceEncontrado].idIntrumento,"Ingrese id de instrumneto","Error, id de instrumento no encontrado",1,20,50);

            musico[indiceEncontrado].isEmpty=OCUPADO;

            system("pause");
            system("cls");
            printf("Musico agregado correctamente, el ID es %d\n\n",musico[indiceEncontrado].idOrquesta);

            altaExitosa=1;

        }
    return altaExitosa;
}

int eliminarOrquesta(eOrquestas orquesta[], int sizeOrquesta,eMusicos musicos[],int siseMusicos)
{
    int buscarIndice;
    int bajaExitosa=-1;
    int orquestaCargadas;
    char seguir;

    orquestaCargadas=contadorOrquesta(orquesta,sizeOrquesta);

    if(orquestaCargadas>=1)
        {
            printf("Orquestas en el sistema\n");
            mostraOrquesta(orquesta,sizeOrquesta);

            buscarIndice=buscarIdOrquesta(orquesta,sizeOrquesta);

            if(orquesta[buscarIndice].isEmpty==OCUPADO)
                {
                    printf("La siguiente orquesta sera eliminada:\n ");
                    mostraOrquesta(orquesta,sizeOrquesta);

                    getOptionChar(&seguir,"Desea eliminar esta orquesta [S/N]","Error, letras invalidas\n",'s','n');

                    if(seguir=='S')
                        {
                            orquesta[buscarIndice].isEmpty=-1;
                            musicos[buscarIndice].isEmpty=-1;
                            printf("Baja existosa");
                        }
                    else
                        {
                            printf("Volviendo al menu principal");
                        }

                }
                else
                    {
                        printf("No se encontraron orquestas con esa id\n");
                    }




        }
        else
            {
                printf("No hay orquesta cargadas en el sistema\n");
            }

}


int  menuModificarMusico(void)
{
    int opcion;

        system("cls");
        printf("Menu de opciones \n");
        printf("1.Modificar Edad");
        printf("2.Modificar ID ORQUESTA");
        printf("3.Salir \n");

        printf("\nElija una opcion:");
        fflush(stdin);
        scanf("%d",&opcion);

    return opcion;
}


int modificarMusico(eMusicos musico[],int sizeMusico,eOrquestas orquesta[],int sizeOrquesta)
{
    int modificacionExitosa=-1;
    int musicosCargados;
    int indiceEncontrado;
    char confirma;
    char continuar;
    char salida;

        musicosCargados=contadorMusico(musico,sizeMusico);

        if(musicosCargados>=1)
            {
                printf("Los musicos en el sistema son:\n");
                mostraMusico(musico,sizeMusico);

                indiceEncontrado=buscarIdMusico(musico,sizeMusico);

                if(musico[indiceEncontrado].isEmpty==OCUPADO)
                    {
                        printf("El siguiente musico se eliminada\n");
                        printf("%5d %10s  %10s\n",musico[indiceEncontrado].idMusico,musico[indiceEncontrado].nombre,musico[indiceEncontrado].apellido);

                        getOptionChar(&confirma,"Desea eliminar a este musico[S/N]","Error, letra invalida\n",'s','n');

                            if(confirma=='S')
                                {
                                    do
                                    {
                                        switch(menuModificarMusico())
                                        {
                                            case 1:
                                                    getInt(&musico[indiceEncontrado].edad,"Ingrese edad","Error, edad invalida\n",5,90,50);
                                                    break;
                                            case 2:
                                                    getInt(&musico[indiceEncontrado].idOrquesta,"Ingrese ID de la orquesta","Error, id invalido",1,50,10);
                                                    break;
                                            case 3:
                                                    getOptionChar(&salida,"Desea salir [S/N]","Error, letra invalida\n",'s','n');

                                                    if(salida =='S')
                                                        {
                                                            continuar='n';
                                                        }
                                                    break;
                                            default:
                                                    printf("No es una opcion correcta, selecione del 1 al 3\n");
                                                    break;

                                        }
                                        fflush(stdin);

                                    }while(continuar=='s');
                                }
                                else
                                    {
                                        printf("Volviendo al menu principal");
                                    }
                    }
                    else
                    {
                      printf("No se encontro musico con esa ID");
                    }
            }
            else
            {
                printf("No hay musico cargado en el sistema");
            }
}

int eliminarMusico(eMusicos musico[], int sizeMusicos)
{
    int buscarIndice;
    int bajaExitosa=-1;
    int musicoCargados;
    char seguir;

    musicoCargados=contadorMusico(musico,sizeMusicos);

    if(musicoCargados>=1)
        {
            printf("Musicos en el sistema\n");
            mostraMusico(musico,sizeMusicos);

            buscarIndice=buscarIdMusico(musico,sizeMusicos);

            if(musico[buscarIndice].isEmpty==OCUPADO)
                {
                    printf("El siguiente musico sera eliminado:\n ");
                    printf("%5d %10s  %10s\n",musico[buscarIndice].idMusico,musico[buscarIndice].nombre,musico[buscarIndice].apellido);

                    getOptionChar(&seguir,"Desea eliminar este musico [S/N]","Error, letras invalidas\n",'s','n');

                    if(seguir=='S')
                        {
                            musico[buscarIndice].isEmpty=-1;
                            printf("Baja existosa\n");
                            printf("Se elimino %5d %10s  %10s\n",musico[buscarIndice].idMusico,musico[buscarIndice].nombre,musico[buscarIndice].apellido);
                        }
                    else
                        {
                            printf("Volviendo al menu principal");
                        }

                }
                else
                    {
                        printf("No se encontraron orquestas con esa id\n");
                    }




        }
        else
            {
                printf("No hay orquesta cargadas en el sistema\n");
            }

}

void mostrarOrquestaConMasDeCinco(eMusicos musico[],int sizeMusico, eOrquestas orquesta[], int sizeOrquesta)
{
    int i;//orquesta
    int j;//musico
    eMusicos aux[sizeOrquesta];



   /* for(i=0;i<sizeOrquesta;i++)//inicializo el contador y el id
        {
            aux[i].idOrquesta=orquesta[i].idOrquesta;
            aux[i].contador=0;
        }*/

    for(i=0;i<sizeOrquesta;i++)
        {
            aux[i].idOrquesta=orquesta[i].idOrquesta;
            aux[i].contador=0;

            for(j=0;j<sizeMusico;j++)
                {
                       if(aux[j].isEmpty==OCUPADO && (orquesta[i].idOrquesta==aux[j].idOrquesta)&& aux[j].edad>=30)
                            {
                                aux[i].contador++;

                            }
                }

        }


    for(i=0;i<sizeOrquesta;i++)
        {
            if(orquesta[i].isEmpty==OCUPADO )
                {
                    printf("%s  %d\n",orquesta[i].nombre,aux[i].contador);
                }
        }



}

/*void mostrarMusicosMayoresConSusIstrumento(eInstrumentos listaInstrumento[],int sizeInstrumentos, eMusicos listaMusico[], int sizeMusico, eOrquestas listaOrquesta[], int sizeOrquesta)
{
    int i;//musico
    int j;//orquesta
    int k;//instrumento
    eMusicos aux[sizeMusico];

        for(i=0;i<sizeOrquesta;i++)
            {

                for(j=0;j<sizeInstrumentos;j++)
                    {
                        for(k=0;k<sizeMusico;k++)
                            {
                                if((listaMusico[k].isEmpty==OCUPADO && listaMusico[k].edad>=30)&&(listaMusico[k].idIntrumento==listaInstrumento[j].idInstrumento)&&(listaMusico[k].idOrquesta==listaOrquesta[i].idOrquesta))

                                    {
                                       printf("%10s\n",listaMusico[k].nombre,listaInstrumento[k].nombre);
                                    }
                            }
                    }
            }


}*/


void mostrarOrquestaPorNombre(eOrquestas listaOrquesta[],int sizeOrquesta)
{
    int i;
    char localidad[50];

    getCharString(&localidad,"Ingrese localidad de la orquesta","Error, no es un localidad valida",1,50,30);


    for(i=0;i<sizeOrquesta;i++)
        {
            if(listaOrquesta[i].isEmpty==OCUPADO &&strcmp(localidad,listaOrquesta[i].lugar)==0)

                {
                    printf("%5s %5s\n",listaOrquesta[i].nombre,listaOrquesta[i].lugar);
                }
        }
}

void orquestaCompleta(eOrquestas listaOrquesta[],int sizeOrquesta,eInstrumentos listaInstrumento[],int sizeInstrumento)
{
    int i;//orquesta
    int j;//instrumentos
    eAux aux[sizeOrquesta];


    for(i=0;i<sizeOrquesta;i++)
        {
            aux[i].idOrquesta=listaOrquesta[i].idOrquesta;
            aux[i].contador=0;
        }
    for(i=0;i<sizeOrquesta;i++)
        {

            for(j=0;j<sizeInstrumento;j++)
                {
                    if(aux[j].isEmpty==OCUPADO && (aux[j].idOrquesta==listaOrquesta[i].idOrquesta) )//&& (listaInstrumento[j].tipo==1) )
                        {
                            aux[i].contador++;

                        }
                }
        }

    for(i=0;i<sizeOrquesta;i++)
        {
            if(listaOrquesta[i].isEmpty==OCUPADO)
                {
                    printf("%s %d\n",listaOrquesta[i].nombre,aux[i].contador);
                }
        }

}


void mostrarMusicosPorId(eMusicos listadoMusicos[],int sizeMusicos,eOrquestas listadoOrquesta[],int sizeOrquesta )
{
    int i;
    int j;
    int id;

    getInt(&id,"Ingrese ID de la orquesta","Error, gato\n",1,5,10);

    for(i=0;i<sizeOrquesta;i++)
        {
            if(listadoOrquesta[i].isEmpty==OCUPADO && listadoOrquesta[i].idOrquesta==id)
                {
                        for(j=0;j<sizeMusicos;j++)
                            {
                                if(listadoMusicos[j].isEmpty==OCUPADO  && listadoMusicos[j].idOrquesta==listadoOrquesta[i].idOrquesta)
                                    {
                                        printf("%s\n",listadoMusicos[j].nombre);
                                    }
                            }

                }
        }
}

void promedio()



