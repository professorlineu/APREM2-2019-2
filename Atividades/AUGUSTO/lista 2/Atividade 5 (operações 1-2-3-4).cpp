/**********************************************************
- Autor:Augusto Nogueira Almeida
- Descriчуo: operações
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
float fnumero1=0;
float fnumero2=0;
int icontrol=0;

cout<<" digite o primeiro numero";
cin>> fnumero1;

cout<<" digite o segundo numero";
cin>> fnumero2;

cout<<" -digite 1 para media entre os dois numeros, digite 2 para obter a diferença entre o primeiro pelo segundo, digite 3 para produto entre os dois numeros ou digite 4 para divisão do primeiro numero pelo segundo";
cin>>icontrol ;


if (icontrol<=1)
    { cout<< "A média é de" << (fnumero1+fnumero2)/2
         << endl;
    }



else if  (icontrol<=2)
    { cout<< "A diferença do primeiro pelo segundo é de  " << (fnumero1-fnumero2)
         << endl;
    }

else if  (icontrol<=3)
    { cout<< "O produto é igual a" << (fnumero1*fnumero2)
         << endl;
    }

else if  (icontrol<=4)
    { cout<< "A divisão do primeiro pelo segundo é igual a" << (fnumero1/fnumero2)
         << endl;
    }

    else if  (icontrol>=5)
    { cout<< "escolha entre 1, 2, 3 ou 4 "
         << endl;
    }
  }
