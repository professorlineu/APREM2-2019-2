/**********************************************************
- Autor:     Nicole Oska
- Descrição: Exercício 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
     
     float fNot1 = 0;
     float fNot2 = 0;
     float fNotaFin = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " Qual a primeira nota? ";
    cin  >> fNot1;
    
    cout << " Qual a segunda nota? ";
    cin  >> fNot2;
    
    fNotaFin = (fNot1 + fNot2)/2;
    
    cout << "A sua média aritmética final é "
         << fNotaFin 
         << endl; 

if (fNotaFin < 3)
{
  cout << " Reprovado... "
       << endl;
}

else if (fNotaFin < 7)
{
  cout << " Ainda da para recuperar!"
       << endl;
}

else 
{
  cout << "Aprovado!!"
       << endl;
}

return 0;

}
