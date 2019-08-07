/**********************************************************
- Autor:     Thomas Nicolas
- Descrição: Exercicio 4, aplicando na matéria
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float  fnota1= 0;
float  fnota2= 0;
float  fnota3= 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout    << "insira a nota da prova: ";
    cin     >> fnota1;
    cout    << "insira a nota do projeto de aplicativo: ";
    cin     >> fnota2;
    cout    << "insira a nota de atividades no GitHub: ";
    cin     >> fnota3;
    cout    << "Sua média final é: "<<(fnota1*2+fnota2*3+fnota3*5)/10;

    return 0;
}
