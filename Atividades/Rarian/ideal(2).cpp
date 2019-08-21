/**********************************************************
- Autor:     Rarian
- Descrição: Lista 2 ex 19
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int iN1 = 0;
    float fAltura = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Homem = 1\n";
    cout << "Mulher = 2\n";

    cout << "Digite o número que indica o seu sexo: ";
    cin >> iN1;

    cout << "Digite a sua altura em metros: ";
    cin >> fAltura;

    cout << "O seu peso ideal é de ";

    if (iN1 <= 1)
    {
        cout <<  (72.7*fAltura)-58 << " quilogramas.";
    }

    else if (iN1 <= 2)
    {
        cout << (62.1*fAltura)-44.7 << " quilogramas.";
    }
    return 0;
}
