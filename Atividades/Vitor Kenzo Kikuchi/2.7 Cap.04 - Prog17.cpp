/**********************************************************
- Autor:     Seu nome
- Descrição: Breve descrição do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    //Declaração de variáveis
int iOpcao = 0;
int iNum1 = 0;
int iNum2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o primeiro número: ";
    cin  >> iNum1;
    cout << "\n";

    cout << "Digite o primeiro número: ";
    cin  >> iNum2;
    cout << "\n";

    cout << "--------------------------------------------\n\n";
    cout << "  1 - Potência (primeiro pelo segundo)\n\n";
    cout << "  2 - Raiz quadrada de cada um dos números\n\n";
    cout << "  3 - Raiz cúbica de cada um dos números\n\n";
    cout << "--------------------------------------------\n\n";

    cout << "Opção: ";
    cin >> iOpcao;

    if (iOpcao == 1)
    {
    cout << "\n"
         << iNum1
         << "^"
         << iNum2
         << " = "
         << pow(iNum1,iNum2)
         << endl;
    }
    else if (iOpcao == 2)
    {
    cout << "\n"
         << "Raiz quadrada de "
         << iNum1
         << " é igual a "
         << sqrt(iNum1)
         << "\n"
         << "E a raiz quadrada de "
         << iNum2
         << " é igual a "
         << sqrt (iNum2)
         << endl;
    }
    else if (iOpcao == 3)
    {
    cout << "\n"
         << "Raiz cúbica de "
         << iNum1
         << " é igual a "
         << cbrt (iNum1)
         << "\n"
         << "E a raiz cúbica de "
         << iNum2
         << " é igual a "
         << cbrt (iNum2)
         << endl;
    }
    else
    {
    cout << "\n"
         << "Opção inválida!"
         << endl;
    }

    return 0;
}
