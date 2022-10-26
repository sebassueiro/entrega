#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Ingresar por consola 10 nombres de alumnos en un array y sus apellidos en otro, concatenar de la forma
"nombre apellido" para cada uno, y mostrar por consola.*/

void main ()
{
    int i;
    char nombre[10][50];
    char apellido[10][56];
    char unir[10][50];

    for ( i = 0; i <3; i++)
    {
        printf("Ingrese un nombre: \n");
        scanf("%s",  nombre[i]);
        printf("Ingrese un apellido: \n");
        scanf("%s",  apellido[i]);
    }
    for ( i = 0; i < 3; i++)
    {
        strcat(unir[i],nombre[i]);
        strcat(unir[i], apellido[i]);
        printf("%s\n",unir[i]);
    }
    
    system("pause");

}