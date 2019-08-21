/**********************************************************
- Autor:     Yasmin Sena
- Descrição: Preço do carro
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fcarro = 0;
    float fpreco1 = 0;
    float fpreco2 = 0;
    float fpreco3 = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o custo de fábrica do carro: ";
    cin >> fcarro;

    fpreco1 = (0.05 * fcarro) + fcarro;
    fpreco2 = (0.10 * fcarro) +(0.15 *fcarro) + fcarro;
    fpreco3 = (0.15 * fcarro) +(0.20 *fcarro) + fcarro;
    
    if (fcarro <12001)
    {
        cout << "Com o ajuste da distribuidora e dos impostos, o novo preçoo do carro será de " 
        <<fpreco1
        <<" reais."
        << endl;
    }
    else if (fcarro < 25001)
    {
        cout << "Com o ajuste da distribuidora e dos impostos, o novo preçoo do carro será de " 
        << fpreco2
        <<" reais"
        << endl;
    }
   
    else
    {
        cout << "Com o ajuste da distribuidora e dos impostos, o novo preçoo do carro será de "
        <<fpreco3
        <<" reais"
         << endl;
    }

    return 0;
}
