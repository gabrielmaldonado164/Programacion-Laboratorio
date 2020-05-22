#include <stdio.h>



int main()
{
    int dato;

    int* punteroDato = NULL;

    punteroDato = &dato; //LinuxDamememoria();//&dato;


   if(punteroDato!=NULL)
   {
        printf("Ingrese un valor: ");
    scanf("%d", punteroDato);
    //*punteroDato = 100;

    printf("dato: %d\n", dato);
   }
   else
   {
       printf("Puntero no asignado");
   }












    /*printf("dato: %d\n", dato);//Naranja
    printf("dato (*): %d\n", *punteroDato);//naranja
    printf("dir dato: %p\n", &dato);//celeste
    printf("dir punteroDato: %p\n", &punteroDato);//verde
    printf("dir a la que apunta punteroDato: %p\n", punteroDato);//celeste
    */

    return 0;
}

