#include <stdio.h>
#include <stdlib.h>
#include "clientes-mascota.h"

#define SIZE_CLIENTES 10
#define SIZE_MASCOTAS 20

int main()
{
   eClientes listaClientes[SIZE_CLIENTES];
   eMascotas listaMascota[SIZE_MASCOTAS];

    char seguir='s';

   inicializadorCliente(listaClientes,SIZE_CLIENTES);
   inicializadorMascota(listaMascota,SIZE_MASCOTAS);
   harcodeoMascota(listaMascota);
   harcodeoClientes(listaClientes);


   do{
        switch(menuUsuario())
        {
        case 1:
            break;
        }
   }while(seguir=='s');

   //listarClientes(listaClientes,SIZE_CLIENTES);
  mostrarTodaLasMascotas(listaMascota,SIZE_MASCOTAS);

 // listarClientesConMascotas(listaClientes,SIZE_CLIENTES,listaMascota,SIZE_MASCOTAS);


    return 0;
}
