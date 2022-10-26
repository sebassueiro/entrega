#include <stdio.h>
#include <stdlib.h>

/*Pedir al usuario que ingrese 10 números reales, validar que los mismos sean valores
positivos, si el usuario ingresa un número negativo o nulo, pedir reingresar el número
(repetir el ingreso de dicho número mientras el número no sea correcto). Informar al
usuario la suma de los 10 números ingresados.
*/

void main ()
{
    int num, i, acum ;
    acum=0;
    for ( i = 1; i <=10; i++)
    {
        printf("ingrese el numero %i: \n" , i);
        scanf("%i", &num);

        while (num<=0)
        {
            printf("Ingresaste un numero negativo, vuelve a ingresarlo \n");
            scanf("%i", &num);
        }
        
        acum= acum + num;
    }
    printf("Mostras la suma %i \n", acum);
    system("pause");
}