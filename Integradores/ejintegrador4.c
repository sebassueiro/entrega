#include <stdio.h>
#include <stdlib.h>

/* LC1 - Ejercicio Integrador 4
Se desea realizar un programa que gestione el stock de un negocio de venta de electrodomésticos. Como máximo se permitirán cargar 100 electrodomésticos. De cada electrodoméstico se conoce su código de barras, su descripción y una cantidad en stock.
Se deberá presentar un menú con las siguientes opciones:
1. Cargar productos.
2. Modificar stock.
3. Mostrar productos sin stock.
4. Listar productos.
5. Salir.
Donde, la opción 1 permite cargar los 100 electrodomésticos ingresando para cada uno: código de barras, descripción y cantidad.
La opción 2 debe pedir el código de barras del electrodoméstico al cual se desea cambiar el stock y la nueva cantidad. Si el código de barras ingresado no existe,informar la situación con un mensaje “Electrodoméstico inexistente”
, si el código de barras si se encuentra modificar su stock con la cantidad ingresada.
La opción 3 debe mostrar en la consola los datos de aquellos electrodomésticos con cantidad igual a cero.
La opción 4 debe mostrar en la consola el listado de electrodomésticos.
SOLO se saldrá de la aplicación si se selecciona la opción 5. */

void main()
{
    /*
    Se deberá presentar un menú con las siguientes opciones:
1. Cargar productos.
2. Modificar stock.
3. Mostrar productos sin stock.
4. Listar productos.
5. Salir.*/
    int opc;
    int tam = 3;
    int codigo1;
    int validar;
    int cantidad1;
    int i;
    int codigo[tam];
    char descrip[tam][50];
    int cantidad[tam];
    int contador = 0;
    int acum;

    do
    {
        printf("1. Cargar productos.\n");
        printf("2. Modificar stock.\n");
        printf("3. Mostrar productos sin stock.\n");
        printf("4. Listar productos.\n");
        printf("5. Salir.\n");
        scanf("%i", &opc);
        while (opc < 1 || opc > 5)
        {
            printf("Ingreso un numero incorrecto\n");
            scanf("%i", &opc);
        }
       
        switch (opc)
        {
        case 1:
            /*Donde, la opción 1 permite cargar los 100 electrodomésticos ingresando para cada uno: código de barras, descripción y cantidad*/
            for (int i = 0; i < tam ; i++)
            {
                printf ("Producto Nro %i:\n",i+1);
                printf ("Ingrese c%cdigo de barras\n", 162);
                scanf ("%i",&codigo[i]);
                printf ("Ingrese descripci%cn\n",162);
                scanf ("%[^\n]", &descrip[i]);
                fflush(stdin);
                printf ("Ingrese cantidad de stock\n");
                scanf ("%i",&cantidad[i]);
                printf ("\n");
                ++contador ;
            }
            
            break;
        case 2:
            /*La opción 2 debe pedir el código de barras del electrodoméstico al cual se desea cambiar el stock por la nueva cantidad. 
            Si el código de barras ingresado no existe,informar la situación con un mensaje “Electrodoméstico inexistente”*/

            if (contador == 0)
            {
                printf("No hay productos cargados\n");
            }
            else
            {
                printf("Ingrese c%cdigo de barras\n", 162);
                scanf("%i", &codigo1);
                validar = 0;
                i = 0;
                while (i < tam && validar != 1)
                {
                    if (codigo1 == codigo[i])
                    {
                        printf("Ingrese nueva cantidad del stock\n");
                        scanf("%i", &cantidad1);
                        while (cantidad1 < 0)
                        {
                            printf("Cantidad invalida, ingrese un numero mayor a 0\n");
                            scanf("%i", &cantidad1);
                        }
                        cantidad[i] = cantidad1;
                        validar = 1;
                    }
                    ++i;
                }
                if (validar == 0)
                {
                    printf("Electrodom%cstico inexistente\n", 130);
                }
            }
            break;
        case 3:
            /*La opción 3 debe mostrar en la consola los datos de aquellos electrodomésticos con cantidad igual a cero.*/
            if (contador == 0)
            {
                printf("No hay productos cargados\n");
            }
            else
            {
                acum = 0;
                printf("Los productos con stock en 0 son:\n");
                for (int i = 0; i < tam; i++)
                {
                    if (cantidad[i] == 0)
                    {
                        printf("%s\n", descrip[i]);
                        ++acum;
                    }
                }
                if (acum == 0)
                {
                    printf("Todos los productos tienen stock\n");
                }
            }
            break;
        case 4:
            /*La opción 4 debe mostrar en la consola el listado de electrodomésticos.*/
            if (contador == 0)
            {
                printf("No hay productos cargados\n");
            }
            else
            {
                printf("Listado de electrodom%csticos\n", 130);
                for (int i = 0; i < tam; i++)
                {
                    printf("Codigo:%i\tDescripci%cn:%s\tCantidad:%i\n", codigo[i], 162, descrip[i], cantidad[i]);
                }
            }
            break;

        default:
            break;
        }
    } while (opc != 5);
}