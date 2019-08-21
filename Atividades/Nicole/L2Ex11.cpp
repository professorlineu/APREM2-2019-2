/**********************************************************
- Autor:     Nicole Oska
- Descrição: Exercício 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

     float fSal = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " Qual é o seu salário? ";
    cin  >> fSal;

if (fSal <= 300)
{
  cout << " O seu salário reajustado será de "
       << fSal * 1.15
       << " reais."
       << endl;
}
else if (fSal < 600)
{
  cout << " O seu salário reajustado será de "
       << fSal * 1.10
       << " reais."
       << endl;
}
else if (fSal <= 900)
{
  cout << " O seu salário reajustado será de "
       << fSal * 1.05
       << " reais."
       << endl;
}
else
{
 cout << "  O seu salário continuará igual, burguês."
       << endl;
}

return 0;

}
