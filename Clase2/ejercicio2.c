#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precio;
    char tipo;
    float promedioA;
    int contador=0;
    float acumulador =0;
    int contadorA=0;


    for(contador=0;contador<5;contador++){

        printf("Ingrese precio:");
        scanf("%f",&precio);


        printf("Ingrese tipo ");
        fflush(stdin);
        scanf("%c",&tipo);


        if(tipo == 'a'){
            acumulador=acumulador+precio;
            contadorA++;
        }

        promedioA=acumulador/contadorA;

    }
    printf("El promedio es: %f",promedioA);

    return 0;
}
