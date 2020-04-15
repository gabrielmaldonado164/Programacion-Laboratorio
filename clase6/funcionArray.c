  int SacarCantidadDePares(int arrayPorParametro[],int cantidad){

      int i;
      int valorDeRetorno=0;
      for(i=0;i<cantidad;i++)
      {
          if(arrayPorParametro[i]%2==0)
          {
              valorDeRetorno++;
          }
      }
      return valorDeRetorno;
  }





int SacarNotaMinima(int arrayPorParametro[],int cantidad){
    int valorDeRetorno;
    if(arrayPorParametro[0]!=-1)
    {
         valorDeRetorno=arrayPorParametro[0];
    }
    int i;
    for(i=0;i<cantidad;i++)
    {
        if(valorDeRetorno>arrayPorParametro[i] && arrayPorParametro[i]!=-1)
        {
            valorDeRetorno=arrayPorParametro[i];
        }
    }
    return valorDeRetorno;

}

