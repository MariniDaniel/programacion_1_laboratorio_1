#include <stdio.h>
#include <stdlib.h>
#include <string.h>//Para usar strlen y otras str

int main()
{
    char nombre[20];
    char auxcad[50];

    printf("Ingrese su nombre: ");
    gets(auxcad);

    while(strlen(auxcad)>19)
    {
        printf("error,nombre demaciado largo. Reingrese nombre: ");
        gets(auxcad);
    }

    strcpy(nombre,auxcad);//Copio la auxcat a nombre.


    printf("Usted se llama %s\n\n",nombre);

    return 0;
}
