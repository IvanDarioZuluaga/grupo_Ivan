#include <stdio.h>
#include <stdlib.h>
#include <string.h>                         //Se incluyó esta libreria para el manejo de strings.
//Rama Master Final
int main()
{
    int i;
    char cadena_hola[] = "Hello Git_Hub";   //Introduccion de una cadena de caracteres.
    char cadena[] = "Este es el numero:";   //Indicadores de numero.
    printf("\t\t%s\n\n", cadena_hola);
    for (i=0;i<5;i++)
    {
        printf("\n%s\t", cadena);
        printf("%0.3d \n",i+1);             //Se añadieron ceros a los numeros a mostrar.
    }
    return 0;
    int x=5+5;
}
