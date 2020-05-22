#include <stdio.h>
#include <string.h>
#include "input.h"
#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int idOrquesta;
        int idInstrumento;
    char nombre[50];
    int tipo;
    int isEmpty;

}eInstrumentos;

void harcodeoInstrumentos(eInstrumentos[]);
void mostrarInstrumento(eInstrumentos instrumento[],int );
void inicializarInstrumentos(eInstrumentos instrumento[],int sizeInstrumento);
int buscarIndexLibre(eInstrumentos instrumento[], int sizeInstrumento);

int idInstrumento(eInstrumentos instrumento[],int sizeInstrumento);
int contadorInstrumento(eInstrumentos instrumento[],int sizeInstrumento);
int altaInstrumento(eInstrumentos instrumento[],int sizeInstrumento);
char* Tipo(int id);
void Listar();
