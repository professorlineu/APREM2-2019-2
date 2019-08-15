/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 2 dos propostos.
**********************************************************/
 #include <iostream>
 #include <locale.h>
 #include <cstdlib>


using namespace std;

int main()
{
    //Declaração de variáveis
    int iNum1 = 0;
    int iNum2 = 0;
    int iNum3 = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");


    //Código do programa
    cout << "Digite um número: ";
    cin >> iNum1;

    cout << "Digite outro número: ";
    cin >> iNum2;

    cout << "Digite outro número: ";
    cin >> iNum3;



    cout << "O Produto é: " << iNum1 * iNum2 * iNum3;



    return 0; 
}
