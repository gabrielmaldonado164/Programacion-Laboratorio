
int SacarNotaMaxima(int arrayPorParametro[],int cantidad)
 {
     int valorDeRetorno=arrayPorParametro[0];
     int i;
     for(i=1;i<cantidad;i++)
     {
         if(valorDeRetorno<arrayPorParametro[i])
         {
             valorDeRetorno=arrayPorParametro[i];
         }
     }
     return valorDeRetorno;
 }

void MostrarTodosLosElementos(int arrayPorParametro[],int cantidad){
     int i;
    for(i=0;i<cantidad;i++)
    {
        printf("\n valor del array %d ",arrayPorParametro[i]);
    }
}
void InicializarArray(int arrayPorParametro[],int cantidad){
    int i;
    for(i=0;i<cantidad;i++){
        arrayPorParametro[i]=-1;
    }
}
int SacarSumaAcumulada( int arrayPorParametro[],int cantidad){
    int suma=0;
    int i;
    for(i=0;i<cantidad;i++){
        if(arrayPorParametro[i]!=-1){
            suma=suma+arrayPorParametro[i];
        }

    }
    return suma;
}
int SacarCantidadDeAprobados (int arrayPorParametro[],int cantidad){
    int contador=0;
    int i;
    for(i=0;i<cantidad;i++)
    {
        if(arrayPorParametro[i]>5)
        {
            contador++;
        }
    }
    return contador;
}

float SacarPromedio(int arrayPorParametro[],int cantidad)
{
    /*
    float valorDeRetorno;

    int cantidadDeAlumnos=SacarCantidadDeNotas(arrayPorParametro,cantidad);
    int sumaDeNotas=SacarSumaAcumulada(arrayPorParametro,cantidad);

    valorDeRetorno=(float)sumaDeNotas/cantidadDeAlumnos;
    return valorDeRetorno;
    */
    return (float)SacarSumaAcumulada(arrayPorParametro,cantidad)/SacarCantidadDeNotas(arrayPorParametro,cantidad);
}


int SacarCantidadDeNotas(int arrayPorParametro[],int cantidad)
{
    int i;
    int contador=0;
    for(i=0;i<cantidad;i++)
    {
        if(arrayPorParametro[i]!=-1)
        {
            contador++;
        }
    }
    return contador;
}





