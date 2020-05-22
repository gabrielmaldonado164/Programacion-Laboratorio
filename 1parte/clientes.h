#include <stdio.h>
#include <string.h>
#define OCUPADO 1
#define LIBRE 0
typedef struct
{

    int idCliente;
    char nombre[50];
    char apellido[50];
    char localidad[50];
    char telefono[50];
    int edad;
    char sexo;

    int isEmpty;

}eClientes;

void harcodeoClientes(eClientes listaClientes[]);
void mostrarCliente(eClientes listarClientes[], int i);
void listarClientes(eClientes listaClientes[],int sizeClientes);
void inicializadorCliente(eClientes clientes[], int tam);
