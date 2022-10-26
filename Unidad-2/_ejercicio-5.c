#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*El usuario debe poder ingresar los lados de un rectángulo y el programa calcula con
esos datos la diagonal principal del rectángulo, superficie y perímetro. Mostrar al
usuario los resultado*/
void main ()
{
    int base = 0 , altura = 0 , diagonal = 0 , superficie = 0 , perimetro = 0 ;
    printf("Ingrese la base del rect%cngulo\n" , 160 );
    scanf("%i", &base);
    printf("Ingrese la altura del rect%cngulo\n" , 160 );
    scanf("%i", &altura);
    diagonal= sqrt( pow(base,2) + pow(altura,2));
    superficie= base * altura;
    perimetro= base * 2 + altura *2 ;
    printf("La diagonal del rect%cngulo es %i, la superficie %i y el per%cmetro es %i.\n" , 160 , diagonal , superficie , 161 ,perimetro );
    system ("pause");
}