#include <stdio.h>
#include <string.h>
#include "input.h"
#define LIBRE 0
#define OCUPADO 1
#define BAJA -1

typedef struct
{
    int idProveedor;//FK
     int idProducto;
    char nombre[50];
    float precio;
    int stock;

    int isEmpty;



}eProducto;

void  harcodeoProducto(eProducto[]);
void inicializarProducto(eProducto[], int cantidad);
int buscaLibre(eProducto[],int cantidad);
int idProducto(eProducto[],int cantidad);
int altaProducto(eProducto[],int cantidad);
int menuUsuario(void);
void mostrarProducto(eProducto producto[],int cantidad);
int eliminarProducto(eProducto producto[],int cantidad);
int contadorProductos(eProducto productos[], int cantidad);
int buscarId(eProducto producto[], int cantidad);
int modificarProducto(eProducto listado[], int cantidad);
int menuModificaciones(void);
