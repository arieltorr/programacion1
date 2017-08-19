#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*/3.	Escribir  un programa que realice las siguientes acciones
•	Limpie la pantalla
•	Asigne a 2 variables numero1 y numero2 valores distintos de cero
•	Efectúe el producto de dichas variables
•	Muestre el resultado pos pantalla
•	Obtenga el cuadrado de numero1 y lo muestre par pantalla/*/
    int num1,num2;
    int producto;
    int cuadrado;

    printf("ingrese primer numero: ");
    scanf("%d",&num1);
     system("cls");

    while (num1==0)
        {
        printf("reingrese primer numero : ");
        scanf("%d",&num1);

        }
    printf("ingrese segundo numero: ");
    scanf("%d",&num2);
     system("cls");


    while (num2==0)
        {
        printf("reingrese segundo numero : ");
        scanf("%d",&num2);
        }

    producto=num1*num2;
    printf("el producto de ambos numeros es : %d\n", producto);
    system("PAUSE");
    system("cls");

    cuadrado=num1*num1;
    printf("el cuadrado de el primer numero es %d", cuadrado);



}
