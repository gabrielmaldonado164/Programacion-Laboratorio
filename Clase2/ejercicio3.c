#include <stdio.h>
#include <stdlib.h>


int main()
{
    float precio;
    char tipo;
    float promedioA;
    int contadorA =0;
    float acumuladorA =0;
    float comparacion;

    int contador =0;
    int contadorB =0;
    float promedioB;
    float acumuladorB =0;

    for(contador=0;contador<5;contador++){

        printf("Ingrese precio:");
        scanf("%f",&precio);

       fflush(stdin);
        printf("Ingrese tipo ");
        scanf("%c",&tipo);


        if(tipo =='a'){
            acumuladorA=acumuladorA+precio;
            contadorA++;
        }else{
            acumuladorB=acumuladorB+precio;
            contadorB++;
        }
            promedioA=acumuladorA/contadorA;
            promedioB=acumuladorB/contadorB;

    }

        if(promedioA==promedioB){
            printf("El promedio es igual: %f",promedioA);
        }
        else {
            if(promedioA>promedioB){
                printf("El promedio de a es mayor %f",promedioA);
            }
            else{
                printf("El promedio de a es menor que B %f",promedioB);
            }

        }


    return 0;
}
