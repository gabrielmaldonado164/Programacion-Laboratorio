#include <stdio.h>



int main()
{

    int x;
    int* puntero;
    int miVector[10];

    puntero = &x;

    printf("%d\n", puntero);
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



}


