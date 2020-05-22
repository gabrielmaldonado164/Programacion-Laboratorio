#include <stdio.h>
int numero(int* numero);

int main()
{
    int dato=2;

    numero(&dato);




    printf("%d",dato);


    return 0;
}

int numero(int* numero)
{
    int ok=0;

    if(numero!=NULL)
    {
        (*numero)++;
        ok=1;
    }

    return ok;
}
