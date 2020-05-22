#include <stdio.h>
#include <stdlib.h>
#define LOWER 0 //limite inferior de la tabla
#define UPPER 300 //limite superior de la tabla
#define STEP 20 //tamaño de incremento

//LOS DEFINES SON CONSTANTES !!

int main()
{
    /*
    //imprime la tabla de Farenheit - celsius
    float fahr,celsius;
    int lower,upper,step;//step tamañao de incremento

    lower=0;
    upper=300;
    step=20;

    fahr=lower;

    printf("Farenheit a celsius\n");
    while(fahr <= upper)
        {
            celsius=5 *(fahr-32)/9;
            printf("%.2f \t%6.2f\n",fahr,celsius);
            fahr=fahr + step;
        }

        //otra manera de hacerlo con for
        int i;
        for(i=LOWER;i<= UPPER;i=i+STEP)
            {
                printf("%3d %6.2f\n",i,(5.0/9.0)*(i-32));

            }

        */

    int contador;
    for(contador=0;getchar() != EOF;contador++)
    {
        ;
        printf("%d\n",contador);
    }

    return 0;
}
