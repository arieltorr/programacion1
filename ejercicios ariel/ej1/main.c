#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*/ 1.	Ingresar 5 números y calcular su media/*/
    int contador; //este es el numero
    int acumulador=0; //se inicializa en 0 para no sumar basura
    float media; //esta variable es para guardar el resultado final

    for(int i=0;i<5;i++)
    {
        printf("ingrese un numero:"); //pido un numero al usuario
        scanf("%d",&contador); //
        acumulador= acumulador + contador  ; //a la variable acumulador le cargo el valor acumulado + el numero (contador)

    }
    media= (float)acumulador/5;
    printf("su media es : %.2f", media);


}
