/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 2 dos propostos (Lista 2).
**********************************************************/
 #include <iostream>
 #include <locale.h>
 #include <cstdlib>
 #include <cmath>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fNotaP1 = 0;
    float fNotaP2 = 0;
    float fMed = 0;




    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite a nota obtida na P1: ";
    cin >> fNotaP1;

    cout << "Digite a nota obtida na P2: ";
    cin >> fNotaP2;

    fMed = (fNotaP1+fNotaP2)/2;

    cout << "\n Sua média foi de: " << fMed;

    if (fMed >= 7.0)
    {
        cout << "\n>>> Parabéns, você está aprovado\n";
    }
    else if (fMed < 7.0 && fMed >= 3.0)
    {
        cout << "\n>>> Você está de exame\n";
    }

    else if (fMed < 3.0)
    {
        cout << "\n>>> Você está reprovado\n";
    }



    return 0;
}
