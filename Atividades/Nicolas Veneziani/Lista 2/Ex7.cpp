/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 7 dos propostos (Lista 2).
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


    cout << "\n\nO valor do seu salário reajustado é de: " << (0.3*fSal)+fSal << " reais" ;





    return 0;

}





