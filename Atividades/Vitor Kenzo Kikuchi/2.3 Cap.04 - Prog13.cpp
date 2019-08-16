/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 05 - Este programa recebe dois dois números e te dá opções do que fazer com eles.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fNumber1 = 0;
float fNumber2 = 0;
int iOpcao = 0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F0
           ");

    //Código do programa
cout << "Forneça o primeiro número: ";
cin >> fNumber1;

cout << "Digite o segundo número: ";
cin >> fNumber2;

cout << "Se você deseja saber a média dos números digitados, digite 1."
     << endl;

cout << "Caso você queira saber a diferença do maior pelo menor, digite 2."
     << endl;

cout << "Para saber o produto entre os dois números, digite 3."
     << endl;

cout << "E se você quiser saber a divisão do primeiro pelo segundo, digite 4."
     << endl;

cout << "então...? ";
cin >> iOpcao;

if (iOpcao == 1)
{
cout << "A média desses números é igual a "
     << (fNumber1 + fNumber2)/2
     << endl;
}
else if (iOpcao == 2 && fNumber1 >= fNumber2 )
{
cout << "A diferença do maior pelo menor é igual a "
     << fNumber1 - fNumber2
     << endl;
}
else if (iOpcao == 2 && fNumber2 >= fNumber1 )
{
cout << "A diferença do maior pelo menor é igual a "
     << fNumber2 - fNumber1
     << endl;
}
else if (iOpcao == 3)
{
cout << "O produto entre esses dois números é igual a "
     << fNumber1*fNumber2
     << endl;
}
else
{
cout << "O quociente é igual a "
     << fNumber1 / fNumber2
     << endl;
}

    return 0;
}
