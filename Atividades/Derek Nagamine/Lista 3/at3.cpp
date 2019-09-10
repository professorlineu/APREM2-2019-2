/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descriзгo:Faça um programa que mostre as tabuadas dos números de 1 a 10.
**********************************************************/
#include <iostream>
using namespace std;

int main()

{
int i=0, a=0, r=0;

while (r<100)
{
while (i<=10)
{//inicio do while
r = i*a;
cout << r << endl;
++i;
}//fim do while
i=0;
++a;
}
}

