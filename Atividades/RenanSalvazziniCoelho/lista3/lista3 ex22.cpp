/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Lista 3 Exercício 22
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iidade = 1;
    float faltura= 0;
    float falt =0;
    float fcontagem1=0;
    int ia=0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Informe a idade e a altura consecutivamente, por fim, terá a média da altura das pessoas com mais de 50 anos" <<endl;

    while (iidade > 0)
    {
        cout << "Digite a " << ia + 1 << "° idade: ";
        cin >> iidade;
        cout << " e "<< ia+1<<"° altura: ";
        cin >> faltura;
        ia=ia+1;
    if(iidade > 50)
    {
        falt=falt + faltura;
        fcontagem1=fcontagem1+1;
    }// if

    } // while
    cout << "A média das alturas é de: " << falt/fcontagem1  <<endl;


    return 0;
}


