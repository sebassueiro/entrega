#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>

/*Escriba un programa que pida ingresar un número y a continuación escriba en la
consola si el mismo es par o impar.*/

void main()
{
    int  num ;

    printf("Buenas, ingrese un numero y te vamos a decir si es par o impar: \n");
    scanf("%i" , &num);

    if ( num % 2 ==0)
    {
        printf("Entonces el numero es par. \n");
    }
    else
    {
        printf("Entonces el numero es impar. \n");
    }
    
  system("pause");
}