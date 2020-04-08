#include <stdio.h>
#include <stdlib.h>

int esPar(int numero);

int main()
{
   int resultado;
   int numero;

   printf("Ingrese numero");
   scanf("%d",&numero);

   resultado = esPar(numero);

   printf("%d",resultado);

    return 0;
}

int esPar(int numero)
{
    int resultado =0;//por defecto la inicio en cero  para que cualquier numere que ingrese sea impar, si se cumple el if cambia

    if(numero%2 ==0)
    {
        resultado = 1;
    }

    return resultado;//retorna el valor inicial si no entra al if

}
