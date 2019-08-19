/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descrição: Proposto 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fpeso = 0 ;
    float fengordar = 1.15;
    float femagrecer = 0.8 ;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite seu peso atual em quilos: ";
    cin >> fpeso;
    cout << " Seu novo peso se você engordar 15 porcento do seu peso atual é de: "
         << fpeso * fengordar
         << " quilos."
         << " E seu novo peso se você emagrecer 20 porcento do seu peso atual é : "
         << fpeso * femagrecer
         << " quilos "
         << endl;
    return 0;
}
