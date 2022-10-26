#include <stdio.h> 
#include <stdlib.h> 

/*Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en
pantalla.*/

void main ()
{
    int num2 , num1 ;

    printf("Buenas, ingrese un de los  dos numeros y le diremos cual es el mayor \n") ;
    scanf("%i" , &num1);
    printf("Ahora ingrese el segundo numero: \n");
    scanf("%i" , &num2);

    if(num1>num2)
    {
        printf("El numero %i es mayor que el numero %i. \n", num1 , num2 );
    }
    else if (num1<num2)
    {
        printf("El numero %i es mayor que el numero %i. \n" , num2 , num1 );
        
    }
    else
    {
        printf("Esos numeros son iguales. \n");
    }
    

    system ("pause") ;
}