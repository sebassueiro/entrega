#include <stdio.h>
#include <stdlib.h>


void main () 
{
    int opcion, i,tiempo,edad, acumEdad , carrera, acumCarrera , trabajo ,acumTrabajo, fulltime , parttime;
    float promedio ;

    printf("Si desea saber el promedio de sus alumnos ingrese 1 \n");
    printf("Si desea saber si estudio otra carrera ingrese 2 \n");
    printf("Si desea saber si trabaja actualmente ingrese 3 \n") ;
    scanf("%i", &opcion);

    while (opcion<1 || opcion>3)
    {
        printf("Ingresaste mal la opci%cn \n" ,162);
        printf("Por favor vuelva a ingresarla \n");
        scanf("%i", &opcion);
    }

    switch (opcion)
    {
    case 1: 
    acumEdad=0;
    edad=0;
    promedio=0;
    for ( i = 1; i <21; i++)
    {
        printf("Ingrese la edad del alumno %i: \n", i);
        scanf("%i", &edad);

        while (edad<1)
        {
            printf("Ingresaste mal la edad, vuelve a ingresarla \n");
            scanf("%i",&edad);
            
        }
        acumEdad= acumEdad+edad;
    }
        promedio=acumEdad/20;
        printf("El promedio de edad que hay en el curso es de %f \n" ,promedio);
        break;
    
   case  2:
   acumCarrera=0;
   for ( i = 1; i <21; i++)
   {
    printf("El alumno %i anteriormente estudio otra carrera%c \n", i , 63);
    printf("Responder 1-SI o 2-NO \n");
    scanf("%i", &carrera);

    while (carrera<1 || carrera>2 )
    {
        printf("Ingresaste mal la respuesta, vuelve a ingresarla \n");
        scanf("%i", &carrera);
    }
    
    if (carrera==1)
    {
        acumCarrera=acumCarrera+1; 
    }
    else 
    {
        acumCarrera=acumCarrera+0;
    }
    
   }
   printf("La cantidad de alumnos que estudiaron otra carrera anteriormente son %i \n", acumCarrera);
    break;
    case 3:
    acumTrabajo=0;
    fulltime=0;
    parttime=0;
    for ( i = 1; i <21; i++)
    {
        printf("Ingrese 1-si tu alumno trabaja o 2-si no trabaja \n");
        scanf("%i", &trabajo);

        while (trabajo<1 || trabajo>2 )
        {
            printf("Ingresaste mal la opcion, vuelve a ingresarla \n");
            scanf("%i", &trabajo);
        }
        if (trabajo==1)
        {
            acumTrabajo=acumTrabajo+1;
        }
        if (trabajo==1)
        {
            printf("Este alumno trabaja full time o part time (ingrese 1-full time o 2-part time) \n");
            scanf("%i", &tiempo);
        }
        if (tiempo==1)
        {
            fulltime= fulltime + 1;
        }
        else if (tiempo==2)
        {
            parttime= parttime+1;
        }
    }
    printf("La cantidad de alumnos que trabajan son %i y los que trabajan fulltime son %i y los que trabajan part time son %i \n", acumTrabajo , fulltime, parttime);
        break;
    }
    
    system("pause");
}