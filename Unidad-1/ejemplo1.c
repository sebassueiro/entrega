#include <stdio.h>
#include <stdlib.h>

void main()
{
    char inicialNombre;
    int edad;

    printf("Buenas, ingresa la inicial de tu nombre:\n");
    scanf("%c" , &inicialNombre);

    printf("Y ahora dime cual es tu edad:\n");
    scanf("%i", &edad);

    printf("Hola %c, tu edad esa %i. \n" , inicialNombre, edad);
    system("pause");
}