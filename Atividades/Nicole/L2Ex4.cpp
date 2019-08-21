/**********************************************************
- Autor:     Nicole Oska
- Descrição: Exercício 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
     
     float fNum1 = 0;
     float fNum2 = 0;
     float fNum3 = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " Escolha um número: ";
    cin  >> fNum1;
    
    cout << " Outro: ";
    cin  >> fNum2;

    cout << " Só mais um: ";
    cin >> fNum3;

if (fNum1 > fNum2 && fNum2 > fNum3)
{
  cout << " O número "
       << fNum1
       << " é o maior!"
       << endl;
}

else if (fNum2 > fNum1 && fNum1 > fNum3)
{
 cout << " O número "
      << fNum2
      << " é o maior!"
      << endl;
}

else 
{
 cout << " O número "
      << fNum3
       << " é o maior!"
       << endl;
}

return 0;

}
