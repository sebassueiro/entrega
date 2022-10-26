#include <stdio.h>
#include <stdlib.h>

/*Escriba un programa que lea un número n1, y escriba la tabla de multiplicar del
número.*/

void main ()
{
    int num, i, producto;
    printf("Ingresenos un numero y le diremos su tabla de multiplicar.\n");
    scanf("%i", &num);

    for ( i = 1; i <=10; i++)
    {
        producto=num*i;
        printf("%ix%i=%i\n", num, i, producto);
    }
    

    system("pause");
}