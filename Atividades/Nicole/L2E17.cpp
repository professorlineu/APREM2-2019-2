/**********************************************************
- Autor:     Nicole Oska
- Descrição: Exercício 17
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
     
     int iSenha = 0;
     
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " Digite sua senha de 4 dígitos ";
    cin  >> iSenha;

if ( 4531 == iSenha )
{
  cout << " Senha correta! "
       << endl;
}

else 
{
 cout << "  Acesso negado "
       << endl;
}

return 0;

}
