/**********************************************************
- Autor:     Nicole Oska
- Descrição: Exercício 13
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

     float fPrec = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " Qual é o preço original do produto? ";
    cin  >> fPrec;

if (fPrec < 50)
{
  cout << " O produto passará custar "
       << fPrec * 1.05
       << " reais. Está barato!"
       << endl;
}
else if (fPrec <= 100)
{
  cout << " O produto passará custar "
       << fPrec * 1.10
       << " reais."
       << endl;
if (fPrec * 1.10 < 80)
{
    cout << " Está barato! "
       << endl;
}
else
       cout << " Até que está aceitável. "
       << endl;
}

else
{
 cout << " O produto passará custar "
       <<  fPrec * 1.15
       << " reais."
       << endl;

if (fPrec * 1.15 < 120)
{
    cout << " Até que está aceitável. "
       << endl;
}
else if (fPrec * 1.15 <= 200)
{
    cout << " Está caro. "
       << endl;
}
else
     {
    cout << " Está maluco? Muito caro. "
       << endl;
}
}

return 0;

}
