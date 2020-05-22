#include "proveedor.h"

void harcodeoProveedor(eProveedor listaProveedores[])
{
    int idProveedor[4]={101,102,103,104};
    char nombre[4][50]={"proveedor1","proveedor2","proveedor3","proveedor4"};
    char localidad[4][50]={"localida1","localidad2","localida3","localidad4"};

   int isEmpty[4]={1,1,1,1};

    int i;

    for(i=0;i<4;i++)
    {
        listaProveedores[i].idProveedor=idProveedor[i];
        strcpy(listaProveedores[i].nombre,nombre[i]);
        strcpy(listaProveedores[i].localidad,localidad[i]);
    listaProveedores[i].isEmpty=isEmpty[i];

    }
}

int buscarProveedor(eProveedor proveedor[],int sizeProveedor)
{

    int i;
    int id;
    int indice=-1;

    getInt(&id,"Ingrese el ID de Proveedor","Error ID invalid",1,500,5);

    for(i=0;i<sizeProveedor;i++)
        {
            if(proveedor[i].idProveedor == id)
                {
                    indice=i;
                    break;
                }
        }
        return indice;
}



