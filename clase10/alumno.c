
#include "Alumno.h"
eFecha pedirFecha(void)
{
    eFecha miFecha;

    printf("Ingrese dia: ");
    scanf("%d", &miFecha.dia);

    printf("Ingrese mes: ");
    scanf("%d", &miFecha.mes);

    printf("Ingrese anio: ");
    scanf("%d", &miFecha.anio);

    return miFecha;

}

void inicializarAlumnos(eAlumno listaAlumnos[], int tam)
{
     int i;
  for(i=0;i<tam;i++)
  {
      listaAlumnos[i].estado = LIBRE;
  }
}

void eliminarAlumno(eAlumno listado[], int tam)
{
    int legajo;
    int i;

    printf("Ingrese el legajo: ");
    scanf("%d", &legajo);

    for(i=0;i<tam; i++)
    {
        if(listado[i].estado == OCUPADO && legajo == listado[i].legajo)
        {
            listado[i].estado = LIBRE;
            break;
        }
    }

}

void modificarAlumno(eAlumno listado[], int tam)
{
     int legajo;
    int i;

    printf("Ingrese el legajo: ");
    scanf("%d", &legajo);

    for(i=0;i<tam; i++)
    {
        if(listado[i].estado == OCUPADO && legajo == listado[i].legajo)
        {
              printf("Ingrese nombre: ");
            fflush(stdin);
            fgets(listado[i].nombre,25,stdin);
            listado[i].nombre[strlen( listado[i].nombre)-1]='\0';
            break;
        }
    }
}

eAlumno cargarUnAlumno(void)
{
    eAlumno miAlumno;
    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);
    printf("Ingrese nota 1: ");
    scanf("%d", &miAlumno.nota1);
    printf("Ingrese nota 2: ");
    scanf("%d", &miAlumno.nota2);
    printf("Ingrese nombre: ");
    fflush(stdin);
    fgets(miAlumno.nombre,25,stdin);
    miAlumno.nombre[strlen( miAlumno.nombre)-1]='\0';
    printf("Ingrese email: ");
    __fpurge(stdin);
    fgets(miAlumno.email,20,stdin);
    miAlumno.email[strlen( miAlumno.email)-1]='\0';


    miAlumno.fechaNacimiento = pedirFecha();


    miAlumno.promedio = (float)(miAlumno.nota1+miAlumno.nota2)/2;

    //Mostrar los cursos disponibles (Tiene que ser dinamico)
    printf("Ingrese el curso: ");
    scanf("%d", &miAlumno.idCurso);


    miAlumno.estado = OCUPADO;


    return miAlumno;
}

void mostrarUnAlumno(eAlumno miAlumno)
{
    printf("%8d %8d %8d %10f %20s %20s %4d [%d/%d/%d]\n", miAlumno.legajo,
                                                           miAlumno.nota1,
                                                           miAlumno.nota2,
                                                           miAlumno.promedio,
                                                           miAlumno.nombre,
                                                           miAlumno.email,
                                                           miAlumno.idCurso,
                                                           miAlumno.fechaNacimiento.dia,
                                                           miAlumno.fechaNacimiento.mes,
                                                           miAlumno.fechaNacimiento.anio);
    }

int compararAlumnosPorLegajo(eAlumno unAlumno, eAlumno otroAlumno)
{
    return unAlumno.legajo == otroAlumno.legajo;

}
int buscarLibre(eAlumno* listado, int tam)
{
    int i;
    int index = -1;
    for(i=0; i<tam; i++)
    {
        if(listado[i].estado == LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}
//convertir la funcion a un retorno entero
void cargarListadoDeAlumnos(eAlumno listado[], int tam)
{
    int encontro;
    encontro = buscarLibre(listado,tam);
    if(encontro!=-1)
    {
       listado[encontro] = cargarUnAlumno();
    }
    else
    {
        printf("No hay espacio");
    }

}
void mostrarListadoDeAlumnos(eAlumno listado[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
       if(listado[i].estado == OCUPADO)
        {
            mostrarUnAlumno(listado[i]);
        }

    }

}

void mostrarListadoDeAlumnosPromocionados(eAlumno listado[], int tam, int minAprobado)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(listado[i].promedio >= minAprobado)
        {
            mostrarUnAlumno(listado[i]);
        }

    }
}

void ordenarListadoDeAlumnosPorNombre(eAlumno listado[], int tam)
{
    int i;
    int j;
    eAlumno auxAlumno;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(listado[i].nombre,listado[j].nombre)>0)
            {
               auxAlumno  =  listado[i];
               listado[i] = listado[j];
               listado[j] = auxAlumno;
            }

        }
    }

}
void ordenarListadoDeAlumnosPorNombreYporPromedio(eAlumno listado[], int tam)
{
     int i;
    int j;
    eAlumno auxAlumno;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(listado[i].nombre,listado[j].nombre)>0)
            {
               auxAlumno  =  listado[i];
               listado[i] = listado[j];
               listado[j] = auxAlumno;
            }
            else
            {
               if(strcmp(listado[i].nombre,listado[j].nombre)==0)
               {
                   if(listado[i].promedio>listado[j].promedio)
                   {
                          auxAlumno  =  listado[i];
                          listado[i] = listado[j];
                          listado[j] = auxAlumno;
                   }
               }
            }

        }
    }
}
float calcularMaximoPromedio(eAlumno listado[], int tam)
{
     float maxPromedio ;
    int i;

    for(i=0; i<tam; i++)
    {
        if(listado[i].promedio>maxPromedio || i==0)
        {
            maxPromedio = listado[i].promedio;
        }
    }
    return maxPromedio;
}
void mostrarListadoDeAlumnosConMaximo(eAlumno listado[], int tam, int maximo)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(listado[i].promedio == maximo)
        {
                mostrarUnAlumno(listado[i]);
        }
    }
}
void mostrarAlumnosConMaximoPromedio(eAlumno listado[], int tam)
{
   float maximoPromedio;
   int i;

   maximoPromedio = calcularMaximoPromedio(listado,tam);

   mostrarListadoDeAlumnosConMaximo(listado,tam, maximoPromedio);

}

