#include <stdio.h>
#include <string.h>

typedef struct
{
    int idProveedor;//FK
     int idProducto;
    char nombre[50];
    float precio;
    int stock;



}eProducto;

void  harcodeoProducto(eProducto[]);
