/**********************************************************
- Autor:     Rarian
- Descrição: Passar em programação
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fNota1 = 0;
    float fNota2 = 0;
    float fNota3 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Para aqueles que não sabem se vão passar em programação \neste é o lugar certo para descobrir se vão chorar ou se vão sorrir.\n";

    cout << "Primeiro, digite a nota da avaliação individual: ";
    cin >> fNota1;

    cout << "Agora, digite a nota do projeto de aplicativo: ";
    cin >> fNota2;

    cout << "E por último, digite a nota de desenvolver e testar apps no GitHub: ";
    cin >> fNota3;

    float fNotaFinal = (fNota1*2+fNota2*3+fNota3*5)/10;

    cout << "A sua nota final é " << fNotaFinal << "." << endl;

    if (fNotaFinal < 4)
    {
        cout << "Infelizmente você reprovou em programação e terá que fazer dp." << endl;
    }

    else if (fNotaFinal < 6)
    {
        cout << "Você ficou de ifa então se esforça na prova final para não pegar dp." << endl;
    }

    else if (fNotaFinal < 11)
    {
        cout << " Parabéns por passar em programação XD." << endl;
    }
    return 0;
}
