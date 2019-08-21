/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Lista 2 - Proposto 9
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fsalario = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite seu salário em reais : ";
    cin >> fsalario;

    if (fsalario < 301)
    {
        cout << "Você terá um aumento de 15 porcento, sendo esse  " 
            << fsalario * 0.15    
            << " reais.  Seu novo salário é de "
            << fsalario * 1.15
            <<" reais"
        << endl;
    }
    else if (fsalario < 600)
    {
       cout << "Você terá um aumento de 10 porcento, sendo esse  " 
            << fsalario * 0.10    
            << " reais.  Seu novo salário é de "
            << fsalario * 1.10
            << " reais"
        << endl;    
    } 
    else if (fsalario < 901)
    {
      cout << "Você terá um aumento de 5 porcento, sendo esse  " 
            << fsalario * 0.05    
            << " reais.  Seu novo salário é de "
            << fsalario * 1.05
            <<" reais"
        << endl;
    }
    else
    {
         cout << "Você terá um aumento de 0 porcento, sendo esse  " 
            << fsalario * 0.0   
            << " reais.  Seu novo salário é de "
            << fsalario * 1
            <<" reais"
        << endl;
    }
    return 0;
}



