
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes;

    printf("ingrese mes del a�o");
    scanf("%d",&mes);

    switch(mes)
    {
        case 1:
        case 2:
        case 3:
            printf("verano");
            break;
        case 4:
        case 5:
        case 6:
            printf("oto�o");
            break;
        case 7:
        case 8:
        case 9:
            printf("invierno");
        default:
            printf("primavera");
            break;
    }


    return 0;
}
