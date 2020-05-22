#include "alumno.h"


int menuUsuario(void)
{
    int opcion;

        system("cls");
        printf("Menu de opciones \n");
        printf("1.Alta Alumno \n");
        printf("2.Eliminar Orquesta \n");
        printf("3.Listar Orquesta \n");
        printf("4.Agregar Musico \n");
        printf("5.Modificar Musico \n");
        printf("6.Eliminar Musico \n");
        printf("7.Listar Musicos \n");
        printf("8.Agregar Instrumentos \n");
        printf("9.Listar Instrumentos \n");
        printf("10.Informes \n");

        printf("11.Salir \n");

        printf("\nElija una opcion:");
        fflush(stdin);
        scanf("%d",&opcion);


    return opcion;

}
int inicilizarAlumno(eAlumnos alumno[],int sizeAlumno)
{
    int i;

    for(i=0;i<sizeAlumno;i++)
        {
            alumno[i].isEmpty=LIBRE;
        }
}

int idAlumno(eAlumnos alumno[],int sizeAlumno)
{
    int id=1;
    int i;

    for(i=0; i<sizeAlumno;i++)
    {
        if(alumno[i].isEmpty==LIBRE)
        {
            alumno[i].legajo=id;
            break;
        }else
        {
            id++;
        }
    }
    return id;
}

int contadoAlumno(eAlumnos alumno[],int sizeAlumno)
{
    int i;
    int contador=0;

    for( i=0;i<sizeAlumno;i++)
        {
            if(alumno[i].isEmpty==OCUPADO)
                {
                    contador++;
                }

        }
    return contador;
}

int busarIdAlumno(eAlumnos alumno[],int sizeAlumno)
{
    int i;
    int id;
    int indice=-1;

    getInt(&id,"Ingrese Legajo del alumno","Error, no se encontro una legajo ese ID\n",1,500,10);

    for(i=0;i<sizeAlumno;i++)
        {
            if(alumno[i].isEmpty==OCUPADO && alumno[i].legajo==id)
                {
                    indice=i;
                    break;
                }
        }
    return indice;
}

int buscarLibre(eAlumnos alumno[],int sizeAlumno)
{
    int indice=-1;
    int i;
    int id=idAlumno(alumno,sizeAlumno);

    for(i=0;i<sizeAlumno;i++)
        {
            if(alumno[i].isEmpty==LIBRE && alumno[i].legajo==id)
                {
                    indice=i;
                    break;
                }
        }
    return indice;
}

int altaAlumno(eAlumnos alumno[],int sizeAlumno,eMaterias materias[],int sizeMaterias)
{
    int altaExitosa=-1;
    int indiceEncontrado;

    indiceEncontrado=buscarLibre(alumno,sizeAlumno);

    if(indiceEncontrado==-1)
        {
            printf("No hay mas espacio en el sistema\n");
        }
    else
        {
            getCharString(&alumno[indiceEncontrado].nombre,"Ingrese nombre del Alumno:\n","Error, no son letras\n",1,50,10);
            getCharString(&alumno[indiceEncontrado].apellido,"Ingres apellido del Alumno:\n","Error, no son letras validas",1,50,10);
            getInt(&alumno[indiceEncontrado].celular,"Ingrese celular","Error, no son numeros",1,500000000,10);

            getInt(&alumno[indiceEncontrado].fechaIngreso.dia,"Ingrese dia de ingreso","Error, no es un dia valido[1 al 31]",1,31,10);
            getInt(&alumno[indiceEncontrado].fechaIngreso.mes,"Ingrese mes de ingreso","Error, no es un mes valido[1-12]",1,12,10);
            getInt(&alumno[indiceEncontrado].fechaIngreso.anno,"Ingrese año de ingreso","Error no es un año valido\n",1950,2021,10);

            mostrarMaterias(materias,sizeMaterias);

            getInt(&alumno[indiceEncontrado].idMateria,"Ingrese ID de la materia","Error, no es un ID correcto",1,50,10);

            alumno[indiceEncontrado].isEmpty=OCUPADO;


            system("pause");
            system("cls");
            printf("Alumno cargador correctamente, el legajo es %d\n\n",alumno[indiceEncontrado].legajo);

            altaExitosa=1;

        }
        return altaExitosa;
}

