/**********************************************************
- Autor:     Thomas Nicolas
- Descrição: ex 02
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int inota1 = 0;
    int inota2 = 0;
    int inota3 = 0;
    int inota4 = 0;
    int imedia = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite as suas 4 notas : " <<endl;
    cin >> inota1;
    cin >> inota2;
    cin >> inota3;
    cin >> inota4;

    imedia = (inota1+inota2+inota3+inota4)/4;

    cout << "Sua media é " << imedia << endl;

    if (imedia < 7)
    {
        cout << "infelizmente voce foi reprovado :( " << endl;
    }
    else
    {
        cout << "PARABENS voce foi aprovado :)"<<endl;
    }

    return 0;
}
