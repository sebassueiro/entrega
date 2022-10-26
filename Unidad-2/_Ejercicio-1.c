#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Ingresar dos valores enteros, sumarlos e imprimir esta suma.*/
void main ()
{
    int num_1 = 0 , num_2 = 0, suma = 0;
    printf("Buenas, ingrese un n%cmero:\n" , 163 );
    scanf("%i", &num_1);
    printf("Ahora ingrese otro n%cmero:\n" , 163 );
    scanf("%i" , &num_2);
    suma= num_1 + num_2;
    printf("Buen%csimo el resultado de la suma de estos dos n%cmeros es: %i \n" , 161 ,163 , suma );
    system("pause");
}