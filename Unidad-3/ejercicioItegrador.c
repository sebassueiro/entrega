#include <stdio.h>
#include <stdlib.h>

void main (){
    int tipo , pasajeros , horario ;

    printf("Ingresa el tipo de vehiculo, 1-camion , 2-automovil y 3-moto. \n");
    scanf ("%i", &tipo);

    while (tipo<1 || tipo>3)
    {
       printf("Ingresaste mal el tipo de vehiculo, ingreselo nuevamente:  \n");
       scanf ("%i", &tipo); 
    }

    printf ("Que hora de congestion es, 1-horas de alta congestion o 2-horas de baja congestion. \n");
	scanf ("%i",&horario);

    while (horario<1 || horario>2)
    {
        printf ("Ingresaste mal el tipo de vehiculo, ingreselo nuevamente:  \n");
		scanf ("%i", &horario);
    }

    printf("Escriba el numero de pasajeros que haya en el vehiculo:  \n");
    scanf("%i", &pasajeros);

    while (pasajeros<0 || pasajeros>5) 
    {
        printf("Ingresaste mal el numero de pasajero \n");
        printf("Ingreselo nuevamente: \n");
        scanf("%i", &pasajeros);
    }
    
    if (horario==1 && tipo==1)
    {
        printf("Vas a tener que pagar $300, por manejar un camion en el horario de alta frecuencia. \n");
    }
    else if (horario==1 && tipo==3)
    {
        printf("Vas a tener que pagar $100, por manejar una moto en el horario de alta frecuencia. \n");
    }
    else if (horario==1 && tipo==2 && pasajeros>=3)
    {
        printf("No vas a tener que pagar por que vas en un automovil con %i pasajeros en el horario de alta frecuencia.  \n", pasajeros);
    }
    else if (horario==1 && tipo==2 && pasajeros<3)
    {
        printf("Vas a tener que pagar $150 por que vas en un automovil con %i pasajeros en el horario de alta frecuencia.  \n", pasajeros);
    }
    else if (horario==2 && tipo==1)
    {
        printf("Usted va a con un camion en el horario de baja frecuencia, vas a tener que pagar $200.  \n");
    }
    else if (horario==2 && tipo==2)
    {
        printf("Vas a tener que pagar $150, por manejar un automovil en el horario de baja frecuencia.  \n");
    }
    else 
    {
       printf("Vos estas yendo en moto en el horario de baja frecuencia asi que vos no pagas. \n");
    }
    
    system("pause");
}
