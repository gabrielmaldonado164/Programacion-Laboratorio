#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1=0;
    int numero2=0;
    int suma;
    int resta;
    int producto;
    float promedio;


    printf("ingrese el primer numero:");
    scanf("%d",&numero1);

    printf("ingrese el segundo numero: ");
    scanf("%d",&numero2);

    suma=numero1 + numero2;
    resta =numero1 - numero2;
    producto= numero1*numero2;
    promedio =(float)suma/2; //CASTEO es una conversion explicita(float), esto es para que lo convierta a flot

    printf("\nLa suma es: %d",suma);
    printf("\nLa resta es:%d",resta);
    printf("\nEl producto es: %d",producto);
    printf("\nEl promedio es: %.2f",promedio);



    return 0;
}
