/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descri��o:Fa�a um programa que receba um n�mero, calcule e mostre a tabuada desse n�mero.
Exemplo:
Digite um n�mero: 5
5 � 0 = 0
5 � 1 = 5
5 � 2 = 10
5 � 3 = 15
5 � 4 = 20
5 � 5 = 25
5 � 6 = 30
5 � 7 = 35
5 � 8 = 40
5 � 9 = 45
5 � 10 = 50
**********************************************************/
#include <iostream>
using namespace std;

int main()


{
    int n, i=0, r;
cout << "Digite um numero: ";
cin >> n;

while (i<=10)
{
    r = n*i;
cout << r << endl;
i++;
}

}
