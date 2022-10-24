#include <stdio.h>
#include <stdlib.h>


void main () 
{
    int dni, medioPago, tarjeta, cantCoutas, monto, interes , total, numVentas,i, precioVenta  ;
    monto=0;

    printf("Buenas, ingrese el numero de ventas que quieras ingresar: \n");
    scanf("%i", &numVentas);

    for ( i = 1; i <= numVentas; i++)
    {
        printf("Escribe la venta numero %i: \n", i);
        scanf("%i", &precioVenta);

        monto = monto + precioVenta;
    }
    
    printf("Buenas, ingresenos su D.N.I.: \n");
    scanf("%i", &dni);

    if (dni<1000000 || dni>99999999)
    {
        printf("Ingresaste mal tu D.N.I. \n");
        scanf("%i", &dni);
    }

    printf("Ingrese el medio de pago que quieras utilizar, 1-Efectivo, 2-Tarjeta de credito. \n");
    scanf("%i", &medioPago);

    if (medioPago==1)
    {
        printf("Ustedes eligio pagar en efectivo, deberes abonar $%i \n" , monto);
    }

    if (medioPago==2)
    {
        printf("Ingresenos cual es su tarjeta 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal. \n");
        scanf("%i", &tarjeta);

        printf("¿En cuantas cuotas queres hacer el pago? \n");
        printf("Podes hacerlo en 1 couta (ingrese 1), 3 coutas(ingrese 2), 6 coutas (ingrese 3) o 12 coutas (ingrese 4). \n");
        scanf("%i", &cantCoutas);
    }
    
    switch (cantCoutas)
    {
    case 1:
        printf("Usted va a abonar con tarjeta y en 1 cuota, deberas pagar %i \n", monto);
        break;
    
    case 2 :
        interes= (monto*4) /100 ;
		total=interes + monto;
		printf( "Usted va a abonar con tarjeta y en 3 cuota, con un interes del 4, deberas pagar $%i \n", total);
        break;

    case 3:
        interes= (monto*8) /100 ;
		total=interes + monto;
		printf("Usted va a abonar con tarjeta y en 6 cuota, con un interes del 8, deberas pagar $%i", total);
        break;

    case 4:
			interes = (monto*8) /100;
			total = interes + monto;
			printf("Usted va a abonar con tarjeta y en 12 cuota, con un interes del 8%c, deberas pagar $%i \n" , total);

    }

    system("pause");
}