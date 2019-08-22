/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 1 dos propostos (Lista 2).
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
    int iEsc;





    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o primeiro número: ";
    cin >> fN1;

    cout << "Digite o outro número: ";
    cin >> fN2;

    cout << "\n\nEscolha a operação: ";
    cout << "\n 1 = Média entre os números digitados.\n";
    cout << " 2 = Diferença do maior pelo menor.\n ";
    cout << "3 = Produto entre os números digitados.\n ";
    cout << "4 = Divisão do primeiro pelo segundo.\n\n ";

    cout << "Você deseja: ";
    cin >> iEsc;


switch(iEsc)
    {
        case 1:
            cout << "A média é: " << (fN1+fN2)/2;
            break;
        case 2:
            cout << "A diferença é: " << fN1-fN2;
            break;
        case 3:
            cout << "O produto é: " << fN1*fN2;
            break;
        case 4:
            cout << "A divisão é: " << fN1/fN2;
            break;
        default:
            cout << "Valor inválido\n";
    }

    return 0;

}





