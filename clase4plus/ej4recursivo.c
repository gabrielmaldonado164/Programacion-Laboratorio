
int factorial(int numero);

int main()
{

    int numero;
    int resultado;

    numero=4; //aca lo estoy harcodeando

    resultado=factorial(numero);

    printf("el factorial es:%d",resultado);



    return 0;
}

int factorial(int numero)
{
    int resultado;

    if(numero==0)
    {
        resultado=1;
    }
    else
    {
        resultado = numero *(numero-1);//n*(n-1)!
    }

    return resultado;

}
