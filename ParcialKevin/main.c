#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"

#define SIZE_ALUMNO 1000
#define SIZE_MATERIAS 50

int main()
{
    eAlumnos listadoAlumno[SIZE_ALUMNO];
    eMaterias listadoMaterias[SIZE_MATERIAS];

    char seguir='s';
    inicilizarAlumno(listadoAlumno,SIZE_ALUMNO);
    harcodeoMaterias(listadoMaterias);

    do
        {
            switch(menuUsuario())
            {
                case 1:
                        altaAlumno(listadoAlumno,SIZE_ALUMNO,listadoMaterias,SIZE_MATERIAS);
                        system("pause");
                        break;

            }

        }while(seguir=='s');



    return 0;
}
