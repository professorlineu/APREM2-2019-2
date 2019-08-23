/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 4 dos propostos (Lista 2).
**********************************************************/
 #include <iostream>
 #include <locale.h>
 #include <cstdlib>
 #include <cmath>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fN1 = 0;
    float fN2 = 0;
    float fN3 = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "\n\nDigite qualquer número: ";
    cin >> fN1;

    cout << "\n\nDigite o segundo número diferente do primeiro: ";
    cin >> fN2;

    cout << "\n\nDigite o terceiro número diferente do primeiro e do segundo: ";
    cin >> fN3;





    if (fN1 > fN2 && fN1 > fN3)
    {
        cout << "\n O número " << fN1;
        cout << " é o maior " ;
    }
    else if (fN2 > fN1 && fN2 > fN3)
    {
        cout << "\nO número " << fN2;
        cout << " é o maior ";
    }
    else if (fN3 > fN1 && fN2 < fN3)
    {
        cout << "\nO número " << fN3;
        cout << " é o maior ";
    }



    return 0;
}