/********************************************************/

void mostrarAlumnosConSuCurso(eAlumno listaDeAlumnos[], int sizeAlumnos, eCurso listadoDeCursos[], int sizeCursos)
{
    int i;//Alumnos
    int j;//Cursos

    for(i=0; i<sizeAlumnos; i++)
    {
        for(j=0; j<sizeCursos; j++)
        {
            if(listaDeAlumnos[i].estado == OCUPADO && listaDeAlumnos[i].idCurso /*FK*/ == listadoDeCursos[j].idCurso /*PK*/)
            {
                 printf("%4d %15s %15s\n", listaDeAlumnos[i].legajo, listaDeAlumnos[i].nombre, listadoDeCursos[j].descripcion);
                break;//aca va un break pq cuando encuentre el alumno con el curdo deja de buscar


            }

        }
    }

}

void mostrarCursoConAlumnos(eCurso listadoDeCursos[], int sizeCursos, eAlumno listaDeAlumnos[], int sizeAlumnos)
{
    int i;//Cursos
    int j;//Alumnos

    for(i=0; i<sizeCursos; i++)
    {
        for(j=0; j<sizeAlumnos; j++)
        {


            if(listaDeAlumnos[j].estado == OCUPADO && listaDeAlumnos[j].idCurso /*FK*/ == listadoDeCursos[i].idCurso /*PK*/)
            {
                 printf("%10s %15d %15s\n",listadoDeCursos[i].descripcion, listaDeAlumnos[j].legajo, listaDeAlumnos[j].nombre);
                // break; no va pq es relacion de uno a muchos, asi que tiene que mostrar todos

            }

        }
    }
}

int buscarIdCurso(eCurso curso,int sizeCursos)
{
    int indice=-1;
    int nombreCurso[20];
    int i;

    printf("Ingrese curso");
    fflush(stdin);
    fgets(nombreCurso,20,stdin);

    for(i=0;i<sizeCursos;i++)
    {
        if(strcmp(nombreCurso,curso[i].descripcion)==0)
        {
              indice=i,

        }
    }

}


return indice;
//ej3

void cursoIndividual(eCurso listadoDeCursos[], int sizeCursos, eAlumno listaDeAlumnos[],int sizeAlumnos)
{
    int indice=-1;
    int nombreCurso[20];
    int i;
    int j;

    printf("Ingrese curso");
    fflush(stdin);
    scanf("%s",&nombreCurso);

    if(strcmp(nombreCurso,listadoDeCursos[i].descripcion)==0)
    {
         for(i=0; i<sizeCursos; i++)
    {
        for(j=0; j<sizeAlumnos; j++)
        {


            if(listaDeAlumnos[j].estado == OCUPADO && listaDeAlumnos[j].idCurso /*FK*/ == listadoDeCursos[i].idCurso /*PK*/)
            {
                 printf("%10s %15d %15s\n",listadoDeCursos[i].descripcion, listaDeAlumnos[j].legajo, listaDeAlumnos[j].nombre);
                // break; no va pq es relacion de uno a muchos, asi que tiene que mostrar todos

            }

        }
    }
    }
}

//ej4
int contadorJava(eCurso listadoDeCursos[], int sizeCursos, eAlumno listaDeAlumnos[],int sizeAlumnos)
{
    int contador=0;
    int i;
    int j;
    int curso[20]={"java"};

    if(strcmp(curso,listadoDeCursos[i].descripcion)==0)
    {
         for(i=0; i<sizeCursos; i++)
    {
        for(j=0; j<sizeAlumnos; j++)
        {


            if(listaDeAlumnos[j].estado == OCUPADO && listaDeAlumnos[j].idCurso /*FK*/ == listadoDeCursos[i].idCurso /*PK*/)
            {
                contador++;
            }

        }
    }
    }
    return contador;
}

//ej5

int sumatoriaDeHoras(eCurso listadoDeCursos[], int sizeCursos, eAlumno listaDeAlumnos[],int sizeAlumnos)
{
    int suma;
    int acumulador=0;
    int i;
    int j;
    int curso[20]={"java"};

        if(strcmp(curso,listadoDeCursos[i].descripcion)==0)
    {
         for(i=0; i<sizeCursos; i++)
    {
        for(j=0; j<sizeAlumnos; j++)
        {


            if(listaDeAlumnos[j].estado == OCUPADO && listaDeAlumnos[j].idCurso /*FK*/ == listadoDeCursos[i].idCurso /*PK*/)
            {
                suma=suma + listadoDeCursos[j].duracion;

            }

        }
    }
    }
    return suma;
}

//ej6
float promedioNotaDos(eCurso listadoDeCursos[], int sizeCursos, eAlumno listaDeAlumnos[],int sizeAlumnos)
{
    int suma;
    int acumulador=0;
    int i;
    int j;
    int curso[20]={"java"};

        if(strcmp(curso,listadoDeCursos[i].descripcion)==0)
    {
         for(i=0; i<sizeCursos; i++)
    {
        for(j=0; j<sizeAlumnos; j++)
        {


            if(listaDeAlumnos[j].estado == OCUPADO && listaDeAlumnos[j].idCurso /*FK*/ == listadoDeCursos[i].idCurso /*PK*/)
            {
                suma=suma + listadoDeCursos[j].duracion;

            }

        }
    }
    }
    return suma;
}


