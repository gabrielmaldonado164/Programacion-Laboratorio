#include "alumno.h"
#include "input.h"
#include "string.h"
#include "stdio.h"

#define tamanio 2



int menuUsuario(void)
{
    int opcion;

        system("cls");
        printf("Menu de opciones \n");
        printf("1.Ingresar Alumno \n");
        printf("2.Modificar Alumno \n");
        printf("3.Eliminar Alumno \n");
        printf("4.Mostrar Alumno \n");
        printf("5.Ordenar Alumnos por Promedios \n");
        printf("6.Salir \n");

        printf("\nElija una opcion:");
        fflush(stdin);
        scanf("%d",&opcion);


    return opcion;

}

int menuModificacion(void)
{
    int opcion;

            system("cls");
            printf("Menu de opciones \n");
            printf("1.Modificar nombre \n");
            printf("2.Modificar legajo \n");
            printf("3.Modificar primera nota\n");
            printf("4.Modificar segunda nota\n");
            printf("5.Salir\n");

            printf("\nElija una opcion:");
            fflush(stdin);
            scanf("%d",&opcion);

    return opcion;

}

void inicializarAlumno(eAlumno alumno[], int cantidad)
{
    int i;

    for(i=0;i<cantidad;i++)
        {
            alumno[i].isEmpty=0;
        }

}

int buscarLibre(eAlumno alumno[],int cantidad)
{
    int i;
    int indice=-1;

    for(i=0;i<cantidad;i++)
        {
            if(alumno[i].isEmpty==0 || alumno[i].isEmpty==-1)
                {
                    indice=i;
                    break;
                }
        }

    return indice;

}

int buscarLegajo(eAlumno alumno[],int cantidad)//busco el legajo para encontra al empleado
{
    int i;
    int legajo;
    int indice=-1;

    getInt(&legajo,"Ingrese legajo:","Error, numero de legajo incorrecto",100,1000,4);

    for(i=0;i<cantidad;i++)
    {
        if(alumno[i].isEmpty==1 && alumno[i].legajo==legajo)//vero si hay estado ocupado y veo si el legajo es igual
            {
                indice=i;
                break;
            }

    }

    return indice;

}


int cargarAlumno(eAlumno alumno[],int cantidad)
{
    int indiceEncontrado;//genero un indice para buscar si hay espacio libre
    int altaExitosa=-1;

    indiceEncontrado = buscarLibre(alumno,cantidad);//buscar se encaga de encontrar lugar



    if(indiceEncontrado==-1)
        {
            printf("No hay mas espacio en el sistema");
        }
    else
        {

            getCharString(&alumno[indiceEncontrado].nombre,"Ingrese Nombre: ","Error, debe ser un nombre:",2,50);
            getInt(&alumno[indiceEncontrado].legajo,"Ingrese legajo: ","Error,el indice debe de comenzar en 100",100,1000,3);//EL INDICE ENCONTRADO, es el indice que busca en la funcion de buscar libre
            getInt(&alumno[indiceEncontrado].nota1,"Ingrese primera nota:","Error, la nota debe ser de 1 a 10",1,10,4);
            getInt(&alumno[indiceEncontrado].nota2,"Ingrese segunda nota:","Error, la nota debe ser de 1 a 10",1,10,4);

            alumno[indiceEncontrado].promedio=(float)(alumno[indiceEncontrado].nota1+alumno[indiceEncontrado].nota2)/2;

                alumno[indiceEncontrado].isEmpty=1;

                system("pause");
                system("cls");
                printf("Alumno Cargado correctamente\n\n");


                altaExitosa=1;



        }

    return altaExitosa;

    }

void mostrarAlumnos(eAlumno alumno[],int cantidad)
{
    for(int i=0;i<cantidad;i++)
        {
            if(alumno[i].isEmpty==1)
                {
                    printf("%10s   %10d   %10d    %10d   %10.2f \n",alumno[i].nombre,alumno[i].legajo,alumno[i].nota1,alumno[i].nota2,alumno[i].promedio);
                }
        }
}


