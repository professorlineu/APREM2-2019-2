/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Lista 3 Exercício 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int iidade = 0;
    float fcontagem1 = 0;
    int ipeso= 0 ;
    float faltura=0;
    float fcontagem2 = 0;
    float f2alt =0 ;
    float fcontagem3 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Informe a idade, o peso e a altura de 5 pessoas,consecutivamente:  " <<endl;

    while (i < 5)
    {
        cout << "Digite a " << i + 1 << "° idade: ";
        cin >> iidade;
        cout << " 0 "<< i+1<<"° peso: ";
        cin >> ipeso;
        cout << " e a "<< i+1<<"° altura: ";
        cin >> faltura;
        i=i + 1;
    if(iidade > 50)
    {
        fcontagem1++;
    }
    else if(iidade>10 && iidade<20)
    {
        f2alt=f2alt + faltura;
        fcontagem2++;
    }

    if (ipeso< 40)
    {
        fcontagem3++;
    }
    }
    cout << "A quantidade de pessoas superiores a 50 anos é de : " << fcontagem1  <<endl;
    cout << "A média das alturas das pessoas com idade entre 10 a 20 anos é de: " << f2alt/fcontagem2  <<endl;
    cout << "A porcentagem de pessoas com peso inferior a 40KG entre todas as pessoas analisadas é de : " << (fcontagem3*100)/5;
    cout << "%"  <<endl;



    return 0;
}
