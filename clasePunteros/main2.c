#include <stdio.h>
#include <stdlib.h>
 int dato;
  int main()
{
    int* punteroDato;

    punteroDato = &dato;


    printf("Ingrese un valor: ");
    scanf("%d", punteroDato);
    //*punteroDato = 100;

    printf("dato: %d\n", dato);

    /*printf("dato: %d\n", dato);//Naranja
    printf("dato (*): %d\n", *punteroDato);//naranja
    printf("dir dato: %p\n", &dato);//celeste
    printf("dir punteroDato: %p\n", &punteroDato);//verde
    printf("dir a la que apunta punteroDato: %p\n", punteroDato);//celeste
    */

 return 0;
}
