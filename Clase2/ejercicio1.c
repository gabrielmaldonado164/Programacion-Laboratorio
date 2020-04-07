#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precio;
    char tipo;
    float promedio;
    float precioCaro;
    int contador=0;
    float acumulador =0;



    for(contador=0;contador<5;contador++){

        printf("Ingrese precio:");
        scanf("%f",&precio);

        printf("Ingrese tipo ");
        fflush(stdin);
        scanf("%c",&tipo);

        acumulador=acumulador+precio;


        if(precio>precioCaro ||contador ==0){
            precioCaro=precio;
        }

        promedio=acumulador/contador;

    }

    printf("El precio mas caro es: %f ",precioCaro);
    printf("El promedio es: %f",promedio);

    return 0;
}
