#include <stdio.h>
#define T 10
#define ORD 1
#define INV -1
#define INICIO -1

void inicializarArray (int[], int, int);

void cargarNumeros (int[], int tam);
float calcularPromedio (int[], int tam);
int calcularMaximo (int[], int tam);
void mostrarNumeros (int pepe[], int tam, int ord);
int menuUsuario (char texto[]);
int buscarLibre (int[], int, int);
void ordenarNumerosAsc (int[], int);



int
main ()
{
  int numeros[T] = { 5, -1, 15, -1, 7, 8, -1, 2, -1, 7 };

  int maximo;
  float promedio;

  int opcion;

  // inicializarArray(numeros, T, INICIO);


  do
    {
      opcion =
	menuUsuario
	("1. Ingreso de numeros\n2.Promedio\n3.Maximo\n4.Mostrar ORD\n5.Mostrar INV\n6. Ordenar ASC\n10.Salir\nElija una opcion: ");

      switch (opcion)
	{

	case 1:
	  cargarNumeros (numeros, T);
	  break;
	case 2:
	  promedio = calcularPromedio (numeros, T);
	  printf ("\nEl promedio es: %f", promedio);
	  break;
	case 3:
	  maximo = calcularMaximo (numeros, T);
	  printf ("\nEl maximo es: %d\n", maximo);
	  break;
	case 4:
	  mostrarNumeros (numeros, T, ORD);
	  break;
	case 5:
	  mostrarNumeros (numeros, T, INV);
	  break;
	case 6:
	  ordenarNumerosAsc (numeros, T);
	  break;

	}


    }
  while (opcion != 10);

  return 0;
}



void
inicializarArray (int vector[], int tam, int valor)
{
  int i;

  for (i = 0; i < tam; i++)
    {
      vector[i] = valor;
    }
}


int
buscarLibre (int vector[], int tam, int valor)
{
  int i;
  int indice = -1;


  for (i = 0; i < tam; i++)
    {

      if (vector[i] == valor)
	{
	  indice = i;
	  break;
	}


    }

  return indice;
}

void
cargarNumeros (int vector[], int tam)
{
  int i;
  int encontro;

  encontro = buscarLibre (vector, tam, -1);



  if (encontro != -1)		//si encontro lugar
    {

      printf ("Ingrese un numero: ");
      scanf ("%d", &vector[encontro]);
    }
  else
    {
      printf ("\nEspacio agotado");
    }
}

float
calcularPromedio (int vector[], int tam)
{
  int i;
  int acumuladorNumeros = 0;
  float promedio;

  for (i = 0; i < tam; i++)
    {
      if (vector[i] != -1)
	acumuladorNumeros = acumuladorNumeros + vector[i];
    }

  promedio = (float) acumuladorNumeros / i;

  return promedio;

}

int
calcularMaximo (int vector[], int tam)
{
  int i;
  int maximo;


  for (i = 0; i < tam; i++)
    {
      if (vector[i] > maximo || i == 0)
	{
	  maximo = vector[i];
	}
    }


  return maximo;

}

void
mostrarNumeros (int vector[], int tam, int ord)
{
  int i;

  switch (ord)
    {
    case 1:
      for (i = 0; i < tam; i++)
	{
	  if (vector[i] != -1)
	    {
	      printf ("%d\n", vector[i]);
	    }


	}

      break;
    case -1:
      for (i = tam - 1; i >= 0; i--)
	{

	  printf ("%d\n", vector[i]);
	}

      break;


    }


}

int
menuUsuario (char texto[])
{
  int opcion;
  printf ("%s", texto);
  scanf ("%d", &opcion);

  return opcion;
}

void
ordenarNumerosAsc (int vector[], int tam)
{
  int i;
  int j;
  int auxiliar;
  int cont = 0;
  for (i = 0; i < tam - 1; i++)	//rojo
    {
      if (vector[i] == -1)
    	{
    	  continue;
    	}
      for (j = i + 1; j < tam; j++)	//verde
	{

	  if (vector[j] == -1)
	    {
	      continue;
	    }
	  if (vector[i] < vector[j])	// criterio de ordenamiento
	    {

	      //swap
	      auxiliar = vector[i];
	      vector[i] = vector[j];
	      vector[j] = auxiliar;
	      cont++;

	    }
	}
    }

  printf ("\n\nSe ordeno: %d\n\n", cont);





}


