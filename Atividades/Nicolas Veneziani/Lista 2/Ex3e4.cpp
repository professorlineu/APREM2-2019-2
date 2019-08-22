/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 3 e 4 dos propostos (Lista 2).
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



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite qualquer número: ";
    cin >> fN1;

    cout << "Digite outro número: ";
    cin >> fN2;






    if (fN1 > fN2)
    {
        cout << "\n O número " << fN1;
        cout << " é maior que " << fN2;
    }
    else if (fN2 > fN1)
    {
        cout << "\nO número " << fN1;
        cout << " é menor que " << fN2;
    }
    else if (fN2 = fN1)
    {
        cout << "\nOs números ";
        cout << "são iguais";
    }


    return 0;
}
