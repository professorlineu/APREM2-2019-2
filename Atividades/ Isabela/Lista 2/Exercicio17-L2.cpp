/**********************************************************
- Autor: Isabela Aparecida de Souza
- Descrição: Senha EX17
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
  //  int iSenha = 4531;
    int iNumero = 0;

    setlocale (LC_ALL,"");
    system("COLOR F6");

    cout <<"Digite sua senha: ";
    cin >> iNumero;


   if ( iNumero == 4531 )
    cout << "Senha Correta." << endl;

   else
        cout << "Senha Incorreta! " << endl;

}
