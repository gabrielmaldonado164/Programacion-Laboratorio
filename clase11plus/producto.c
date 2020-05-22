#include "producto.h"
#include "input.h"

void  harcodeoProducto(eProducto listado[])
{

    int idProveedor[10]={101,101,102,102,102,102,103,103,103,103};//aca le aagrego a que proveedor esta relacionado los productos
    int idProducto[10]={1,2,3,4,5,6,7,8,9,10};
    char nombre[10][50]={"producto1","producto2","producto3","producto4","procuto5","producto6","producto7","producto8","producto9","producto10"};
     float precio[10]={10.5,20.3,15.5,50,6,3.3,48.2,9.5,34,84.2};
     int stock[10]={50,1,25,3,6,8,9,15,8,4};
     int isEmpty[10]={1,1,1,1,1,1,1,1,1,1};

    for(int i=0;i<10;i++)
    {
        listado[i].idProveedor=idProveedor[i];
        listado[i].idProducto= idProducto[i];
        strcpy(listado[i].nombre,nombre[i]);
        listado[i].precio=precio[i];
        listado[i].stock=stock[i];
        listado[i].isEmpty=isEmpty[i];
    }

}

int menuUsuario(void)
{
    int opcion;

        system("cls");
        printf("Menu de opciones \n");
        printf("1.Ingresar Producto \n");
        printf("2.Modificar Producto \n");
        printf("3.Eliminar Producto \n");
        printf("4.Mostrar Producto \n");
        printf("5.Ordenar Producto \n");
        printf("6.Salir \n");

        printf("\nElija una opcion:");
        fflush(stdin);
        scanf("%d",&opcion);


    return opcion;

}

int menuModificaciones(void)
{
    int opcion;

        system("cls");
        printf("Menu de opciones \n");
        printf("1.Modificar Nombre");
        printf("2.Modificar Precio");
        printf("3.Modificar Stock");
        printf("4Salir \n");

        printf("\nElija una opcion:");
        fflush(stdin);
        scanf("%d",&opcion);
        return opcion;
}

void mostrarProducto(eProducto producto[],int cantidad)
{
    int i;

    for(i=0;i<cantidad;i++)
        {
            if(producto[i].isEmpty==OCUPADO)
                {
                    printf("%10d %10s %10.2f %10d\n",producto[i].idProducto,producto[i].nombre,producto[i].precio,producto[i].stock);
                }
        }
}

void inicializarProducto(eProducto producto[], int cantidad)
{
    int i;

    for(i=0;i<cantidad;i++)
        {
            producto[i].isEmpty=LIBRE;
        }

}


int buscaLibre(eProducto producto[],int cantidad)
{
    int indice=-1;
    int id=idProducto(producto,cantidad);
    int i;


    for(i=0;i<cantidad;i++)
        {
            if(producto[i].isEmpty==LIBRE && producto[i].idProducto==id)
                {
                    indice=i;
                    break;
                }
        }

    return indice;
}

int idProducto(eProducto producto[],int cantidad)
{
    int id=1;
    int i;

    for(i=0; i<cantidad; i++)
    {
        if(producto[i].isEmpty==LIBRE)
        {
            producto[i].idProducto=id;
            break;
        }else
        {
            id++;
        }
    }
    return id;
}
int altaProducto(eProducto producto[],int cantidad)
{
    int altaExitosa=-1;
    int indiceEncontrado;

    indiceEncontrado=buscaLibre(producto,cantidad);


    if(indiceEncontrado==-1)
        {
            printf("No hay mas espacion en el sistema");
        }
     else
        {
            getCharString(&producto[indiceEncontrado].nombre,"Ingrese nombre de producto\n","Error no es un nombre valido\n",1,50,5);
            getFloat(&producto[indiceEncontrado].precio,"Ingrese precion\n","Error precio no valido, el precio debe estar de 100 a 10000\n",100,10000,5);
            getInt(&producto[indiceEncontrado].stock,"Ingrese stock\n","Error, no es un numero\n",1,10000,5);


            producto[indiceEncontrado].isEmpty=OCUPADO;

                system("pause");
                system("cls");
                printf("Producto Cargado correctamente\n\n");

            altaExitosa=1;


        }
    return altaExitosa;
}

