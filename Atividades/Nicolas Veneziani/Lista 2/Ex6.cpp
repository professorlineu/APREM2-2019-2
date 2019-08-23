/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 6 dos propostos (Lista 2).
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

    cout << "\n\nDigite o outro número: ";
    cin >> fN2;

    cout << "\n\nEscolha a operação: ";
    cout << "\n 1 = O primeiro número elevado ao segundo número.\n";
    cout << " 2 = Raiz quadrada de cada um dos números.\n ";
    cout << "3 = Raiz cúbica de cada um dos números.\n ";


    cout << "\nVocê deseja: ";
    cin >> iEsc;




switch(iEsc)
    {
        case 1:
            cout << "O primeiro número elevado ao segundo é " << pow(fN1,fN2);
            break;
        case 2:
            cout << "A raiz quadrada do primeiro é " << sqrt (fN1) << " e do segundo é " << sqrt(fN2);
            break;
        case 3:
            cout << "A raiz cúbica do primeiro é " << cbrt (fN1) << " e do segundo é " << cbrt (fN2);
            break;
        default:
            cout << "\n\nValor inválido\n";
    }

    return 0;

}





