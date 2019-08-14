/**********************************************************
- Autor:     Milene Caroline B. D. Chaves
- Descrição: Tabuada
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
      int isub=0;
      int iangulo1=0;
      int iangulo2=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color B5");

    cout<< " ângulo 1:" ;
    cin>> iangulo1;
    cout<< " ângulo 2:" ;
    cin>> iangulo2;

    isub=180-iangulo1+iangulo2;

    cout << "o terceiro ângulo é: " << isub << endl;




    //Código do programa







    return 0;
}
