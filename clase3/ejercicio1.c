#include <stdio.h>
#include <stdlib.h>

int getInt(char texto[],char error[], int min, int max);
float getFloat(char texto[], char error[],float min, float max);
char getChar(char texto[],char error[],int mujer, int varon);

int main()
{
    int legajo;
    float altura;
    char sexo;

    legajo =getInt("ingrese su legajo","reingrese legajo",1,100);
    altura = getFloat("ingrese su altura","reingrese altura",1.30,2.50);
    sexo = getChar("ingrese su sexo(1==mujer || 2==varon)","reingrese sexo",1,2);

    return 0;
}

int getInt( char texto[],char error[],int min,int max)
{
    int valor;

    printf("%s",texto);
    scanf("%d",&valor);

    while(valor<min || valor>max)
    {

        printf("%s",error);
        scanf("%d",&valor);
    }




    return valor;
}

float getFloat(char texto[], char error[],float min, float max)
{
    float valor;

    printf("%s",texto);
    scanf("%f",&valor);


    while(valor<min || valor>max){

        printf("%s",error);
        scanf("%f",&valor);
    }
    return valor;
}

char getChar(char texto[],char error[],int mujer, int varon)
{
    int sexo;

    printf("%s",texto);
    scanf("%d",&sexo);

    while(sexo<mujer || sexo>varon){

        printf("%s",error);
        scanf("%d",&sexo);

    }
    return sexo;
}
