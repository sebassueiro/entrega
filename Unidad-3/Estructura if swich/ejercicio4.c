#include <stdio.h>
#include <stdlib.h> 

/*Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en
pantalla.
*/
void main ()
{
    int num , num2 ,  num3 ; 

    printf("Buenas, ingrese 3 numeros y te diremos cual es el mayor. \n");

    printf("Ingrese el primer numero: \n");
    scanf("%i", &num);

    printf("Ingrese el segundo numero: \n");
    scanf("%i", &num2);

    printf("Ingrese el tercer numero: \n");
    scanf("%i", &num3);

    if ( num> num2 && num>num3)
    {
        printf("El primer numero %i es mas grande que %i y %i \n" , num , num2 , num3);
    }
    else if (num2>num3 && num2>num )
    {
        printf("El segundo numero %i es el mas grande. \n" , num2);
    }
    else  if (num3>num && num3>num2)
    {
        printf("El mas grande es el tercer numero %i. \n" , num3);
    }
    else
    {
        printf("Los numeros son iguales. \n");
    }
    
    system("pause");
}
