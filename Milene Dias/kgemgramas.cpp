/**********************************************************
- Autor:     Milene Caroline B. D. Chaves
- Descrição: kg em gramas
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
int ipeso=0;
int igramas=0;

cout<< " digite seu peso:";
cin>> ipeso;

igramas=(ipeso*1000);

cout<<"voce tem em gramas:";
cout<<igramas;
}
