#include <stdio.h>
#include <stdlib.h>

#include "musico.h"
#define ZISE_ORQUESTA 50
#define SIZE_INSTRUMENTO 20
#define SIZE_MUSICOS 1000
int main()
{
    eInstrumentos listadoInstrumentos[SIZE_INSTRUMENTO];
    eMusicos listadoMusico[SIZE_MUSICOS];
    eOrquestas listadoOrquesta[ZISE_ORQUESTA];


    //harcodeoInstrumentos(listadoInstrumentos);
    harcodeoMusico(listadoMusico);
    harcodeoOrquesta(listadoOrquesta);


   // mostraMusicosOonInstrumentos(listadoMusico,10,listadoInstrumentos,10);
  // mostraOrquesta(listadoOrquesta,5);

   // inicializarOrquesta(listadoOrquesta,ZISE_ORQUESTA);
    inicializarInstrumentos(listadoInstrumentos,SIZE_INSTRUMENTO);
 //   inicializarMusicos(listadoMusico,SIZE_MUSICOS);

   char seguir='s';

   do
    {
        switch(menuUsuario())
        {
            case 1:
                    altaOrquesta(listadoOrquesta,ZISE_ORQUESTA);
                    system("pause");
                    break;
            case 2:
                    eliminarOrquesta(listadoOrquesta,ZISE_ORQUESTA,listadoMusico,SIZE_MUSICOS);
                    system("pause");
                    break;

                break;
            case 3:
                mostraOrquesta(listadoOrquesta,ZISE_ORQUESTA);
                system("pause");
                break;
            case 4:
                altaMusico(listadoMusico,SIZE_MUSICOS,listadoOrquesta,ZISE_ORQUESTA,listadoInstrumentos,SIZE_INSTRUMENTO);
                system("pause");
                break;

            case 5:
                modificarMusico(listadoMusico,SIZE_MUSICOS,listadoOrquesta,ZISE_ORQUESTA);
              //mostrarOquestaConMusicos(listadoOrquesta,ZISE_ORQUESTA,listadoMusico,SIZE_MUSICOS);
              system("pause");
              break;

            case 6:
                    eliminarMusico(listadoMusico,listadoMusico);
                    system("pause");
                    break;

            case 7:
                    mostraMusico(listadoMusico,SIZE_MUSICOS);
                    system("pause");
                    break;

            case 8:
                    altaInstrumento(listadoInstrumentos,SIZE_INSTRUMENTO);
                    system("pause");
                    break;
            case 9:
                    mostraInstrumento(listadoInstrumentos,SIZE_INSTRUMENTO);
                    system("pause");
                    break;
            case 10:
                    mostrarOrquestaConMasDeCinco(listadoMusico,SIZE_MUSICOS,listadoOrquesta,ZISE_ORQUESTA);
                    system("pause");
                    break;
            case 11:
                  mostrarOquestaConMusicos(listadoOrquesta,ZISE_ORQUESTA,listadoMusico,SIZE_MUSICOS);
                  system("pause");
                  break;
            case 12:
                   // mostrarMusicosMayoresConSusIstrumento(listadoInstrumentos,SIZE_INSTRUMENTO,listadoMusico,SIZE_MUSICOS,listadoOrquesta,ZISE_ORQUESTA);
                    system("pause");
                    break;
            case 13:
                    mostrarOrquestaPorNombre(listadoOrquesta,ZISE_ORQUESTA);
                    system("pause");
                    break;
            case 14:
                    orquestaCompleta(listadoOrquesta,ZISE_ORQUESTA,listadoInstrumentos,SIZE_INSTRUMENTO);
                    system("pause");
                    break;
            case 15:
                    mostrarMusicosPorId(listadoMusico,SIZE_MUSICOS,listadoOrquesta,ZISE_ORQUESTA);
                    system("pause");
                    break;



                break;


        }

    }while(seguir=='s');

    return 0;
}
