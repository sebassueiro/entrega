#include <stdio.h>
#include <stdlib.h>

/* Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes corresponde
dicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en la
consola, si ingresa el 8, agosto, etc.) (realizar el ejercicio primero utilizando estructura
if y luego estructura switch).
*/

void  main ()
{
    int mes ;

    printf("Ingrese el numero del mes y le diremos cual es: \n");
    scanf("%i", &mes) ;

    if (mes<1 && mes>12 )
    {
        printf("Ingresaste mal el mes \n");

    }
    else if (mes==1)
    {
        printf("El mes que ingresaste es enero \n");
    }
    else if (mes==2)
    {
        printf("El mes que ingresaste es febrero \n");
    }
    else if (mes==3)
    {
        printf("El mes que ingresaste es marzo \n");
    }
    else if (mes==4)
    {
        printf("El mes que ingresaste es abril \n");
    }
    else if (mes==5)
    {
        printf("El mes que ingresaste es mayo \n");
    }
    else if (mes==6)
    {
        printf("El mes que ingresaste es junio \n");
    }
    else if (mes==7)
    {
        printf("El mes que ingresaste es julio \n");
    }
    else if (mes==8)
    {
        printf("El mes que ingresaste es agosto \n");
    }
    else if (mes==9)
    {
        printf("El mes que ingresaste es septiembre \n");
    }
    else if (mes==10)
    {
        printf("El mes que ingresaste es octubre \n");
    }
    else if (mes==11)
    {
        printf("El mes que ingresaste es noviembre \n");
    }
    else if (mes==12)
    {
        printf("El mes que ingresaste es diciempre \n");
    }  

    system("pause");
}