// * *********************************************** *********************************************
// -autor: Milene Caroline
// -programa: peso ideal
// ************************************************ ************************************************ * / /

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()

{
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F2");


  // Declaração de variáveis

    float faltura = 0 ;
    int iopcao=0 ;


    cout << "     calcule seu peso ideal  \n " ;

    cout << " qual a sua altura em cm :";
    cin>>faltura;


    cout << " voce e 1-homem ou 2-mulher ? \n";
    cin  >> iopcao;

    if( iopcao==1)
    { cout<<" seu peso ideal e ";
      cout<<(((72.7*faltura)-58)/100 ) ;
    }


    else if (iopcao==2)
    { cout<<" seu peso ideal e ";
      cout<<((62.1*faltura)-44.7)/100;
    }






}
