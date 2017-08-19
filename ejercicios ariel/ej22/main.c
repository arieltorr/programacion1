#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*/22.	Diseñar el programa necesario para que habiéndose leído el valor de 2 variables NUM1 y NUM2
       se intercambien los valores de las variables, es decir que el valor que tenía NUM1 ahora lo contenga NUM2 y viceversa/*/

       int num1;
       int num2;
       int viceversa; //genero un auxiliar para poder tener un backup del primer valor y poder ocupar su selda sin pisarlo//

       printf("ingrese num1 : ");
       scanf("%d", &num1);

       printf("ingrese num2 : ");
       scanf("%d",&num2);

       viceversa= num1;
       num1=num2;
       num2=viceversa;

       printf("los numero invertidos son: %d y %d", num1,num2 );








}
