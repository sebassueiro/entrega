#include <stdio.h>
#include <stdlib.h>

/* Realizar un programa que calcule el promedio de las notas de los parciales de un curso.
Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de
parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los
alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean
mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha
nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va
calculando y por último, el promedio general del curso.
*/

void main ()
{
    int cantAlumnos, cantParciales, promedio, notas, promedioGeneral, i,j,acum, promedioClase ;

    printf("Buenas, ingrese la cantidad de alumnos que quiera ingresar: \n");
    scanf("%i", &cantAlumnos);

    printf("Y ahora ingrese la cantidad de parciales que tomo en el cuatrimestre: \n"); 
    scanf("%i",&cantParciales);

    promedio=0;

    for ( i = 1 ;i <= cantAlumnos; i++)
    {

        acum=0;

        for ( j = 1; j <= cantParciales; j++)
        {
            printf("Ingresar las nota %i del alumno %i: \n",j, i);
            scanf("%i", &notas);

            while (notas<1 || notas>10)
            {
                printf("Ingresaste mal la nota \n");
                printf("Ingrese nuevamente la nota: \n");
                scanf("%i", &notas);
            }
            acum = acum + notas;
        }

        promedio = acum / cantParciales; 

        printf("El promedio del alumno %i es:%i \n", i, promedio);

        promedioGeneral= promedioGeneral+ promedio;
    }

    promedioClase= promedioGeneral/cantAlumnos;

	printf("El promedio de la clase es: %i",promedioClase);

    system("pause");
}
