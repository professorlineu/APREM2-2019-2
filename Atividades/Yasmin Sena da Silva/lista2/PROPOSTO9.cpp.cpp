/**********************************************************
- Autor:     Yasmin Sena
- Descrição: CRÉDITO ESPECIAL
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fsaldo = 0;
    float fcredito1 = 0;
    float fcredito2 = 0;
    float fcredito3 = 0;
    float fcredito4 = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o saldo médio: ";
    cin >> fsaldo;
    cout << "saldo médio em reais: "
         << fsaldo;        
         
         fcredito1= 0.1 * fsaldo;
         fcredito2= 0.2 * fsaldo;
         fcredito3= 0.25 * fsaldo;
         fcredito4= 0.3 * fsaldo;

    if (fsaldo <201)
    {
        cout << " Você possui um crédito especial de " 
        << fcredito1
        << " reais."
        << endl;
    }
    else if (fsaldo < 301)
    {
        cout << "Você possui um crédito especial de " 
        << fcredito2
        << " reais."
        << endl;
    }
   else if (fsaldo < 401)
    {
        cout << "Você possui um crédito especial de " 
        << fcredito3
        << " reais."
        << endl;
    }
   
    else
    {
       cout << "Você possui um crédito especial de " 
        << fcredito4
        << " reais."
        << endl;
    }

    return 0;
}
