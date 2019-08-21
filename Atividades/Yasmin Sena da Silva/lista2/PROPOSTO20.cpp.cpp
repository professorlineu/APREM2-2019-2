/**********************************************************
- Autor:     Yasmin Sena
- Descrição: Categoria de Natação
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iidade = 0;
    
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite a sua idade: ";
    cin >> iidade;

    if (iidade <5)
    {
        cout << "Você não possui idade suficiente para entrar em uma categoria de natação. " 
        << endl;
    }
    else if (iidade < 8)
    {
        cout << "Sua categoria na natação é: INFANTIL. " 
        << endl;
    }
   else if (iidade < 11)
    {
        cout << "Sua categoria na natação é: JUVENIL. " 
        << endl;
    }
    else if (iidade < 16)
    {
        cout << "Sua categoria na natação é: ADOLESCENTE. " 
        << endl;
    }
     else if (iidade < 31)
    {
        cout << "Sua categoria na natação é: ADULTO. " 
        << endl;
    }
    else
    {
        cout << "Sua categoria na natação é: SÊNIOR. "
         << endl;
    }

    return 0;
}
