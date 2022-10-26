#include <stdio.h>
#include <stdlib.h>

/*9. Escriba un programa que lea 5 números por teclado, los copie a otro array
multiplicados por 2 y muestre el segundo array.*/

void main()
{
    int espacio = 5;
    float arreglo1[espacio], arreglo2[espacio];
    printf ("ingrese 5 numeros\n");
    for (int i = 0; i < espacio; i++)
    {
        printf ("Ingrese numero %i\n",i+1);
        scanf ("%f",&arreglo1[i]);
        arreglo2[i] = arreglo1[i] * 2;
    }
    
    for (int i = 0; i < espacio; i++)
    {
        printf ("Numero ingresado %i : %f\t multiplicado*2 : %f\n",i+1,arreglo1[i],arreglo2[i]);
    }
}