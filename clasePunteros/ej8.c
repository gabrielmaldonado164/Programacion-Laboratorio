#include <stdio.h>



int main()
{

    int miVector[5]={5,7,8,9,1};
    int* puntero;
    int i;

    puntero = miVector; // &miVector // &miVector[0];

    for(i=0; i<5; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", (puntero+i));


    }



    for(i=0; i<5; i++)
    {
        printf("%d\n", *(puntero+i)); /*ntero[i]);/* */

    }


 /*printf("%d\n", puntero);
    printf("%d\n", puntero+0);
    printf("%d\n", puntero+1);
    printf("%d\n", puntero+2);
    printf("%d\n", puntero+3);

    puntero++;

    printf("\n\n\n%d\n", puntero);
    printf("%d\n", puntero+0);
    printf("%d\n", puntero+1);
    printf("%d\n", puntero+2);
    printf("%d\n", puntero+3);

 */

}


