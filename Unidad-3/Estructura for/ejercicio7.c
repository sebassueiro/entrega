#include <stdio.h>
#include <stdlib.h>

/*Diseñe un algoritmo que sume los 20 primeros números impares.*/

void main ()
{
    int i, suma;
    suma=0;
    for ( i = 1; i <40; i=i + 2)
    {
       suma = suma + i;
    }
    printf("La suma de los primeros 10 numeros impares es: %i \n", suma);
    system("pause");
}