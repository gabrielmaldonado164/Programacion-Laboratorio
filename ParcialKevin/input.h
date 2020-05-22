#include <stdio.h>
#include <string.h>
#include <ctype.h>
int getInt(int* puntero, char texto[],char error[] , int min , int max, int intentos);
int esNumerico(char* cadena);
int guardoDatos(char* cadena, int longitud);
int getNumero(int* puntero);

int getFloat(float* puntero,char texto[], char error[],float min, float max,int intentos);
int getNumeroFlotante(float* puntero);

int getOptionChar(char* input,char mensaje[],char error[], char caracterUno, char caracterDos);


char getCharString(char* puntero,char texto[],char error[], int min, int max,int intentos);
int esLetra(char* cadena);
int getTexto(char* puntero);



