#include <stdio.h>
#include <stdlib.h>

/*- Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
programa debe terminar.*/

void main ()
{
    float num1 , num2, suma, resta, division, multiplicacion;
    int respuesta;

    printf("Buenas, ingrese un numero (puede tener decimales) \n");
    scanf("%f", &num1);

    printf("Buenas, ingrese el segundo numero (puede tener decimales) \n");
    scanf("%f", &num2);

    printf("Si quieres ver su suma ingrese 1, si quiere ver su resta ingrese 2, si quiere ver su multiplicacion ingrese 3,si quiere ver su division ingrese 4 y  si quiere salir ingrese 5 \n");
    scanf("%i", &respuesta);
    switch (respuesta)
    {
    case 1:
        suma= num1+num2;
        printf("La suma de %f y %f es %f.\n", num1 , num2, suma );
        break;
    case 2:
        resta= num1-num2;
        printf("La resta de %f y %f es %f.\n", num1 , num2, resta );
        break;
    case 3:
        multiplicacion= num1*num2;
        printf("La multiplicacion de %f y %f es %f.\n", num1 , num2, multiplicacion );
        break;
    case 4:
        division= num1/num2;
        printf("La division de %f y %f es %f.\n", num1 , num2, division );
        break; 
    case 5:
        suma= num1+num2;
        printf("La suma de %f y %f es %f.\n", num1 , num2, suma );
        break;               
    
    default:
        break;
    }
}