#include <stdio.h>
#include <string.h>
#define OCUPADO 1
#define LIBRE 0
typedef struct
{
    int idCliente;
    int idMascota;
    char nombre[50];
    int tipo;
    char raza[50];
    int edad;
    float peso;
    char sexo;
    int isEmpty;

}eMascotas;
void harcodeoMascota(eMascotas listaMascota[]);
void inicializadorMascota(eMascotas mascota[], int tam);

void mostrarMascota(eMascotas listarMascotas[], int i);
void mostrarTodaLasMascotas(eMascotas listarMascota[],int sizeMascota);
char* TipoRaza(int tipo);
void listarTipoRaza();

