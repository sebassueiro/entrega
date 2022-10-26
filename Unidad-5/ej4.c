#include <stdio.h>
#include <stdlib.h>

/*
4. Dado el vector {10, 20, 5, 15, 30, 20}
- Informar el vector de la forma: "Indice: X, Valor: Y".
- Totalizar el vector e informar el total.
- Informar el contenido de las posiciones impares.
- Informar las posiciones que contienen números impares.
- Informar el mayor número.
- Informar cuántas veces aparece el número 20.
*/

void main()
{
    int vector[6] = {10, 20, 5, 15, 30, 20};
    int total= 0;
    int mayor = vector[0];
    int contador = 0;

    for (int i = 0; i <= 5; i++)
    {
        printf ("Indice: %i, Valor: %i\n", i , vector[i]);
    }
    for (int i = 0; i <= 5; i++)
    {
        total = total + vector[i];
    }
    printf ("Total suma del vector = %i\n", total);
    for (int i = 1; i <= 5; i= i + 2)
    {
        printf ("Contenido de la posicion %i: %i\n", i, vector[i]);
    }
    for (int i = 0; i <= 5; i++)
    {
        if ((vector[i]%2) != 0)
        {
            printf ("Numero impar: %i\n",vector[i]);
        }
        
    }
    for (int i = 1; i <= 5; i++)
    {
        if (mayor < vector[i])
        {
            mayor = vector[i];
        }
        
    }
    printf ("Numero mayor en el vector es: %i\n",mayor);
    for (int i = 0; i <= 5; i++)
    {
        if (20 == vector[i])
        {
            contador = contador + 1;
        }
        
    }
    printf ("El numero 20 aparece %i veces \n", contador);
}