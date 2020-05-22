#include "producto.h"

void  harcodeoProducto(eProducto listado[])
{

    int idProveedor[10]={101,101,102,102,102,103,103,103,103,103};//aca le aagrego a que proveedor esta relacionado los productos
    int idProducto[10]={1,2,3,4,5,6,7,8,9,10};
    char nombre[10][50]={"producto1","producto2","producto3","producto4","procuto5","producto6","producto7","producto8","producto9","producto10"};
     float precio[10]={10.5,20.3,15.5,50,6,3.3,48.2,9.5,34,84.2};
     int stock[10]={50,1,25,3,6,8,9,15,8,4};

    for(int i=0;i<10;i++)
    {
        listado[i].idProveedor=idProveedor[i];
        listado[i].idProducto= idProducto[i];
        strcpy(listado[i].nombre,nombre[i]);
        listado[i].precio=precio[i];
        listado[i].stock=stock[i];
    }

}
