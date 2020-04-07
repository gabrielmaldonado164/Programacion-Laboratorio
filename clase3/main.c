#include <stdio.h>
#include <stdlib.h>

//declaracion o prototipo

/*tipo que retorna(int - float - char - double - void) - nombre (lista de parametro: datos que le voy a pasar);
void(vacio, una funcion que no devuelve nada)
lista de parametros( int -float- char- array)
si no pongo nada en la  funcion por defecto entre parentecis toma un entero*/

//void saludar(void);

int getInt(char texto[],char error[],int,int);
int miVariableGlobal;
//


int main()
{
   int edad;
   int legajo;
   int nota;

   edad = getInt("ingrese su edad","reingrese su edad",1, 20);
   legajo=getInt("ingrese su lejago","reigrese legajo", 100, 666);
   nota = getInt("ingrese su nota","reingrese nota",1, 10);


   //llamada de la funcion, siempre con el nombre y con parentecis para llamarla

    //saludar();

    return 0;
}

//desarrollo o implementacion de la funcion

/*void saludar(void)
{
    printf("\nHola a todos");

}*/

int getInt(char texto[],char error[] , int min , int max)//es array no hace falta indicar numer

{
    int valor;

    printf("%s",texto);
    scanf("%d",&valor);

    while(valor<min || valor>max){
        printf("%s",error);
        scanf("%d",&valor);
    }


    return valor;

}
