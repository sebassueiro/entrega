#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Solicitar ingresar dos lados de un triángulo rectángulo y calcular, la hipotenusa, el
perímetro, la superficie. Imprima los resultados de las operaciones solicitadas*/
void main ()
{
    int base = 0 , altura = 0 , hipotenusa = 0 , perimetro = 0 , area = 0 ;
    printf ("Ingrese base del tri%cngulo: \n" , 160);
    scanf ("%i", &base);
    printf ("Ingrese altura del tri%cngulo: \n" , 160 );
    scanf ("%i", &altura);
    hipotenusa = sqrt(pow(base, 2) + pow(altura, 2));
    perimetro = base + altura + hipotenusa;
    area = (base * altura)/ 2 ;
    printf ("Hipotenusa = %i\n" , hipotenusa);
    printf ("Per%cmetro = %i\n" , 161, perimetro);
    printf ("%crea = %i\n" , 181, area);
    system("pause");
}