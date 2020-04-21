void IncializarArray(int array[], int cantidad)
{
    int i=0;
    for(i=0;i<cantidad;i++)
        {
            array[i]=-1;
        }
}

/*void IncializarArray(int array[], int cantidad, int valor) <---- le doy valor aca para que harcodee la inicializacion y sea mas general
{
    int i=0;
    for(i=0;i<cantidad;i++)
        {
            array[i]=valor;
        }
}*/

void MostrarElementosArray(int array[],int cantidad)
{
    int i=0;

    for(i=0;i<cantidad;i++)
        {
            printf("indicel %d valor %d \n",i,array[i]);
        }

}

void MostrarElementosVacioArray(int array[],int cantidad, int valor)
{
    int i=0;

    for(i=0;i<cantidad;i++)
    {
        if(array[i]==valor)
        {
            printf("valor del array: %d\n",array[i]);
            printf("ubicacion del array: %i\n",i +1);
        }
    }

}

void MostarElementosCargadosArray(int array[],int cantidad, int valor)
{
    int i=0;

    for(i=0;i<cantidad;i++)
    {
        if(array[i]!=valor)
        {
            printf("Los valores de los elementos cargados son: %d\n",array[i]);
        }
    }

}


int SacarCantidadDeNumeros(int array[],int cantidad)
{
    int i;
    int contador=0;
    for(i=0;i<cantidad;i++)
    {
        if(array[i]!=-1)
        {
            contador++;
        }
    }
    return contador;
}

int SacarSumaAcumulada(int array[], int cantidad)
{
    int =0;
    int sumaAcumlada=0;

    for(i=0;i<cantidad;i++)
    {
        if(array[i]!=-1)
        {
            sumaAcumlada=sumaAcumlada+array[i];
        }
    }
}

int SacarValorMaximo(int array[],int cantidad)
 {
     int valorMaximo=array[0];
     int i;
     for(i=1;i<cantidad;i++)
     {
         if(valorMaximo<array[i])
         {
             valorMaximo=array[i];
         }
     }
     return valorDeRetorno;
 }

 int sacaValorMinimo(int array[], int cantidad)
 {
     int i=0;
     int valorMinimo = array[0];

     if(array[0]!=-1)
        {
            valorMinimo=array[0];
        }

     for(i=0;i<cantidad;i++)
        {
            if(valorMinimo>array[i] && array[i]!=-1)
                {
                    valorMinimo=array[i];
                }
        }
    return valorMinimo;
 }


float SacarPromedio(int array[],int cantidad)
{
    /*
    float valorDeRetorno;
    int cantidadDeAlumnos=SacarCantidadDeNotas(arrayPorParametro,cantidad);
    int sumaDeNotas=SacarSumaAcumulada(arrayPorParametro,cantidad);
    valorDeRetorno=(float)sumaDeNotas/cantidadDeAlumnos;
    return valorDeRetorno;
    */
    return (float)SacarSumaAcumulada(array,cantidad)/SacarCantidadDeNumeros(array,cantidad);
}


int SacarNumerosPares(int array[], int cantidad)
{
    int =0;
    int contadorPares=0;

    for(i=0;i<cantidad;i++)
        {
            if(array[i]%2==0)
                {
                    contadorPares++;
                }
        }
}


int menuUsuario(char texto[],char error[], int min, int max)
{
    int=0;
    int valor;

        printf("%s",texto);
        scanf("%d",&valor);

        while(valor<min || valor>max)
    {
        printf("%s",error);
        scanf("%f",&valor);
    }

    return valor;
}


int BuscarLibre(array[],int cantidad, int valor)
{
    int=0;
    int indice=-1;//esto lo inicializo en -1 para saber si tiene algun indice vacio para cargar nota

    for(i=0;i<cantidad;i++)
        {
            if(array[i]==valor)
                {
                    indice=i; //el indice cambia aca pq entra en el if ya que encuentra un espacio vacion en (-1 en este caso)
                    break; //rompo la estructura repetitiva ya que la funcion encontro lugar
                }
        }

    return indice; //me devuelve el indice que encontro vacio, si no encuentra nada me devuelve -1(false), estos ejemplos son pq esta inicializao todo en -1
}

void CargarNumero(int array[], int cantidad)
{
    int encontro;

    encontro = BuscarLibre(array,cantidad,-1);// llamo a la funcion para saber si hay espacio libre

        if(encontro!=-1)
            {
                printf("ingrese un numero: ");
                scanf("%d",&array[encontro]);
            }
        else
            {
                printf("No hay lugar libre, espacio agotado");
            }


}

void OrdenNumerosAscendente(int array[],int cantidad)
{
    int i;
    int j;
    int auxiliar;

    for(i=0;i<cantidad-1,i++)// PIBOTE - esto se llama for anidado, siempre es de adento hacia afuera, cantidad menos unos es pq el pibote no llega al final de la cantidad nunca
        {
            for(j=i+1,j<cantidad;j++)//  COMPARACION - lo que compara siempre es +1 del pibote
                {
                    if(array[i]>array[j])
                        {
                            auxiliar=array[i];
                            array[i]=array[j];
                            array[j]=auxiliar;
                        }
                }
        }
}

void OrdenNumerosDescendente(int array[],int cantidad)
{
    int i;
    int j;
    int auxiliar;

    for(i=0;i<cantidad-1,i++)// PIBOTE - esto se llama for anidado, siempre es de adento hacia afuera, cantidad menos unos es pq el pibote no llega al final de la cantidad nunca
        {
            for(j=i+1,j<cantidad;j++)//  COMPARACION - lo que compara siempre es +1 del pibote
                {
                    if(array[i]<array[j])
                        {
                            auxiliar=array[i];
                            array[i]=array[j];
                            array[j]=auxiliar;
                        }
                }
        }
}