int eliminarProducto(eProducto producto[],int cantidad)
{
    int bajaExitosa=-1;
    int indice=-1;
    int productoEncontrado;
    char seguir;

    productoEncontrado=contadorProductos(producto,cantidad);

    if(productoEncontrado>=1)
        {
            printf("Productos\n");
            mostrarProducto(producto,cantidad);

            indice=buscarId(producto,cantidad);

            if(producto[indice].isEmpty==OCUPADO)
                {
                    printf("El siguiente producto se eliminara se eliminara:\n");
                   printf("%10d %10s %10.2f %10d\n",producto[indice].idProducto,producto[indice].nombre,producto[indice].precio,producto[indice].stock);

                    getOptionChar(&seguir,"Desea continuar[S/N]","Error letra invalida",'s','n');

                    if(seguir =='S')
                        {
                            producto[indice].isEmpty=BAJA;
                            printf("Se elimino correctamente el producto %10s\n",producto[indice].nombre);
                            bajaExitosa=1;
                        }
                        else
                            {
                                printf("Volviendo al menu\n");
                            }
                }else
                {
                    printf("No se encontraron productos con ese ID");
                }

        }
        else
        {
          printf("No hay productos cargados");
        }




}

int modificarProducto(eProducto listado[], int cantidad)
{
    int indice=-1;
    int productoCargado;
    char seguir;
    char salida;
    char continuar;

    productoCargado=contadorProductos(listado,cantidad);

    if(productoCargado>=1)
        {
            printf("Productos\n");
            mostrarProducto(listado,cantidad);

            indice=buscarId(listado,cantidad);

            if(listado[indice].isEmpty==OCUPADO)
                {
                    printf("El siguiente producto se modificara:\n");
                   printf("%10d %10s %10.2f %10d\n",listado[indice].idProducto,listado[indice].nombre,listado[indice].precio,listado[indice].stock);

                     getOptionChar(&seguir,"Desea continuar[S/N]","Error letra invalida",'s','n');

                     if(seguir=='S')
                        {
                            do{
                                switch(menuModificaciones())
                                {
                                    case 1:
                                        getCharString(&listado[indice].nombre,"Ingrese nuevo nombre","Error, no son letras validas",1,50,10);
                                        break;
                                    case 2:
                                        getFloat(&listado[indice].precio,"Ingrese nuevo precio","Error",100,200000,10);
                                        break;
                                    case 3:
                                        getInt(&listado[indice].stock,"Ingrese stock","Error, no es un numero",1,500,10);
                                        break;
                                    case 4:
                                        getOptionChar(&salida,"Desea salir[S/N]","Error, letra invalida",'s','n');

                                        if(salida=='S')
                                            {
                                                continuar='n';
                                            }
                                        break;
                                    default:
                                        printf("No es una opcion valida");
                                        break;


                                }

                                    fflush(stdin);


                            }while(continuar=='s');


                        }else
                        {
                            printf("Volviendo al menu principal");
                        }

                }else
                {
                    printf("No se encontro producto con esa ID");
                }
        }else
        {
            printf("No hay producto cargado en el sistema");
        }
}

int contadorProductos(eProducto productos[], int cantidad)
{
    int i;
    int contador=0;

    for(i=0;i<cantidad;i++)
        {
            if(productos[i].isEmpty==OCUPADO)
                {
                    contador++;
                }
        }

        return contador;
}

int buscarId(eProducto producto[], int cantidad)
{
    int i;
    int id;
    int indice=-1;

    getInt(&id,"Ingrese el ID de producto","Error ID invalid",1,500,5);

    for(i=0;i<cantidad;i++)
        {
            if(producto[i].isEmpty==OCUPADO &&  producto[i].idProducto == id)
                {
                    indice=i;
                    break;
                }
        }
        return indice;
}


