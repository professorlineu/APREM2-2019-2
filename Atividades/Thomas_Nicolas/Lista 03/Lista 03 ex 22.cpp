/**********************************************************
- Autor:     Seu nome
- Descrição: Breve descrição do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 0;
    float idade = 1;
    float altura = 0;
    float itotal = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while (idade > 0)
    {
        idade = 0;
        cout << "Digite a idade: ";
        cin >> idade;
        cout << "Digite a altura: ";
        cin >> altura;

            if (idade > 50)
               {
                i+=1;
                itotal = altura+itotal;
               }
    } //fim do while

        cout << "A média das alturas das pessoas com mais de 50 anos é: " << (itotal)/i;


    return 0;
}
