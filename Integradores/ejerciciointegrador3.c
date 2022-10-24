#include <stdio.h>
#include <stdlib.h>

/*LC1 - Ejercicio Integrador 3
Deseamos realizar un programa que gestione las notas de una clase de 10 alumnos de los
cuales sabemos el DNI y la nota. El programa debe mostrar un menú con las siguientes
opciones a resolver:
1. Cargar Alumnos
2. Buscar un alumno
3. Modificar la nota de un alumno
4. Mostrar un listado de los 10 alumnos
5. Salir

SÓLO se saldrá de la aplicación si se selecciona la opción 5.
*/

/** ALGUN CAMBIO**/
void main()
{
int opc;
int espacio = 2;
int dni1;
float nota1;
int validar;
int dni[espacio];
float nota[espacio];
do
{
    printf ("1. Cargar Alumnos\n");
    printf ("2. Buscar un alumno\n");
    printf ("3. Modificar la nota de un alumno\n");
    printf ("4. Mostrar un listado de los 10 alumnos\n");
    printf ("5. Salir\n");
    scanf ("%i",&opc);
    while (opc < 1 || opc > 5)
    {
        printf ("Ingreso un numero incorrecto\n");
        scanf ("%i",&opc);
    }
    
            
    
    switch (opc)
    {
    case 1:
        /*Donde, la opción 1 permite cargar los 10 alumnos ingresando para cada uno: DNI y nota.
Validar que el DNI no sea menor que 1000000 ni mayor que 99999999. Validar que la nota sea
mayor a 0 y menor o igual que 10. */
        
        for (int i = 0; i < espacio; i++)
        {
            printf ("Ingrese dni del alumno %i\n",i+1);
            scanf ("%i",&dni1);
            while (dni1<1000000 || dni1>99999999)
            {
                printf ("Dni invalido ingrese nuevamente\n");
                scanf ("%i",&dni1);
            }
            dni[i]=dni1;
            printf ("Ingrese nota\n");
            scanf ("%f",&nota1);
            while (nota1<1 || nota1>10)
            {
                printf ("Nota invalida ingrese nuevamente\n");
                scanf ("%f",&nota1);
            }
            nota[i]=nota1;

        }
        
        break;
    case 2:
        /*La opción 2 debe pedir el DNI de un alumno y mostrar en consola DNI y nota. Si el DNI
ingresado no existe, informar la situación con un mensaje “DNI inexistente”.*/
            
            do
            {
            printf ("Ingrese dni\n");
            scanf ("%i",&dni1);
            validar = 0;
            for (int i = 0; i < espacio; i++)
            {
                if (dni1 == dni[i])
                {
                    printf ("Dni: %i , Nota: %.2f\n",dni1 ,nota[i] );
                }
                else
                {
                    validar = validar + 1;
                }
            }
            if (validar == espacio)
            {
                printf ("Dni inexistente, vuelva a ingresar\n");
            }
            } while (validar == espacio); 
            
        break;
    case 3:
        /*La opción 3 debe pedir el DNI del alumno al cual se desea cambiar la nota y la nueva nota. Si el
DNI ingresado no existe, informar la situación con un mensaje “DNI inexistente”, si el DNI si se
encuentra modificar la nota del alumno por la ingresada.*/
           do
            {
            printf ("Ingrese dni\n");
            scanf ("%i",&dni1);
            validar = 0;
            for (int i = 0; i < espacio; i++)
            {
                if (dni1 == dni[i])
                {
                    printf ("Ingrese nueva nota\n");
                    scanf ("%f",&nota1);
                    while (nota1<1 || nota1>10)
                    {
                        printf("Nota invalida ingrese nuevamente\n");
                        scanf("%f", &nota1);
                    }
                    printf ("Nota cambiada con exito\n");
                    nota[i] = nota1;
                }
                else
                {
                    validar = validar + 1;
                }
            }
            if (validar == espacio)
            {
                printf ("Dni inexistente, vuelva a ingresar\n");
            }
            } while (validar == espacio);  
        break;
    case 4:
        /*La opción 4 debe mostrar en la consola el listado de alumnos.*/
        for (int i = 0; i < espacio; i++)
        {
            printf ("Dni: %i , Nota: %.2f\n",dni[i],nota[i]);
        }
        
        break;        
    case 5:
        break;
   
    }
} while (opc != 5);

}