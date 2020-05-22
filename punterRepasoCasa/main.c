#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=19;

    int* puntero;
    puntero=&numero;

    printf("%d\n",*puntero);

    printf("%p",&puntero);
    return 0;
}
