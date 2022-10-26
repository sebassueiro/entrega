#include <stdio.h> 
#include <stdlib.h> 

/*Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo
sea mayor o igual que el importe a retirar.*/

void main ()
{
    int num ;
    printf("Buenas, ingrese un numero y le diremos si es positivo, negativo o nulo. \n");
    scanf("%i", &num);
    if (num>0)
    {
        printf("El numero ingresado es positivo. \n");

    }
    else if (num<0)
    {
        printf("El numero ingresado es negativo. \n");

    }
    else
    {
        printf("El numero ingresado es nulo. \n");
    }

  system("pause");
}