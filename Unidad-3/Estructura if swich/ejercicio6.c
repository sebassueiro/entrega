#include <stdio.h> 
#include <stdlib.h> 

/*Leer una nota de un alumno por consola e informar la condición del mismo. (menor
que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar
que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota
inválida”.
*/

void main()
{
    int nota ;

    printf("Ingrese la nota del alumno: \n");
    scanf("%i" , &nota );
    
    if (nota>=11 || nota<=0)
    {
        printf("Ingresaste mal la nota \n");
    }
    else if ( nota>= 6 && nota<=10)
    {
        printf("El alumno esta promocionado porque su nota es %i \n" , nota);
    }
    else if (nota>=4 && nota<6)
    {
        printf("El alumno esta regular porque su nota es %i \n" , nota);
    }
    else 
    {
        printf("El alumno esta reprobado porque su nota es %i \n " , nota );
    }

    system("pause");
}