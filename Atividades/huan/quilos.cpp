#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
  float fQuilo = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
   cout << "Digite a sua massa em quilos: ";
   cin >> fQuilo;

   cout << "A sua massa em gramas é de " << fQuilo*1000 << ".";



    return 0;
}
