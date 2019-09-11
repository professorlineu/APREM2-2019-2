/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Lista 3 Exercício 13
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
    float fcontagem2 = 0;
    float fcontagem3 = 0;
    float fcontagem4 = 0;
    int ipeso= 0 ;
    float fpeso1alt =0 ;
    float fpeso2alt =0 ;
    float fpeso3alt =0 ;
    float fpeso4alt =0 ;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Informe a idade e o peso de 15 pessoas,consecutivamente:  " <<endl;

    while (i < 15)
    {
        cout << "Digite a " << i + 1 << "° idade: ";
        cin >> iidade;
        cout << " e "<< i+1<<"° peso: ";
        cin >> ipeso;
        i=i + 1;

    if(iidade < 11)
    {
        fpeso1alt=fpeso1alt + ipeso;
        fcontagem1=fcontagem1+1;
    }
    else if(iidade< 21)
    {
        fpeso2alt=fpeso2alt + ipeso;
        fcontagem2=fcontagem2+1;
    }
    else if(iidade< 31)
    {
        fpeso3alt=fpeso3alt + ipeso;
        fcontagem3=fcontagem3+1;
    }
    else
    {
        fpeso4alt=fpeso4alt + ipeso;
        fcontagem4=fcontagem4+1;
    }
    }
    cout << "A média do peso da  primeira faixa etária é: " << fpeso1alt/fcontagem1  <<endl;
    cout << "A média do peso da  segunda faixa etária é: " << fpeso2alt/fcontagem2  <<endl;
    cout << "A média do peso da  terceira faixa etária é: " << fpeso3alt/fcontagem3  <<endl;
    cout << "A média do peso da  quarta faixa etária é: " << fpeso4alt/fcontagem4  <<endl;


    return 0;
}


