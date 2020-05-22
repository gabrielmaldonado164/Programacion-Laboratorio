#include "proveedor.h"

void harcodeoProveedor(eProveedor listaProveedores[])
{
    int idProveedor[4]={101,102,103,104};
    char nombre[4][50]={"proveedor1","proveedor2","proveedor3","proveedor4"};
    char localidad[4][50]={"localida1","localidad2","localida3","localidad4"};

    int i;

    for(i=0;i<4;i++)
    {
        listaProveedores[i].idProveedor=idProveedor[i];
        strcpy(listaProveedores[i].nombre,nombre[i]);
        strcpy(listaProveedores[i].localidad,localidad[i]);

    }
}
