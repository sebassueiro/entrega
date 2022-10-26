#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Ingresar los lados de un triángulo calcular su perímetro e imprimirlo.*/
void main ()
{
    int lado_1 = 0 , lado_2 = 0 , lado_3 = 0 , perimetro = 0 ;
    printf("Buenas, queremos sacar el per%cmetro del tri%cngulo, ingrese el primer lado:\n" , 161 , 160);
    scanf("%i", &lado_1);
    printf("Ahora ingrese el otro lado:\n");
    scanf("%i", &lado_2);
    printf("Por %cltimo ingrese el %cltimo lado\n" , 163 , 163);
    scanf("%i", &lado_3);
    perimetro= lado_1 + lado_2 + lado_3;
    printf("El per%cmetro de este tri%cngulo es:%i\n" , 161 , 160 , perimetro );
    system("pause");
}