#include <stdio.h>
#include <stdlib.h>

struct Alumno
{
    int dni;
    float nota;
};

void main()
{
    int opc;
    int espacio = 2;
    int dni1;
    float nota1;
    int validar;

    struct Alumno alumnos[espacio];

    do
    {
        printf("1. Cargar Alumnos\n");
        printf("2. Buscar un alumno\n");
        printf("3. Modificar la nota de un alumno\n");
        printf("4. Mostrar un listado de los 10 alumnos\n");
        printf("5. Salir\n");
        scanf("%i", &opc);
        while (opc < 1 || opc > 5)
        {
            printf("Ingreso un numero incorrecto\n");
            scanf("%i", &opc);
        }

        switch (opc)
        {
        case 1:
            for (int i = 0; i < espacio; i++)
            {
                printf("Ingrese dni del alumno %i\n", i + 1);
                scanf("%i", &dni1);
                while (dni1 < 1000000 || dni1 > 99999999)
                {
                    printf("Dni invalido ingrese nuevamente\n");
                    scanf("%i", &dni1);
                }
                alumnos[i].dni = dni1;
                printf("Ingrese nota\n");
                scanf("%f", &nota1);
                while (nota1 < 1 || nota1 > 10)
                {
                    printf("Nota invalida ingrese nuevamente\n");
                    scanf("%f", &nota1);
                }
                alumnos[i].nota = nota1;
            }
            break;
        case 2:
            do
            {
                printf("Ingrese dni\n");
                scanf("%i", &dni1);
                validar = 0;
                for (int i = 0; i < espacio; i++)
                {
                    if (dni1 == alumnos[i].dni)
                    {
                        printf("Dni: %i , Nota: %.2f\n", dni1, alumnos[i].nota);
                    }
                    else
                    {
                        validar = validar + 1;
                    }
                }
                if (validar == espacio)
                {
                    printf("Dni inexistente, vuelva a ingresar\n");
                }
            } while (validar == espacio);

            break;
        case 3:
            do
            {
                printf("Ingrese dni\n");
                scanf("%i", &dni1);
                validar = 0;
                for (int i = 0; i < espacio; i++)
                {
                    if (dni1 == alumnos[i].dni)
                    {
                        printf("Ingrese nueva nota\n");
                        scanf("%f", &nota1);
                        while (nota1 < 1 || nota1 > 10)
                        {
                            printf("Nota invalida ingrese nuevamente\n");
                            scanf("%f", &nota1);
                        }
                        printf("Nota cambiada con exito\n");
                        alumnos[i].nota = nota1;
                    }
                    else
                    {
                        validar = validar + 1;
                    }
                }
                if (validar == espacio)
                {
                    printf("Dni inexistente, vuelva a ingresar\n");
                }
            } while (validar == espacio);
            break;
        case 4:
            for (int i = 0; i < espacio; i++)
            {
                printf("Dni: %i , Nota: %.2f\n", alumnos[i].dni, alumnos[i].nota);
            }
            break;
        case 5:
            break;
        }
    } while (opc != 5);
}