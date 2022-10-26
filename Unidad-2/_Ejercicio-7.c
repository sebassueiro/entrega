#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Ingresar el valor de la hora y el tiempo trabajado por un comerciante, calcular su
sueldo e imprimirlo*/
void main()
{
    int hora = 0 , tiempoTrabajado = 0 , sueldo = 0 ;
    printf ("Ingrese el valor de la hora\n");
    scanf ("%i", &hora );

    printf ("Ingrese el tiempo trabajado\n");
    scanf ("%i", &tiempoTrabajado );
    
    sueldo = tiempoTrabajado * hora;

    printf ("Su sueldo es de: %i\n", sueldo);
    
    system("pause");
}