#include "clientes-mascota.h"


void listarClientesConMascotas(eClientes listaClientes[], int sizeCliente, eMascotas listaMascotas[], int sizeMascota)
{
    char flagTieneMascota;

    for(int i=0;i<sizeCliente;i++)
    {
        if(listaClientes[i].isEmpty==OCUPADO)
        {
            printf("Cliente: ");
            mostrarCliente(listaClientes,i);

            flagTieneMascota='n';

            for(int j=0;j<sizeMascota;j++)
            {
                if(listaMascotas[j].isEmpty==OCUPADO && (listaMascotas[j].idCliente == listaClientes[i].idCliente))
                {
                    printf("Mascota: ");
                    mostrarMascota(listaMascotas,j);

                    flagTieneMascota='s';
                }
            }
            if(flagTieneMascota=='n')
            {
                printf("No tiene mascotas\n");
            }
            printf("\n");
        }
    }
}


int altaMascota(eMascotas listaMascota[],int sizeMascota,eClientes listaCliente[],int sizeCliente)
{

}


