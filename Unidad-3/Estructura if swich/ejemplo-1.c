#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int venta , desc , total ;
    printf("Buenas, ingrese el monto de la venta \n");
    scanf("%i" , &venta);

    if (venta> 5600)
    {
      desc = (venta * 10 ) / 100 ;
      total = venta - desc ;
      printf("Tu monto es mayor a $5600 entonces le vamos hacer un descuento del 10 porciento , monto a pagar $%i \n" ,total);
    }
    else  
    {
        desc = (venta * 5) / 100  ;
        total = venta - desc ;
        printf("Tu mnonto es menor o igual a $5600, te vamos hacer un descuento del 5 porciento , monto a pagar $%i \n" , total) ;
    }
    system ("pause") ;

}