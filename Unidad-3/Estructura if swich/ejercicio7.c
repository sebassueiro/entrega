#include <stdio.h> 
#include <stdlib.h> 

/*Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y
un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar
dicha situación.*/

void main()
{
    int monto, desc, precioFinal;
    printf("Buenas, ingrese el monto de la venta \n");
    scanf("%i", &monto);

    if (monto < 0)
    {
        printf("Su monto es menor que 0 no se puede realizar ninguna operacion");
    }
    else if (monto >= 100000)
    {
        desc = (monto * 15) / 100;
        precioFinal = monto - desc;
        printf("Tu monto es mayor a 100000, le vamos hacer un descuento del 15 prociento, el precio te queda $%i \n", precioFinal);
    }
    else if (monto<100000)
    {
        desc = (monto * 10 ) / 100 ;
        precioFinal = monto - desc ;
        printf("Tu monto es menor a 100000, le vamos hacer un descuento del 10 porciento, el precio te queda $%i \n" , precioFinal);
    }

    system("pause");
}