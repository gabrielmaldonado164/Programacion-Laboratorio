#include "clientes.h"


 void harcodeoClientes(eClientes clientes[])
{
    eClientes clients[]=
    {
        {1,"Gabriela","Bautista","Barracas","1560292029",30,'m',1},
        {2,"Kevin","Ahumada","La Boca","1589203192",10,'v',1},
        {3,"Ulisea","Tomas","San telmo","1563209726",60,'v',1},
        {4,"Maria","Gonzales","Avellaneda","1530862715",15,'m',1},
        {5,"Pepe","Tolede","Belgrano","1598062853",55,'v',1}
    };

    for(int i=0; i<5; i++)
    {
        clientes[i] = clients[i];

    }
}

void inicializadorCliente(eClientes clientes[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        clientes[i].isEmpty=LIBRE;
    }
}

void mostrarCliente(eClientes listarClientes[], int i)
{
    printf("%4d | %-25s %-25s |telefono: %-10s - |edad: %4d - |sexo: %c \n",listarClientes[i].idCliente,listarClientes[i].nombre,listarClientes[i].localidad,listarClientes[i].telefono,listarClientes[i].edad,listarClientes[i].sexo, listarClientes[i].isEmpty);
}


void listarClientes(eClientes listaClientes[],int sizeClientes)
{
    for(int i=0;i<sizeClientes;i++)
    {
        if(listaClientes[i].isEmpty==OCUPADO)
        {
            mostrarCliente(listaClientes,i);
        }
    }
}
