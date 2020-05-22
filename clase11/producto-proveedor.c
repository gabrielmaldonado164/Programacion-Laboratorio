#include "producto-proveedor.h"

void mostarProveedoresConSusProductos(eProveedor listadoProveedores[],int sizeProveedores, eProducto listadoProducto[],int sizeProductos)
{//primero muestro el proveedor, pq lo que tengo que mostrar en este caso es los proveedores con sus productos
    int i;//proveedores
    int j;//producto
    char flagTieneProducto;//hago una bandera para saber si entra o no el proveedor, ya que si no tiene productos le puedeo agregar otro datos

    for(i=0; i<sizeProveedores;i++)
    {
        printf("\nProveedor: %s\n",listadoProveedores[i].nombre);

        flagTieneProducto='n';//aca inicializo la bandera

        for(j=0;j<sizeProductos;j++)
        {
            if(listadoProveedores[i].idProveedor ==listadoProducto[j].idProveedor)
            {
                printf("%10d %10s \n",listadoProducto[j].idProducto,listadoProducto[j].nombre);//aca el printf es para mostrar los productos solamente
                flagTieneProducto='s';//aca cambio el valor de la bandera para los proveedores que tiene productos

            }
        }

        if(flagTieneProducto=='n')
        {
            printf("\n No tiene productos\n");
        }
    }
}

void mostrarProveedorConMayorCantidadDeProductos(eProducto listadoProducto[], int sizeProducto, eProveedor listadoProveedor[], int sizeProveedores)
{
    eAux auxProducto_proveedores[sizeProveedores];
    int i;//proveedores
    int j;//producto
    int maximo;

    for(i=0;i<sizeProveedores;i++)
        {
            auxProducto_proveedores[i].idProveedores=listadoProveedor[i].idProveedor;
            auxProducto_proveedores[i].cantidadProductos=0;
        }

    for(i=0;i<sizeProveedores;i++)
        {
            for(j=0;j<sizeProducto;j++)
                {
                    if(listadoProducto[i].idProveedor==listadoProveedor[j].idProveedor)
                        {
                            auxProducto_proveedores[i].cantidadProductos++;
                        }
                }
        }
    for(i=0;i<sizeProveedores;i++)
        {
            if(i==0 || auxProducto_proveedores[i].cantidadProductos>maximo)
                {
                    maximo=auxProducto_proveedores[i].cantidadProductos;
                }
        }
    for(i=0;i<sizeProveedores;i++)
        {
            for(j=0;j<sizeProveedores;j++)
                {
                    if(listadoProveedor[i].idProveedor==auxProducto_proveedores[i].idProveedores && auxProducto_proveedores[i].cantidadProductos==maximo)
                        {
                            printf("%s\n", listadoProveedor[i].nombre);
                        }
                }
        }




}

