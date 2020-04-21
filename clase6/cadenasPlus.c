#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[100];
    char otraPalabra[100];
    int largo;
    int comparacion;


    printf("Ingrese una palabra: ");
    //__fpurge(stdin);
    //scanf("%s",&palabra);


    fgets(palabra, 100 , stdin);

    largo=strlen(palabra);    // strlen(int strlen(const char* (ACA VA EL ARRAY)) LO QUE HACE ES LEER TODO, pero agrega un \n y\0 DEVUÑEVE EL VALOR DEL LARGO

    palabra[largo-1]='\0';

     largo=strlen(palabra);



    printf("El largo de la palabra es: %d\n",largo);
    printf("La palabra es: %s\n",palabra);



                                                       //DESTINO - ORIGEN (eso son los parametros que se le pasa a esta funcion)
    strcpy(otraPalabra,palabra);//copia una palabra en otra lado( char strcpy(char*, const char*)
    printf("La otra palabra es:%s\n",otraPalabra);

    comparacion=strcmp(palabra,otraPalabra);//strcmp(int strcmp(const char*,const char*); COMPARA LAS PALABRAS Y DEVUELVE UN ENTERO 0 si son iguales si no devuelve la diferencia entre los codigo aski // compara por codigo aski
    printf("La comparacion es: %d",comparacion);

    if(strcmp(palabra, "avellaneda")==0)
    {
        printf("vive en avellaneda\n");
    }
    else
    {
        printf("\nno vive en avellaneda");
    }


     //strupr para pasar a mayuscula //char strupr(char *) PASA TODO EL TEXTO A MAYUSCULA
    //strlwr para pasar a minuscula //char strlwr(char *) PARA TODO EL TEXTO A MINUSCULA

    strupr(palabra);

    //tolower  manda UN caracter a MINUSCULA
    //toupper manda UN caracter a MAYUSCULA
    // palabra[2]=toupper(palabra[2]); se tiene que dar ASIGNACION !!

    palabra[2]=toupper(palabra[2]);


    //strcat(char*, const char*) es para poder concadenar las cadenas, solo concadena de a pares

    strcat(otraPalabra,palabra);



    return 0;
}

