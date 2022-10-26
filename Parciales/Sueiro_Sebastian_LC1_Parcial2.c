#include <stdio.h>
#include <stdlib.h>

int legajos[20];
char nombres[20] [50];
int contador = 0;
char apellidos[20][50];
int adeudanCuota[20];
int becados[20];
int i;
int validar;
int cantAlumnos;

const int tam = 3;


void cargarAlumnos();
void modificarCondicionDeBecado();
void calcularYMostrarDeuda();
void mostrarAlumnos();

void main()
{
    
    int opcion = 0;

    do
    {
        printf("Menu:");
        printf("\n1- Cargar los alumnos.");
        printf("\n2- Modificar la condici%cn de becado de un alumno.", 162);
        printf("\n3- Mostrar el total de la deuda.");
        printf("\n4- Listado de alumnos.");
        printf("\n5- Salir.\n\n");
        scanf("%d", &opcion);
        while (opcion < 1 || opcion > 5)
        {
            printf("Ingreso un numero incorrecto\n");
            printf("Por favor vuelva a ingresarlo:\n");
            scanf("%i", &opcion);
        }

        if (opcion != 5)
        {
            switch (opcion)
            {
            case 1:
                cargarAlumnos();
                break;

            case 2:
                modificarCondicionDeBecado();
                break;

            case 3:
               calcularYMostrarDeuda();
                break;

            case 4:
                mostrarAlumnos();
                break;
            case 5:
                break;    
            }
        }
     } while (opcion != 5);   
 system("pause");  
}

void cargarAlumnos()
{
    
    printf("\n--Ingrese los datos de los alumnos--\n");
     
    printf("Cuantos alumnos quieres ingresar?\n");
    scanf("%i",&cantAlumnos);
    for (int i = 0; i < cantAlumnos; i++)
    {
       
        printf("Legajo del alumno %i:\n",i);
        scanf("%d", &legajos[i]);
        while (legajos[i] < 1000 || legajos[i] > 9999)
        {
            printf("Ingresaste mal el legajo\n");
            printf("Por favor vuelva a ingresarlo:\n");
            scanf("%d", &legajos[i]);
        }
        
        
        printf("Apellido del alumno: \n");
        scanf("%s", &apellidos[i]);

        printf("Nombre del alumno: \n");
        scanf("%s", &nombres[i]);
      

        printf("Adeuda cuota:\n0-NO\n1-SI\n");
        scanf("%i", &adeudanCuota[i]);
        while (adeudanCuota[i]< 0 || adeudanCuota[i]>1)
        {
            printf("Ingresaste mal el numero\n");
            printf("Por favor vuelva a ingresarlo:\n");
            scanf("%d", &adeudanCuota[i]);
        }
        
     
        printf("Becado:\n0-NO\n1-PARCIAL\n");
        scanf("%i", &becados[i]);
        while (becados[i]< 0 || becados[i]>1)
        {
            printf("Ingresaste mal el numero\n");
            printf("Por favor vuelva a ingresarlo:\n");
            scanf("%i", &becados[i]);
        }
        ++contador ;
    }
}

void modificarCondicionDeBecado()
{
    int legajoMod;
    int nuevaCondicion;
    int encontrado = 0;

    if (contador == 0)
    {
        printf("No hay alumnos cargados\n");
    }
    else
    {
        printf("Legajo del alumno: \n");
        scanf("%d", &legajoMod);
        while (legajoMod < 1000 || legajoMod > 9999)
        {
            printf("Ingresaste mal el legajo\n");
            printf("Por favor vuelva a ingresarlo:\n");
            scanf("%d", &legajoMod);
        }
        validar = 0;
        i = 0;
        while (i < cantAlumnos && validar != 1)
        {
            if (legajoMod == legajos[i])
            {
                printf("Ingrese la nueva condicion\n");
                scanf("%i", &nuevaCondicion);
                while (nuevaCondicion < 0 || nuevaCondicion > 1)
                {
                    printf("Ingresaste mal el numero\n");
                    printf("Por favor vuelva a ingresarlo:\n");
                    scanf("%i", &nuevaCondicion);
                    becados[i] = nuevaCondicion;
                }
                
                validar = 1;
            }
          ++i;
        }
        if (validar == 0)
        {
            printf("Legajo inexistente...\n");
        }
    }
}

void calcularYMostrarDeuda()
{
    int valorCuota = 9000;
    int deudaTotal = 0;
    int deudaBecado=0;
    printf("\n--Deuda de los alumnos--\n");
    if (contador == 0)
    {
        printf("No hay alumnos cargados\n");
    }
    else
    {
        for ( i = 0; i < cantAlumnos; i++)
        {
            if (adeudanCuota[i]==1 && becados[i]==1)
            {
                deudaTotal= deudaTotal + valorCuota/2;
            }
            else if (adeudanCuota [i]== 1)
            {
                deudaTotal= deudaTotal + valorCuota;
            }
            
        }
        printf("La deuda total es: %i pesos\n", deudaTotal);
    }
   
}

void mostrarAlumnos()
{
    if (contador == 0)
    {
        printf("No hay alumnos cargados\n");
    }
    else
    {
        printf("\n--Listado de alumnos--\n");
        for (int i = 0; i < cantAlumnos; i++)
        {
            printf("Legajo: %i\n", legajos[i]);
            printf("Apellido: %s\n", apellidos[i]);
            printf("Nombre: %s\n", nombres[i]);
            if (adeudanCuota[i] == 1)
            {
                printf("Adeuda Cuota: SI\n");
            }
            else
            {
                printf("Adeuda Cuota: NO\n");
            }

            if (becados[i] == 1)
            {
                printf("Beca: Parcial\n");
            }
            else
            {
                printf("Beca: NO\n");
            }
            printf("\n");
        }
    }
}
