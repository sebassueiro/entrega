#include <stdlib.h>
#include <stdio.h>

/*10. Escriba un programa que lea una matriz cuadrada la presente en pantalla, y presente
la suma de todos los números que no están en la diagonal principal.*/

void main()
{
    int matriz, suma = 0;
    printf ("Ingrese numero para matriz cuadrada\n");
    scanf ("%i",&matriz);
    int arreglo[matriz][matriz];
    printf ("ingrese los valores de su matriz en orden\n");
    for (int i = 0; i < matriz; i++)
    {
        for (int j = 0; j < matriz; j++)
        {
            printf ("Posicion %ix%i\n",i+1,j+1);
            scanf ("%i",&arreglo[i][j]);
        }
    }
    for (int i = 0; i < matriz; i++)
    {
        for (int j = 0; j < matriz; j++)
        {
            printf ("%i\t", arreglo[i][j]);
        }
        printf ("\n");
    }
    for (int i = 0; i < matriz; i++)
    {
        for (int j = 0; j < matriz; j++)
        {
            if (i != j)
            {
                suma = suma + arreglo[i][j];
            }
        }
    }
    printf ("La suma de todos los valores excepto la matriz diagonal es : %i\n",suma);
    

}