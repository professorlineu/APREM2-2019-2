/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descrição:Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário.
1 Média entre os números digitados
2 Diferença do maior pelo menor
3 Produto entre os números digitados
4 Divisão do primeiro pelo segundo
**********************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
float fnum1, fnum2, fmed, fdif, fpro, fquo;

cout << "Digite um numero qualquer e pressione enter." << endl;
cin >> fnum1;
cout << "Digite outro numero qualquer e pressione enter." << endl;
cin >> fnum2;
fmed = (fnum1+fnum2)/2;
fdif = fnum1-fnum2;
fpro = fnum1*fnum2;
fquo = fnum1/fnum2;
cout << "A media desses dois numeros e: " << fmed << endl;
cout << "A diferenca desses dois numeros e: " << fdif << endl;
cout << "O produto desses dois numeros e: " << fpro << endl;

if (fnum2==0)
{
    cout << "O quociente nao esta definido.";
}
else
{
     cout << "O quociente desses dois numeros e: " << fquo << endl;
}

}
