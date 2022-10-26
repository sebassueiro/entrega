#include <stdio.h>
#include <stdlib.h>

/*Escriba un programa que escriba la tabla de multiplicar del 1, 2,....,9.*/

void main () 
{
    int num, i, producto;
    num=1;
    for ( i = 1; i <=10; i++)
    {
       for ( num = 1; num <=10; num++)
        {
        producto=num*i;
        printf("%ix%i=%i\t", i, num, producto);
    }
    }
    
    
    system("pause");
}