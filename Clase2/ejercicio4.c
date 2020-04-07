#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero;
    int contador;
    float maximo;
    float minimo;
    float acumulador;
    float promedio;

    contador=0;
    acumulador=0;


    for(contador=0;contador<5;contador++){

        printf("Ingrese un numero");
        scanf("%f",&numero);

        acumulador=acumulador+numero;
        promedio=acumulador/5;

        if(contador==0){
            maximo=numero;
            minimo=numero;
        }

        if(numero>maximo){

            maximo=numero;
        }

        if(numero<minimo){
            minimo=numero;
        }

    }

    printf("\nEl promedio es: %f",promedio);
    printf("\nEl numero maximo es:%f",maximo);
    printf ("\nEl numero minimo es: %f",minimo);

    return 0;
}
