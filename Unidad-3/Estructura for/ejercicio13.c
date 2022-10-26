#include <stdio.h>
#include <stdlib.h>

/**/

void main ()
{
    int i, x ;
    for ( i = 10; i >=1; i=i-1)
    {
        for ( x = 1; x <=i; x = x+1)
        {
            printf("@");
        }
        printf("\n");
    }
    
    system("pause");
}