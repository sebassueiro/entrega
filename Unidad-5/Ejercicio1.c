#include <stdio.h>
#include <stdlib.h>

int sumar(int num1, int num2);
int resta(int num1, int num2);
int multiplicacion(int num1, int num2);
int division(int num1, int num2);

void main ()
{
    int num1 , num2 , resultado;
    int opcion;
    printf("Ingrese el primer numero\n");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero\n");
    scanf("%i", &num2);

    printf("Menu\n");
    printf("1. Informar su suma\n");
    printf("2. Informar su resta\n");
    printf("3. Informar su multiplicación\n");
    printf("4. Informar su división\n");
    printf("5. Salir\n");
    scanf("%i",&opcion);

    switch (opcion)
    {
    case 1:
        resultado= sumar(num1,num2);
        printf("La suma es: %i\n", resultado);
        break;
    case 2:
        resultado= resta(num1,num2);
        printf("La resta es: %i\n", resultado);
        break;
    case 3:
        resultado= multiplicacion(num1,num2);
        printf("La multiplicacion es: %i\n", resultado);
        break;        
    case 4:
        resultado= division(num1,num2);
        printf("La division es: %i\n", resultado);
        break;
    case 5:

        break;        
    }
    system("pause");
}

int sumar(int num1,int num2)
{
    int respuesta;
    respuesta=num1 + num2;
    return respuesta;
}

int resta(int num1,int num2)
{
    int respuesta;
    respuesta=num1 - num2;
    return respuesta;
}

int multiplicacion(int num1,int num2)
{
    int respuesta;
    respuesta=num1 * num2;
    return respuesta;
}

int division(int num1,int num2)
{
    int respuesta;
    respuesta=num1 / num2;
    return respuesta;
}