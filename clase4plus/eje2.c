
int factorial(int X);

int main()
{
    int numero;
    int factoreo;

    printf("Ingrese numero");
    scanf("%d",&numero);


    factoreo=factorial(numero);

    printf("El factorial es: %d",factoreo);

    return 0;
}

int factorial(int x)
{
    int factoreo;
    int contador;

    contador=1;
    factoreo=1;

    for(contador=1;contador<=x;contador++){

        factoreo=factoreo*contador;
    }

    return factoreo;
}
