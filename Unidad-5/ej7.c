#include <stdio.h>
#include <stdlib.h>

/*7. Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar,
leer las notas por consola, mostrar la suma de sus componentes y el promedio.*/

void main()
{
    float suma = 0 , promedio = 0;
    int espacio;

    printf ("Cuantas notas desea ingresar ?\n");
    scanf ("%i", &espacio);

    float arreglo[espacio];

    for (int i = 0; i < espacio; i++)
    {
        printf ("Ingrese nota numero %i\n",i+1);
        scanf ("%f",&arreglo[i]);
        suma = suma + arreglo[i];
    }
    promedio = suma / espacio;
    printf ("La suma de las notas es %f\n", suma);
    printf ("El promedio de las notas es %f\n", promedio);
}