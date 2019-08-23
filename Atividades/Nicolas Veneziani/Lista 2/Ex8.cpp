/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 8 dos propostos (Lista 2).
**********************************************************/
 #include <iostream>
 #include <locale.h>
 #include <cstdlib>
 #include <cmath>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fSal = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o valor do seu salário: ";
    cin >> fSal;



    if (fSal <= 300)
    {
        cout << "\n Seu salário reajustado é de: " << (0.35*fSal)+fSal;
        cout << " reais " ;
    }
    else if (fSal > 300)
    {
        cout << "\nSeu salário reajustado é de: " << (0.15*fSal)+fSal;
        cout << " reais ";
    }




    return 0;

}





