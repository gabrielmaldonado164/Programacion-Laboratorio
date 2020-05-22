#include <stdio.h>
#include <string.h>
#include "input.h"

typedef struct
{


    int idProveedor;//PK
    char nombre[50];
    char localidad[50];

    int isEmpty;





}eProveedor;

void harcodeoProveedor(eProveedor[]);
int buscarProveedor(eProveedor proveedor[],int sizeProveedor);

