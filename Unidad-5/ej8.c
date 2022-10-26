#include <stdio.h>
#include <stdlib.h>

/*8. Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los
10 números en pantalla mediante un solo array.*/

void main ()
{
    int espacio=5;
    float arreglo1[espacio],arreglo2[espacio],arreglo3[espacio*2];

    printf ("Ingrese 5 numeros\n");
    for (int i = 0; i < espacio; i++)
    {
        printf ("ingrese numero %i\n" , i+1);
        scanf ("%f",&arreglo1[i]); 
    }
    printf ("Ingrese otra vez 5 numeros\n");
    for (int i = 0; i < espacio; i++)
    {
        printf ("ingrese numero %i\n" , i+1);
        scanf ("%f",&arreglo2[i]); 
    }
    for (int i = 0; i < espacio; i++)
    {
        arreglo3[i] = arreglo1[i];
        arreglo3[i+espacio] = arreglo2[i];
    }
    printf ("Numeros ingresados en los 2 arreglos\n");
    for (int i = 0; i < espacio*2; i++)
    {
        printf ("%f\n", arreglo3[i]);
    }
    
}