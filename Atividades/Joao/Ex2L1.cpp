
/********************************************************
- Autor: João Pedro Neves Baldin

- Descrição: Lista 01 - Exercício 023
********************************************************/

#include <stdio.h>

int main()
{
    float num1, num2, num3, mult;

    printf("Digite o primeiro numero: " );
    scanf("%f", &num1);

    printf("Digite o segundo numero: " );
    scanf("%f", &num2);

     printf("Digite o terceiro numero: " );
    scanf("%f", &num3);


    //Multiplicaçao
    mult = num1 * num2 * num3;

    printf("%.2f * %.2f * %.2f = %.2f\n", num1, num2, num3, mult);

}
