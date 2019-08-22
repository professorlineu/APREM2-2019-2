/**********************************************************
- Autor: Vanderlei Natanael
- Descrição: Lista 2 - Ex 20
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int iidade = 0;
    
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout  << " Quantos anos você tem? ";
    cin   >> iidade;

    if (iidade < 5)
   
    cout << " Você ainda não têm classificação como nadador. " << endl;

    else if  (iidade <= 7)
    cout << " Você está na classe de nadador infantil. " << endl;

    else if  (iidade <= 10)
    cout << " Você está na classe de nadador juvenil. " << endl;

    else if  (iidade <= 15)
    cout << " Você está na classe de nadador adolescente. " << endl;
         
    else if  (iidade <= 30)
    cout << " Você está na classe de nadador adulto. " << endl;
         
    else
    cout << " Você está na classe de nadador sênior. " << endl;

    return 0;
    
}
