/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 17 - Esse programa diz se seu acesso está liberado ou não com uma senha (6753).
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    //Declaração de variáveis
float fSenha = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color 8F");

    //Código do programa

cout << "\n\n"
     << "              ___________\n"
     << "              |---------|\n"
     << "              | 1  2  3 |\n"
     << "              | 4  5  6 |\n"
     << "              | 7  8  9 |\n"
     << "              |    0    |\n"
     << "              |---------|\n\n"
     << endl;

cout << "    Digite a senha de quatro digitos:\n\n";
cout << "                 ";
cin  >> fSenha;

if (fSenha == 6753)

{
cout << "\n            Acesso Liberado!"
     << "\n\n        (Para absolutamente nada)\n\n\n\n"
     << endl;
}
else
{
cout << "\n             Acesso Negado.\n\n\n\n"
     << endl;
}


    return 0;
}
