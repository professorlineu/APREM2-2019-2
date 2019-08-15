/**********************************************************
- Autor:     Willian
- Descrição: Conversão de moeda
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fNum1 = 0;
    float fDolar = 0;
    float fMarcoAle = 0;
    float fLibrasEstr= 0;




    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Insira o quanto de dinheiro possui: ";
    cin >> fNum1;
    fDolar = fNum1 / 1.80;
    fMarcoAle = fNum1 / 2.00;
    fLibrasEstr = fNum1 / 3.57;


    cout << "Você tem " << fDolar << " Dolares " << endl;
    cout << "Você tem " << fMarcoAle << " Marcos Alemães " << endl;
    cout << "Você tem " << fLibrasEstr << " Libras Esterlinas " << endl;



    return 0;
}
