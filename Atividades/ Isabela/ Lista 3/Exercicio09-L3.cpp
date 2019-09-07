
//Nome: Isabela Aparecida de Souza
//Descricao: EX09 Altura, peso e idade
//************************************************************

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int i = 0;
    int ii = 0;
    float fIdade = 0;
    float fAltura = 0;
    float fPeso = 0;
    float ftotal = 0;
    int iJovem = 0;
    int iPesinho = 0;
    int iBaixo = 0;

    //setlocale(LC_ALL,"");
    //system("color F3");

    while (i < 11)
    {
        cout << "\nDigite sua idade: ";
        cin >> fIdade;

        cout << "Digite sua altura: ";
        cin >> fAltura;

        cout << "Digite seu Peso: ";
        cin >> fPeso;
        i++;
        ftotal=ftotal+fIdade;
	
        if (fPeso > 90)
       { 
         iPesinho++;

	     }        
       if (fAltura<150)
       { 
         iBaixo++;

	     }        
       if (fIdade> 10 && fIdade < 30 && fAltura>190 ) 
        {         
          iJovem++;
        }

    }
        cout << "A média das idades é:" << ftotal/10 <<endl;
        cout << "A quantidade de pessoas com peso superior a 90kg é: " << iPesinho << endl;
        cout << "A quantidade de pessoas com altura inferior a 150cm é: " << iBaixo << endl;
        cout << "A porcentagem de pessoas com altura superior a 190cm, das idades entre 10 e 30 anos é: " << (iJovem*100)/3;

}
