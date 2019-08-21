/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Lista 2 - Proposto 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fcusto = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o custo de fábrica do carro: ";
    cin >> fcusto;
       
    if (fcusto < 12001)
    {
        cout << "O preço do carro novo para o consumidor é : " 
            << fcusto + (fcusto * 0.05)    
            << " reais "
        << endl;
    }
    else if (fcusto < 25001)
    {
        cout << "O preço do carro novo para o consumidor é : " 
            << fcusto + (fcusto * 0.10) + (fcusto * 0.15) 
            << " reais "
        << endl;
    } 
    else
    {
       cout << "O preço do carro novo para o consumidor é : " 
           << fcusto + (fcusto * 0.15) + (fcusto * 0.20)
           << " reais " 
       << endl;
    }
    return 0;
}



