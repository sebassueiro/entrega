#include <stdio.h>
#include <stdlib.h>

/*hacer un bucle*/

void main ()
{
    int x , acum;
    acum=0;
    x=1;
    while (x<=100)
    {
        acum = acum+x;
        printf("%i",acum);
    }
   system("pause"); 
}