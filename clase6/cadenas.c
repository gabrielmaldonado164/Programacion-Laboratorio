
#include <stdio.h>
#include <string.h> //funciones dentro de esta biblioteca,por ejemplo me deja conecer el largo de la cadena

int main()
{
    char palabra[100] ="hola";
    char otraPalabra[100]
    int comp;
    int largo;


    printf("Ingrese una palabra: ");
    //scanf("%s",palabra); no sabe diferenciar un espacio de un enter


    //gets es para windows
    //gets(palabra);


    //fgets funciona en windows y linux, recibe 3 parametros, ESTO ES PARA PODER LEER UN TEXTO
    fgets(palabra,100,stdin/*limpia el bufer*/);// sirve para leer un archivo de texto (fgets)


    largo =strlen(palabra);

    palabra[largo-1]='\0';

     largo =strlen(palabra);

    printf("El largo es: %d",largo);
    printf("La palabra es: %s", palabra);


   //strcpy es para copia una palabra en otra
    strcpy(otraPalabra, palabra);
    printf("la palabra es %s",otraPalabra);

    //int strcmp(const char*, const char*) para comparar caracter por caracter dentro del codigo asli

    comp=strcmp(palabra,otraPalabra);

    printf(" comparacion %d", comp);

    if(strcmp(palabra, "avellaneda")==0)
    {
        printf("vive en avellaneda");
    }
    else
    {
        printf("no vive en avellaneda");
    }


    //strupr para pasar a mayuscula
    //strlwr para pasar a minuscula


    strupr(palabra);
    puts(palabra);

    //es para poder concadenar palabras
    //strcat(char*, const char*)

    strcat(otraPalabra,palabra)
    return 0;
}
