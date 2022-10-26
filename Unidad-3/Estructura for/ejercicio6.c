#include <stdio.h>
#include <stdlib.h>

/*Suma de los 10 primeros números múltiplos de tres*/

void main ()
{
    int suma, i ;
    suma=0;
    for ( i = 1; i <=30;i++)
    {
       if(i %3==0)
       {
        suma= suma + i;
       }

    }
    
    printf("este es el resultado de la suma de los primeros 10 numeros multiplos de tres: %i \n", suma);
    system("pause");

}