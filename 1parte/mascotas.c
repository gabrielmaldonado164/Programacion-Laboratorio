#include "mascota.h"

void harcodeoMascota(eMascotas listaMascota[])
{
     eMascotas mascota[]=
    {
        {1,1, "Lupe",1,"Bengala",5,10.5,'h',1},
        {1,2 ,"poni",1,"Bengala",2,15,'h',1},
        {2,3," toni",2,"labrador",2,15.5,'m',1},
        {3,4 ,"benito",2,"galgo",10,22.2,'m',1},
        {3,5 ,"rocky",2,"galgo",3,16,'m',1},
        {3,6, "tobi",1,"persa",3,10,'m',1},
        {4,7,"rufu",2,"pitbull",5,15.3,'m',1},
        {4,8,"lopi",3,"iguana",1,2,'m',1},
        {5,9,"sizi",1,"bengala",10,15,'m',1},
        {5,10,"feli",1,"siames",2,10.9,'m',1},
        {5,11,"toribio",2,"bulldog",8,20.9,'m',1}

    };

    for(int i=0; i<11; i++)
    {
        listaMascota[i] = mascota[i];
        //mostrarMascota(listaMascota,i);
    }

}
///////////////////////////////////
int menuUsuario()
{
    int opcion;

    system("cls");
    printf("Menu de opciones \n");
    printf("1.Ingresar mascota \n");
    printf("2.Eliminar Mascota \n");
    printf("3.Modificar mascota\n");
    printf("4.Salir \n");

    printf("\nElija una opcion:");
    fflush(stdin);
    scanf("%d",&opcion);

    return opcion;
}
/////////////////////////////////////////
void inicializadorMascota(eMascotas mascota[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        mascota[i].isEmpty=LIBRE;
    }
}

void mostrarMascota(eMascotas listarMascotas[], int i)
{
    printf("%4d | %-25s %-s | %-10s - %4d - || peso: %5.2f || sexo: %c %d\n",listarMascotas[i].idMascota,listarMascotas[i].nombre,TipoRaza(listarMascotas[i].tipo),listarMascotas[i].raza,listarMascotas[i].edad,listarMascotas[i].peso,listarMascotas[i].sexo,listarMascotas[i].isEmpty);
}


void mostrarTodaLasMascotas(eMascotas listarMascota[],int sizeMascota)
{
    int hayMascota;

    hayMascota=contadorMascota(listarMascota,sizeMascota);

    if(contadorMascota>=1)
    {
        for(int i=0;i<sizeMascota;i++)
        {
            if(listarMascota[i].isEmpty==OCUPADO)
            {
                mostrarMascota(listarMascota,i);
            }
        }
    }
    else
        {
            printf("No hay mascotas en el sistema\n");
        }
}


char* TipoRaza(int tipo)
{
    char* raza;

    switch(tipo)
    {
        case 1:
            raza="Gato";
            break;

        case 2:
            raza="Perro";
            break;

        case 3:
            raza="Raro";
            break;

        default:
            raza="No es ningun tipo de raza";
            break;
    }

    return raza;
}

void listarTipoRaza()
{
    for(int i=1;i<=3;i++)
    {
        printf("%d - %s\n",i ,TipoRaza(i));
    }
}

int contadorMascota(eMascotas listaMascota[],int sizeMascota)
{
    int i;
    int contador;

    for(i=0;i<sizeMascota;i++)
        {
            if(listaMascota[i].isEmpty==OCUPADO)
                {
                    contador++;
                }
        }
    return contador;
}

int idMascota(eMascotas listaMascota[],int sizeMascota)
{
    int id=1;

    for(int i=0; i<sizeMascota; i++)
    {
        if(listaMascota[i].isEmpty==LIBRE)
        {
            break;
        }
        else
        {
            id++;
        }
    }
    return id;
}

int buscarLibre(eMascotas listaMascota[],int sizeMascota)
{
    int indice=-1;


    for(int i=0;i<sizeMascota;i++)
    {
        if(listaMascota[i].isEmpty==LIBRE)
        {
            indice=i;
            listaMascota[i].idMascota= idMascota(listaMascota,sizeMascota);
            break;
        }
    }
    return indice;
}

int buscarIdMascota(eMascotas listaMascota[],int sizeMascota)
{
    int id;
    int indice=-1;

    getInt(&id,"Ingrese ID de la mascota","Error, no se encontro una mascota con ese ID con ese ID\n",1,500,10);

    for(int i=0;i<sizeMascota;i++)
    {
        if(listaMascota[i].isEmpty==OCUPADO && listaMascota[i].idMascota==id)
        {
            indice=i;
            break;
        }
    }
    return indice;
}

int altaMascota(eMascotas listaMascota[],int sizeMascota)
{

    int altaExitosa=-1;
    int indiceEncontrado;

    indiceEncontrado=buscarLibre(listaMascota,sizeMascota);

    if(indiceEncontrado==-1)
        {
            printf("No hay mas espacio en el sistema\n");
        }
    else
        {
           getCharString(&listaMascota[i].nombre,"Ingrese nombre de mascota:\n","Error,no es un nombre valido\n",1,50,10);
           listarTipoRaza();

           getInt(&&)

            system("pause");
            system("cls");
            printf("Orquesta  Cargada correctamente, el ID es %d\n\n",orquesta[indiceEncontrado].idOrquesta);

            altaExitosa=1;

        }
        return altaExitosa;

}

