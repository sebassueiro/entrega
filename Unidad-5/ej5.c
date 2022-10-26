#include <stdio.h>
#include <stdlib.h>

/*
5. Dado el vector inflación {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9}
Cada ítem del vector representa la inflación de un mes de tal manera que el primer
ítem del vector que es 0.8 representa la inflación de Enero, y el último ítem del vector
que es 0.9 representa la inflación de diciembre. Se pide:
- Informar la inflación anual
- Informar la inflación más baja, junto con el nro. de mes. Por ejemplo: Mes 2 = 0.1
- Informar la inflación más alta, junto con el nro. de mes. Por ejemplo: Mes 12 = 0.9
*/

void main()
{
    float inflacion[12] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    float total= 0, promedio= 0 ;
    float baja=inflacion[0], alta=inflacion[0];
    int baja1=0 , alta1=0;

    for (int i = 0; i < 12; i++)
    {
        total = total + inflacion[i];
    }
    promedio = total/12;
    printf ("Inflacion anual : %f\n", promedio);
    for (int i = 1; i < 12; i++)
    {
       if ( baja>inflacion[i])
       {
            baja = inflacion[i];
            baja1 = i;
       }
       if (alta<inflacion[i])
       {
            alta = inflacion[i];
            alta1 = i;
       }
    }
    printf ("Inflacion mas baja: Mes %i = %f\n", baja1+1, baja);
    printf ("Inflacion mas alta: Mes %i = %f\n", alta1+1, alta);
}