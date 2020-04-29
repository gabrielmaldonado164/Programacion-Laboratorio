#include <stdlib.h>
#include <string.h>
#include "input.h"

int getInt(int* puntero, char texto[],char error[] , int min , int max, int intentos)
{
    int allOk = -1;
    int valor;


        do{
                printf("%s",texto);
                scanf("%d",&valor);

                if(valor>min && valor<max)
                    {
                       *puntero=valor;
                       allOk=0;
                       break;

                    }
                else
                    {
                        printf("%s",error);
                        intentos--;
                    }

            }while(intentos >0);

       return allOk;
}

float getFloat(float* puntero,char texto[], char error[],float min, float max,int intentos)
{
    int allOk = -1;
    float valor;


        do{
                printf("%s",texto);
                scanf("%f",&valor);

                if(valor>min && valor<max)
                    {
                       *puntero=valor;
                       allOk=0;
                       break;

                    }
                else
                    {
                        printf("%s",error);
                        intentos--;
                    }

            }while(intentos >0);

       return allOk;
}


char getChar(char* puntero, char texto[],char error[],char min, char max,int intentos)
{
    int allOk = -1;
    char valor;


        do{
                printf("%s",texto);
                fflush(stdin);
                scanf("%s",&valor);

                if(valor>min && valor<max)
                    {
                       *puntero=valor;
                       allOk=0;
                       break;

                    }
                else
                    {
                        printf("%s",error);
                        intentos--;
                    }

            }while(intentos >0);

       return allOk;
}



char getCharOption(char* puntero,char texto[], char error[],char caracterUno, char caracterDos, int intentos)
{
    int allOk=-1;
    char caracter;


    do{
        printf("%s",texto);
        fflush(stdin);
        scanf("%c",caracter);

        if(toupper(caracterUno)==caracter || toupper(caracterDos)==caracter)
            {
                *puntero=caracter;
                allOk=0;
                break;
            }
        else
            {
                printf("%s",error);
                intentos--;
            }

    }while(intentos>0);

    return allOk;
}

char getCharString(char* puntero,char texto[],char error[], int min, int max)
{
    char palabra[50];
    int allOk=-1;

        printf("%s",texto);
        fflush(stdin);
        scanf("%s",palabra);


        while(strlen(palabra)<min && strlen(palabra)>max)
            {
                printf("%s",error);
                printf("%s",texto);
                fflush(stdin);
                scanf("%s",palabra);

            }
        strcpy(puntero,palabra);

    return allOk;

}

