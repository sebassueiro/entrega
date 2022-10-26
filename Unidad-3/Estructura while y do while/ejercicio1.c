#include <stdio.h>
#include <stdlib.h>

/*Imprimir en la consola los números del 1 al 100.*/

void main ()

{
    int x , acum;
    x=0;
    acum=1;
    while (x<=99)
    {
        x = acum + x;
        printf("%i \n", x);
    }
    
   system("pause"); 
}