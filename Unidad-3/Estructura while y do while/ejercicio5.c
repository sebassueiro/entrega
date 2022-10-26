#include <stdio.h>
#include <stdlib.h>

/**/

void main()
{
    int dni = 38632584, nota = 7, dniIngresado = 0, intentos = 1, ingresaCorrectamente = 0;

    printf("Ingrese su D.N.I.: \n");
    scanf("%i", &dniIngresado);

    while (dniIngresado != dni && intentos<3)
    {
        printf("Ingresaste mal tu dni, ingreselo de nuevo: \n");
        scanf("%i", &dniIngresado);
        if (dni != dniIngresado)
        {
            intentos = intentos + 1;
        }
    }
    
    if (dni == dniIngresado)
    {
        printf("La nota del alumno es %i \n", nota);
    }
    else if (intentos == 3)
    {
        printf("No te podemos dar la nota \n");
    }

    system("pause");
}