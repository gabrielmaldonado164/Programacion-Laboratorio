
#include <stdio.h>
//ESTA ES LA MANERA DE HACERLO BIEN PIOLA!

int incrementar(int*);
int main()
{
    int contador = 0;


    if(incrementar(&contador))
    {
        printf("contador incrementado: %d", contador);
    }
    else
    {
        printf("Puntero no inicializado.");
    }

    return 0;
}
int incrementar(int* variable)
{
    int pudo = 0;
    if(variable!=NULL)
    {
        *variable+=1;
        pudo = 1;
    }

   return pudo;
}

 //*variable = *variable + 1; OK
   //(*variable)++; OK
   //variable++; MAL // EL MAS SIEMPRE TIENE PRIORIDAD
   //*variable++; MAL
