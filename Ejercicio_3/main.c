/*3. Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres como parámetro
y su responsabilidad es ordenarlos caracteres de manera ascendente dentro de la cadena.
Ejemplo si le pasamos "algoritmo" la deja como "agilmoort"
*/
#include <stdio.h>
#include <stdlib.h>

void ordenarCadena(char* cadena)
{
    int len = 0;
    char aux;
    while(cadena[len]!='\0')
    {
        len+=1;
    }
    for(int i = 0; i < len; i++)
    {
        for(int j = i+1; j < len; j++)
        {
            if(cadena[i] > cadena[j])
            {
                aux = cadena[i];
                cadena[i] = cadena[j];
                cadena[j] = aux;
            }
        }
    }
}


int main()
{
    char c[80] = "algoritmo";
    ordenarCadena(c);
    printf("%s\n", c);
}
