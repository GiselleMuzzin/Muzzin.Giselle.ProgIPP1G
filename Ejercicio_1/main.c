/*
1. Dada una estructura ePais cuyos campos son id(int), nombre(20 caracteres), infectados(int),
recuperados(int) y muertos(int). Desarrollar una función llamada actualizarRecuperados
que reciba el país y los recuperados del dia y que acumule estos a los que ya tiene el país.
La función no devuelve nada. *
*/
#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int id;
    char nombre [20];
    int infectados;
    int recuperados;
    int muertos;
} ePais;

void actualizarRecuperados(ePais* pais, int recuperados)
{
    (*pais).recuperados += recuperados;
}

int main()
{
    ePais ep;
    ep.recuperados = 10;
    actualizarRecuperados(&ep, 7);
    printf("%d\n", ep.recuperados);
}
