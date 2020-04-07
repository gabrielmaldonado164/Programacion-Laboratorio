#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;

    printf("ingrese su edad ");
    scanf("%d",&edad);

    if(edad<13)
    {
        printf("es un niño");
    }else
    {
        if(edad<18)
        {
            printf("es adolescente");
        }else
        {
            printf("es mayor");
        }
    }


    return 0;
}
