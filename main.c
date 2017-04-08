#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "funciones.c"
int main()
{

    int a=0,b=0;
    char seguir='s';
    int opcion=0;
    int flagNum1= 0;
    int flagNum2= 0;
    int suma;
    int resta;
    float division;
    int multiplicacion;
    int factorizar;
    printf("Bienvenid@ a la caluladora de Claudio por favor ingrese dos numeros\n");
    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%d)\n",a);


        printf("2- Ingresar 2do operando (B=%d)\n",b);
        if(flagNum1==1 && flagNum2==1)
        {
            printf("3- Calcular la suma (%d+%d)\n",a, b);
            printf("4- Calcular la resta (%d-%d)\n",a, b);
            printf("5- Calcular la division (%d/%d)\n",a,b);
            printf("6- Calcular la multiplicacion (%d*%d)\n",a,b);
            printf("7- Calcular el factorial (%d!)\n",a);
            printf("8- Calcular todas las operaciones\n");


        }
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:


            scanf("%d",&a);


            flagNum1=1;
            break;
        case 2:

            scanf("%d",&b);
            flagNum2=1;
            break;
        case 3:

            suma=sumar(a,b);
            printf("El resultado es: %d\n",suma);

            break;
        case 4:

            resta= restar(a,b);
            printf("El resultado es: %d \n",resta);

            break;
        case 5:

            if(a!=0 && b!=0)
            {
                division= divi(a,b);
                printf("El resultado es: %.2f \n",division);
            }
            else
            {
                printf("No se puede dividir por 0\n");


            }

            break;
        case 6:
            multiplicacion =multi(a,b);
            printf("El resultado es: %d \n",multiplicacion);
            break;

        case 7:

            if(flagNum1==1)
            {
                if(a>0)
                {
                    factorizar= factor(a);
                    printf("El resultado es: %d \n",factorizar);
                }
                else
                {
                    printf("El numero debe ser positivo y mayor a cero\n");
                }


            }

            break;
        case 8:
            suma=sumar(a,b);
            resta=restar(a,b);
            if(b!=0)
            {
                division=divi(a,b);
                printf("El resultado de la division es: %.2f\n",division);
            }
            else
            {
                printf("No se puede dividir por 0\n");

            }
            multiplicacion=multi(a,b);
            printf("El resultado de la multiplicacion es: %d\n",multiplicacion);
            if(a>0)
            {
                factorizar=factor(a);
                printf("El resultado de la factorizacion es: %d\n",factorizar);
            }
            else
            {
                printf("El numero debe ser positivo y mayor de 0\n");
            }




            printf("El resultado de la suma es: %d\n",suma);
            printf("El resultado de la resta es: %d\n",resta);
            break;
        case 9:
            seguir = 'n';
            break;
        }
        system("PAUSE");
        system("cls");
    }


    return 0;
}
