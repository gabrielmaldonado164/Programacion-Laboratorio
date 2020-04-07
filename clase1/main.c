#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero=0;
   int maximo;
   int contador;

   for(contador=0;contador<3;contador++){

    printf("\nIngrese el numero  %d: ", contador+1);
    scanf("%d",&numero);

    if(contador == 0|| maximo<numero){
        maximo=numero;
    }

    if(maximo<numero || contador==0){
        maximo =numero;
    }
   }

   printf("el mayor numero es %d",maximo);
   scanf("%d",&maximo);

    return 0;
}
