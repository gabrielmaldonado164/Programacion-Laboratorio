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
    char lugar[50];
    int tipo;

    int isEmpty;
}eOrquestas;


void harcodeoOrquesta(eOrquestas orquesta[]);
void mostraOrquesta(eOrquestas orquesta[],int sizeOrquesta);
int inicializarOrquesta(eOrquestas orquesta[],int sizeOrquesta);
int contadorOrquesta(eOrquestas orquesta[],int sizeOrquesta);
/** \brief  Busca un indeice libre y lo devuelve
 *
 * \param orquesta[] eOrquestas  recibe la estrucutura
 * \param sizeOrquesta int  recibe la longitud de la estructura
 * \return int  retorna el indice libre
 *
 */
int buscarLibre(eOrquestas orquesta[],int sizeOrquesta);
int idOrquesta(eOrquestas orquesta[],int sizeOrquesta);
int altaOrquesta(eOrquestas orquesta[],int sizeOrquesta);
char* tipo(int id);
void listar();
int menuUsuario(void);
int buscarIdOrquesta(eOrquestas orquesta[],int sizeOrquesta);


