#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do
valor ingresado, imprimir los resultados*/
void main ()
{
    int num_1 = 0 , num_2 = 0 , suma = 0 , resta = 0 , producto = 0 ;
    printf("Buenas, ingrese un n%cmero\n" , 163 );
    scanf("%i", &num_1);
    printf("Ahora ingrese un segundo n%cmero\n" , 163 );
    scanf("%i", &num_2)  ;
    suma= num_1+ num_2 ;
    resta= num_1 - num_2 ;
    producto= num_1 * num_2 ;
    printf("El producto de entre estos numeros es:%i, la suma es:%i y la resta es:%i\n",  producto , suma ,
    resta );
    system("pause");
}