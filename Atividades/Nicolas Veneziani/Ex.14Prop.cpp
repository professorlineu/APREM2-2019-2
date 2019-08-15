/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 14 dos propostos.
**********************************************************/
 #include <iostream>
 #include <locale.h>
 #include <cstdlib>


using namespace std;

int main()
{
    //Declaração de variáveis
    int iNasc = 0;
    int iAnoAtual = 0;
    int iIdade = 0;
    int iMes = 0;





    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");


    //Código do programa
    cout << "Digite seu ano de nascimento: ";
    cin >> iNasc;

    cout << "Digite o ano atual: ";
    cin >> iAnoAtual;



    iIdade = iAnoAtual - iNasc;




    cout << "Você possui: " << iAnoAtual - iNasc; cout << " anos de idade ou ";

    cout <<                      iIdade * 12 ; cout << " meses de idade ou ";

    cout <<                      iIdade * 52 ; cout << " semanas de idade ou ";

    cout <<                      iIdade * 365 ; cout << " dias de idade. ";




    return 0;
}
