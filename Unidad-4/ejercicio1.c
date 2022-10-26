#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**Escribe un programa que pida tres cadenas al usuario y muestre sus longitudes (número de letras)*/

void main ()
{
    int i;
    char cadenas[3][12];
    
    for ( i = 0; i <3; i++)
    {
       printf("Ingrese una cadena de caracteres\n");
       scanf("%s", &cadenas[i]);
    }

     for ( i = 0; i <3; i++)
    {
       printf("La longitud de la cadena es:%d \n", strlen(cadenas[i]));
    }
    
    system("pause");
}