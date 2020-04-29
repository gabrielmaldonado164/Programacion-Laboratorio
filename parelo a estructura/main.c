
#include <stdlib.h>
#include "alumno.h"
#define tamanio 2
int main()

{

    char seguir='s';
    eAlumno alumno[tamanio];



    inicializarAlumno(alumno,tamanio);




    do{

        switch(menuUsuario())
        {
            case 1:
                    system("cls");
                   cargarAlumno(alumno,tamanio);
                   system("pause");

                  break;
            case 2:
                    modificarAlumno(alumno,tamanio);
                    break;
            case 3:
                break;
            case 4:
                    mostrarAlumnos(alumno,tamanio);
                    system("pause");
                    break;
            default:
                break;

        }




    }while(seguir=='s');
    return 0;
}
