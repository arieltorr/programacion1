#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[15];
    char apellido[18];
    char apenom[34];
    char aux[100];


    printf("ingrese el nombre : ");
    fflush(stdin);
    gets(aux);
    while(strlen(aux)>14)
    {
    printf("reingrese el nombre : ");
    fflush(stdin);
    gets(aux);
    }

    strcpy(nombre, aux );

    printf("ingrese el apellido : ");
    fflush(stdin);
    gets(aux);
    while(strlen(aux)>17)
    {
    printf("reingrese el apellido : ");
    fflush(stdin);
    gets(aux);
    }

    strcpy(apellido, aux );

    strcat(apenom,apellido);
    strcat(apenom,", ");
    strcat(apenom,nombre);

    (apenom[0]);


    //printf("Hello world!\n");
    return 0;
}
