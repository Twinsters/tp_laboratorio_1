#include "funciones.h"
/** \brief Toma los dos numeros  ingresados  como parametros.
 *
 * \param sumar= a +b; Realiza la suma de los parametros tomados.

 * \return sumar.
 *
 */

int sumar(int a, int b)
{

    int sumar;
    sumar= a +b;
    return sumar;

}
/** \brief Toma los dos numeros  ingresados  como parametros.
 *
 * \param restar= a -b; Realiza la resta de los parametros tomados.
 * \return restar
 *
 */

int restar(int a,int b)
{
    int restar;
    restar= a -b;
    return restar;
}
/** \brief Toma los dos numeros  ingresados  como parametros.
 *
 * \param divi= a / b; Realiza la division de los parametros tomados.
 * \return divi.
 *
 */

float divi(float a, float b)
{
    float divi;
    divi= a / b;
    return divi;
}
/** \brief Toma los dos numeros  ingresados  como parametros.
 *
 * \param multi= a * b; Realiza la multiplicacion de los paramatros tomados.
 * \return multi.
 *
 */

int multi(int a,int b)
{
    int multi;
    multi= a * b;
    return multi;
}
/** \brief Toma el numero A como parametro.
 *
 * \param if( a<0); si el numero es igual o menor a 0 entra en la variable.
 * \param factorizar= a * factor(a - 1); Realiza la factorizacion del numero A ingresado.
 * \return factorizar ; solo si el numero es mayor a 0 sino va a error
 *
 */

int factor(int a)
{
    int factorizar;
    if( a<0)
    {
        return 1;
    }
    else
    {

        factorizar= a * factor(a - 1);
        return factorizar;

    }

}

