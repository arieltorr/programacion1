#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int dato;
    //dato= 7;
    //printf("el dato es %d",dato);
    //return 0;

    int entero;
    float flotante;
    char caracter;
    printf("ingrese un entero:");
    scanf("%d",&entero);
    printf("ingrese un flotante:");
    scanf("%f",&flotante);
    printf("ingrese un caracter:");
    //fflush(stdin);
    //scanf("%c", &caracter);
    caracter=getche();
    //entero=4;
    //flotante =3.29;
    //caracter= 'j';
    printf("\nel entero es %d\n el flotante es %.2f\n el caracter es %c", entero, flotante, caracter);
}
