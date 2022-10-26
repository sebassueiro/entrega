#include <stdio.h>
#include <stdlib.h>

/**/

void main ()
{
    int i;
    for ( i = 1; i <=10; i++)
    {
        for (int x = 1; x <= i ; x++)
        {
            printf("@");
        }
        printf("\n");
       
    }
    system("pause");
}