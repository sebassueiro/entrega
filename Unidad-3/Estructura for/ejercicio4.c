#include <stdio.h>
#include <stdlib.h>

/*Imprimir la suma de los números impares que se encuentran entre los números 1 y 10.*/

void main ()
{
    int suma, i ;
    suma=0;

    for ( i = 1; i <=10; i= i + 2)
    {
        suma= suma + i;
        
    }
    printf("La suma de los numeros impares del 1 al 10 es: %i\n", suma);
    system("pause");
}