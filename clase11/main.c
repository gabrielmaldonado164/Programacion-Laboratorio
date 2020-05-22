#include <stdio.h>
#include <string.h>
#include "producto-proveedor.h"
int main()
{

    eProveedor listaProveedor[4];
    eProducto listaProducto[10];

    harcodeoProveedor(listaProveedor);
    harcodeoProducto(listaProducto);

    mostarProveedoresConSusProductos(listaProveedor,4,listaProducto,10);
    mostrarProveedorConMayorCantidadDeProductos(listaProducto,10,listaProveedor,4);


    return 0;
}