void modificarAlumno(eAlumno alumno[], int cantidad)
{
    int empleadosCargados;
    int indice=-1;
    char respuestaModificacion;
    char confirmaSalida;
    char continuar;
    empleadosCargados=contadorDeEmpleados(alumno,tamanio);//tengo que ver si hay empledados cargados pq si no ni entro al if

    if(empleadosCargados>=1)
        {
            indice=buscarLegajo(alumno,tamanio);

            if(alumno[indice].isEmpty==1 )
                {
                    printf("El siguiente alumno sera modificado: ");
                    mostrarAlumnos(alumno,tamanio);

                    getCharOption(&respuestaModificacion,"Desea modificar los datos de este alumno S/N","ERROR, letras invalidas",'S','N',4);

                    if(respuestaModificacion=='S')
                        {


                            do{
                                switch(menuModificacion())
                                {
                                    case 1:
                                            getCharString(&alumno[indice].nombre,"Ingrese el nombre","Error",2,50);
                                            break;
                                    case 2:
                                            getInt(&alumno[indice].legajo,"Ingrese legajo nota","Error",100,1000,4);
                                            break;
                                    case 3:
                                            getInt(&alumno[indice].nota1,"Ingrese primera nota","Error",1,10,4);
                                            break;

                                    case 4:
                                            getInt(&alumno[indice].nota2,"Ingrese segunda nota","Error",1,10,4);
                                            break;
                                    case 5:

                                        getCharOption(&confirmaSalida,"Desea salir S/N","Error, letras invalidas",'s','n',4);

                                        if(confirmaSalida=='S')
                                            {
                                                continuar='n';
                                            }
                                        break;
                                    default :
                                            printf("Opcion invalida\n\n");
                                            break;
                                }

                                alumno[indice].promedio=(float)(alumno[indice].nota1+alumno[indice].nota2)/2;


                                fflush(stdin);

                            }while(continuar=='s');

                            }else
                            {
                                printf("Volviendo al menu principal");
                            }

                }else
                {
                    printf("\nNo se ha encontrado un empleado en el sistema con el legajo ingresado.\n\n");
                }
        }else
        {
            printf("No hay alumnos cargados");
        }


}

void bajaAlumno(eAlumno alumno[], int cantidad)
{
    int i;
    int indice=-1;
    int alumnosCargados;
    int bajaExitosa=-1;
    char seguir;

    alumnosCargados=contadorDeEmpleados(alumno,tamanio);

    if(alumnosCargados>=1)
        {

            indice=buscarLegajo(alumno,tamanio);

            if(alumno[i].isEmpty==1)
                {
                    printf("El siguiente alumno se eliminara:\n");
                    mostrarAlumnos(alumno,tamanio);

                    getCharOption(&seguir,"Desea continuar S/N","Error",'s','n',4);

                    if(seguir=='s')
                        {
                            alumno[i].isEmpty=-1;
                            printf("Se elimino correctamente");
                            bajaExitosa=1;

                        }else
                        {
                            printf("Volviendo al menu");
                        }

                }else
                {
                    printf("No hay alumnos con ese legajo");
                }


        }else
        {
            printf("No hay alumnos cargados");
        }

    return bajaExitosa;


}

void ordenarAlumno(eAlumno alumno[],int cantidad)
{
    eAlumno alumnoAux;
    int i;
    int j;

    for(i=0;i<cantidad-1;i++)
        {
            for(j=i+1;j<cantidad;j++)
                {
                    if(strcmp(alumno[i].nombre,alumno[j].nombre)>0)
                        {

                        alumno[i]=alumnoAux;
                        alumno[i]=alumno[j];
                        alumno[j]=alumnoAux;
                        }

                else
                    {
                        if(strcmp(alumno[i].nombre,alumno[j].nombre)==0)
                            {
                                if(alumno[i].legajo>alumno[j].legajo)
                                    {
                                        alumno[i]=alumnoAux;
                                        alumno[i]=alumno[j];
                                        alumno[j]=alumnoAux;
                                    }
                            }
                    }
                }



        }

}

int contadorDeEmpleados(eAlumno alumno[],int cantidad)// es para saber si hay alumnos cargados, ya que si no hay es alpedo mostrar
{
    int i;
    int contador=0;

    for(int i=0;i<cantidad;i++)
        {
            if(alumno[i].isEmpty==1)
                {
                    contador++;
                }

        }
    return contador;
}

