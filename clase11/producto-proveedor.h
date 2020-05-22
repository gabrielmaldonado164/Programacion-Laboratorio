#include "producto.h"
#include "proveedor.h"
#include <string.h>


typedef struct
{
    int idProveedores;
    int cantidadProductos;

}eAux;

void mostarProveedoresConSusProductos(eProveedor listadoProveedores[],int sizeProveedores, eProducto listadoProducto[],int sizeProductos);
void mostrarProveedorConMayorCantidadDeProductos(eProducto listadoProducto[], int sizeProducto, eProveedor listadoProveedor[], int sizeProveedores);
