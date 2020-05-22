#include <stdio.h>



int main()
{

    int x;
    int* puntero;
    int* otroPuntero;

    int miVector[10];

    puntero = &x;

    *puntero = 45;

    otroPuntero = puntero;

    *otroPuntero = 100;

    printf("%d", x);




    /*rintf("%d\n", puntero);
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


