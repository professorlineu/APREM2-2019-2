/********************************************************

- Autor: João Pedro Neves Baldin

- Descrição: Lista 01 - Exercício 01

********************************************************/

#include <stdio.h>

int main()
{
    float num1, num2, sub;

    printf("Digite o primeiro numero: " );
    scanf("%f", &num1);

    printf("Digite o segundo numero: " );
    scanf("%f", &num2);

    //Subtração
    sub = num1 - num2;



    printf("%.2f - %.2f = %.2f\n", num1, num2, sub);

}
