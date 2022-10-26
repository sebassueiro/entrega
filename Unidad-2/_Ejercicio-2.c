#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Ingresar tres valores, sumarlos e imprimir esa suma.*/
void main()
{
    int num_1 = 0, num_2 = 0 , num_3 = 0 , suma = 0 ;
    printf("Hola, ingrese un n%cmero para hacer una suma:\n" , 163);
    scanf("%i",&num_1);
    printf("Y ahora ingrese el segundo n%cmero:\n" , 163 );
    scanf("%i", &num_2);
    printf("Por %cltimo ingrese el %cltimo n%cmero:\n" , 163 , 163 , 163 );
    scanf("%i", &num_3);
    suma= num_1 + num_2 + num_3;
    printf("Este es el resultado de la suma: %i\n" , suma );
    system("pause");
}