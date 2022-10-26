#include <stdio.h>
#include <stdlib.h>

/*- Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes corresponde
dicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en la
consola, si ingresa el 8, agosto, etc.) (realizar el ejercicio primero utilizando estructura
if y luego estructura switch).*/

void main()
{
    int mes=0 ;

    printf("Ingrese el numero del mes: \n");
    scanf("%i", &mes);

    switch (mes)
    {
    case 1:
        printf("El mes ingresado es enero. \n");
        break;
    case 2:
        printf("El mes ingresado es febrero. \n");
        break;
    case 3:
        printf("El mes ingresado es marzo. \n");
        break;
    case 4:
        printf("El mes ingresado es abril. \n");
        break;
    case 5:
        printf("El mes ingresado es marzo. \n");
        break;
    case 6:
        printf("El mes ingresado es junio. \n");
        break;
    case 7:
        printf("El mes ingresado es julio. \n");
        break;
    case 8:
        printf("El mes ingresado es agosto. \n");
        break;
    case 9:
        printf("El mes ingresado es septimebre. \n");
        break;
    case 10:
        printf("El mes ingresado es octubre. \n");
        break;
    case 11:
        printf("El mes ingresado es noviembre. \n");
        break;
    case 12:
        printf("El mes ingresado es diciembre. \n");
        break;

    default:
        printf("Ingresaste mal el numero del mes. \n");
        break;
    }
    system("pause");
}