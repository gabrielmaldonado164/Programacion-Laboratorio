#include <stdio.h>
#include <string.h>
#include "producto-proveedor.h"

int main()
{

    eProveedor listaProveedor[4];
    eProducto listaProducto[10];
    eProveedor listadoProveedor[4];

    char seguir='s';

    harcodeoProveedor(listaProveedor);
    harcodeoProducto(listaProducto);

    //mostarProveedoresConSusProductos(listaProveedor,4,listaProducto,10);
    //mostrarProveedorConMayorCantidadDeProductos(listaProducto,10,listaProveedor,4);

    inicializarProducto(listaProducto,10);

    do
        {
            switch(menuUsuario())
            {
            case 1:
                 system("cls");
                 altaProducto(listaProducto,10);
                   system("pause");
                 break;

            case 2:

                    modificarProducto(listaProducto,10);
                    system("pause");
                break;
            case 3:
                    eliminarProducto(listaProducto,10);
                     system("pause");
                     break;
            case 4:
                mostarProveedoresConSusProductos(listaProveedor,4,listaProducto,10);
                system("pause");
                break;
            case 5:
                bajaProveedorConSuProducto(listadoProveedor,4,listaProducto,10);
                system("pause");
                break;
            }
        }while(seguir=='s');


    return 0;
}
