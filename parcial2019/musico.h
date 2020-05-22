#include <stdio.h>
#include <string.h>
#include "orquesta.h"
#include "instrumento.h"
#include "input.h"
#define LIBRE 0
#define OCUPADO 1
typedef struct
{
    int idOrquesta;
    int idIntrumento;
    int idMusico;
    char nombre[50];
    char apellido[50];
    int edad;
    int contador;

    int isEmpty;

}eMusicos;

typedef struct
{
    int idOrquesta;
    int idInstrumento;
    int contador;
    int
    int isEmpty;

}eAux;

void harcodeoMusico(eMusicos[]);
void mostraMusicosOonInstrumentos(eMusicos[],int,eInstrumentos[],int);
int inicializarMusicos(eMusicos musico[],int sizeMusico);
int contadorMusico(eMusicos musico[],int sizeMusico);
int buscarLibreMusico(eMusicos musico[],int sizeMusico);
int idMusico(eMusicos musico[],int sizeMusico);
void mostrarOquestaConMusicos(eOrquestas listaOquesta[],int sizeOquesta, eMusicos listaMusicos[],int sizeMusicos);

int altaMusico(eMusicos musico[], int sizeMusico, eOrquestas orquesta[],int sizeOrquesta, eInstrumentos instumento[],int sizeInstrumento);
int eliminarOrquesta(eOrquestas orquesta[], int sizeOrquesta,eMusicos musicos[],int siseMusicos);

int buscarIdMusico(eMusicos musico[], int sizeMusico);
int modificarMusico(eMusicos musico[],int sizeMusico,eOrquestas orquesta[],int sizeOrquesta);
void mostraMusico(eMusicos musico [],int sizeMusico);
int menuModificarMusico(void);
int eliminarMusico(eMusicos musico[], int sizeMusicos);
void mostrarOrquestaConMasDeCinco(eMusicos musico[],int sizeMusico, eOrquestas orquesta[], int sizeOrquesta);
int contadorOrquesta_Musico(eMusicos listaMusico[],int sizeMusico, eOrquestas listaOrquesta[], int sizeOrquesta);
