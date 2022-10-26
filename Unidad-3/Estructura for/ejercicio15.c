#include <stdio.h>
#include <stdlib.h>

/*Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones.
Mostrar el promedio por alumno y el promedio general.*/

void main ()
{
    int cantAlum , notas, i, x;
    float  nota, suma ,prom, promGeneral;
    notas=3;
    
    printf("Ingrese la cantidad de alumnos que quieras ingresar: \n");
    scanf("%i",&cantAlum);

    for ( i = 1; i <= cantAlum; i++)
    {
     suma = 0;
     for (x = 1; x <=notas; x++)
    {
      printf("Ingrese la nota numero %i\n", x);
      scanf("%f",&nota);
      suma=nota  + suma;
    }
    }
        prom = suma/notas;
        printf("El promedio del alumno %i es: %f\n", i , prom);
        promGeneral=promGeneral + prom;
   
 promGeneral=promGeneral/ cantAlum;
 printf("El promedio general de los alumnos es %f", promGeneral);
 system("pause");
}