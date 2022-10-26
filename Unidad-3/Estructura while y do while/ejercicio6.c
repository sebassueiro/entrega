#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int nota , promedio , suma, contador , final ;
    nota=0;
    promedio=0;
    suma=0;
    contador=0;
    final=0;
    do
    {
        printf("Ingrese la nota del alumno: \n");
        scanf("%i",&nota);
        suma = suma + nota;
        contador = contador +  nota - nota +1;
        printf("Si quiere ingresar otra nota ingrese 1 si no quiere ingresar otra nota ingrese 2 \n");
        scanf("%i", &final);

    } while (final==1);
    promedio= suma/contador;
    printf("La suma de todas las notas es %i y el promedio es %i \n", suma, promedio);
    system("pause");
    
}