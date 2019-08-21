/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 25 - Este programa calcula o bônus de um funcionário de acordo com as horas extras e de folga.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fHorasEx = 0;
float fHorasFg = 0;
float fPremio = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F4");

    //Código do programa
cout << "É Natal! Nossa empresa dará um prêmio a todos aqueles que contribuiram comprometidamente com ela durante o ano. "
     << "\n"
     << "\n"
     << "Então, quantas horas extras você fez no total? ";
cin  >> fHorasEx;

cout << "E quantas horas você tirou de folga? ";
cin  >> fHorasFg;

fPremio = fHorasEx*60 - fHorasFg*60*2/3;

if ( fPremio >= 2400 )
{
cout << "Parabéns, nós reconhecemos seu esforço: Seu prêmio é de R$500,00. Feliz Natal!!!"
     << endl;
}
else if ( fPremio >= 1800 && fPremio < 2400 )
{
cout << "Parabéns, nós reconhecemos seu esforço: Seu prêmio é de R$400,00. Feliz Natal!!!"
     << endl;
}
else if ( fPremio >= 1200 && fPremio < 1800 )
{
cout << "Parabéns, nós reconhecemos seu esforço: Seu prêmio é de R$300,00. Feliz Natal!!!"
     << endl;
}
else if ( fPremio >= 600 && fPremio < 1200)
{
cout << "Parabéns, nós reconhecemos seu esforço: Seu prêmio é de R$200,00. Feliz Natal!!!"
     << endl;
}
else
{
cout << "Parabéns, nós reconhecemos seu esforço: Seu prêmio é de R$100,00. Feliz Natal!!!"
     << endl;
}

    return 0;

}
