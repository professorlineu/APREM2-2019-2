
/**********************************************************
- Autor:     Willian Paixao da Silva
- Descrição: Atividade  20
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    //Declaração de variáveis


    float fNota1 = 0;
    float fNota2 = 0;
    float fNota3 = 0;
    float fMedia = 0;
    int iPeso1 = 4;
    int iPeso2 = 3;
    int iPeso3 = 2;
    int iOpc = 0;




    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Menu de Opções" << endl;
    cout << "1 Para Média Aritimetica" << endl;
    cout << "2 Para Média Ponderada" << endl;
    cout << "3 Para Sair" << endl;
    cout << "Digite a opção desejada ";
    cin >> iOpc;

    if ( iOpc != 1 && iOpc !=2 && iOpc != 3)
    {
        cout << "Opção Invalida" << endl;
        return 0;
    }

    system("cls");


    if (iOpc < 2)
    {
    cout << "Você escolheu a opção 1 " << endl;

    cout << "\nDigite a primeira nota ";
    cin >> fNota1;
    cout << "\nDigite a segunda nota ";
    cin >> fNota2;

    fMedia = (fNota1 + fNota2)/2;

    cout << "\nA Média aritimética das notas é " << fMedia << endl;


    return 0;

    }



    if (iOpc < 3)

    {

    cout << "Você escolheu a opção 2 " << endl;
    cout << "Nota 1 tem peso 3 - Nota 2 tem Peso 2 e Nota 3 tem Peso 1 " << endl;
    cout << "\nDigite a primeira nota ";
    cin >> fNota1;
    cout << "\nDigite a segunda nota ";
    cin >> fNota2;
    cout << "\nDigite a segunda nota ";
    cin >> fNota3;

    fMedia = ((fNota1*iPeso1 ) + (fNota2*iPeso2) + (fNota3*iPeso3))/(iPeso1 + iPeso2 + iPeso3);

    cout << "\nA Média Ponderada das notas é " << fMedia << endl;
    }

    else

    cout << "Você escolheu a opção 3 " << endl;
    cout << "\nSistema sera finalizado " << endl;









    cout << fixed << setprecision(2);








    return 0;
}
