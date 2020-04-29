#include <stdio.h>
int getInt(int* puntero, char texto[],char error[] , int min , int max, int intentos);
float getFloat(float* puntero,char texto[], char error[],float min, float max,int intentos);
char getChar(char* puntero, char texto[],char error[],char min, char max,int intentos);
char getCharOption(char* puntero,char texto[], char error[],char caracterUno, char caracterDos,int intentos);
char getCharString(char* puntero,char texto[],char error[], int min, int max);
