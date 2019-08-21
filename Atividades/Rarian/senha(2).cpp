/**********************************************************
- Autor:     Rarian
- Descrição: Lista 2 ex 17
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int iN1 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

   cout << "Digite a senha: ";
   cin >> iN1;

   cout << "Senha ";

   if (iN1 < 4531)
   {
       cout << "incorreta. Tente novamente.";
   }

   else if (iN1 <= 4531)
   {
       cout << "correta.";
   }

   else if (iN1 > 4531)
   {
       cout << "incorreta. Tente novamente.";
   }
    return 0;
}
