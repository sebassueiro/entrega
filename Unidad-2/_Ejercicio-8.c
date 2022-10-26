#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Ingresar el tiempo trabajado por un contador y considerando que el valor de la hora es
de 800 pesos, calcular su sueldo e imprimirlo*/
void main ()
{
    int tiempo = 0 , hora = 800 , salario = 0 ;
    printf("Ingrese las horas trabajadas:\n");
    scanf("%i", &tiempo);
    salario = tiempo * hora;
    printf("Usted va a cobrar %i pesos por %i horas trabajadas\n", salario , tiempo);
    system("pause");
}