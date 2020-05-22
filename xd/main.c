#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int getOptionChar(char* input,char message[],char eMessage[], char caracterUno, char caracterDos);

int main()
{
    char opcion;

    getOptionChar(&opcion,"letra","error",'s','m');

    if(opcion=='S')
        {
            printf("hola");
        }
    return 0;
}
int getOptionChar(char* input,char message[],char eMessage[], char caracterUno, char caracterDos)
{
    char caracter;
    int validar = -1;

    printf("%s ", message);
    fflush(stdin);
    scanf("%c", &caracter);

    while( toupper(caracter) != toupper(caracterUno) && toupper(caracter) != toupper(caracterDos))
    {
        printf("///%s///\n", eMessage);
        printf("\n%s ", message);
        fflush(stdin);
        scanf("%c", &caracter);
    }

    *input = toupper(caracter);
    validar = 0;

    return validar;
}
