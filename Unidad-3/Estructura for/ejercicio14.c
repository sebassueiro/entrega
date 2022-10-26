#include <stdio.h>
#include <stdlib.h>

/**/

void main ()
{
    int num, i, x;
    printf("Ingrese un numero: \n");
    scanf("%i",&num);
    for ( i =  num; i >=1; i= i -1)
    {
        for ( x = 1 ; x <=i; x++)
        {
           printf("%i", x); 
        }
        printf("\n");
    }
    
    system("pause");
}