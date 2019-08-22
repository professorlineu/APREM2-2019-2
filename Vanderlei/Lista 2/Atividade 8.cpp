/**********************************************************
- Autor:     Vanderlei Natanael 
- Descrição: Lista 2 - Ex 10
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color 1F");

     //Declaração de variáveis
    float fCarro = 0;

    //Código do programa
    
    cout << "Quanto custa o carro que você quer comprar? ";
    cin  >> fCarro;

    if (fCarro <= 12000)
    {
    cout << "Considerando apenas a taxa do distribuidor, o preço final será de " << fCarro*1.05 << " reais." << endl; 
    }
   
    else if (fCarro > 12000 && fCarro < 25000)
    {
    cout << "Considerando a taxa do distribuidor e dos impostos, o preço final será de " << fCarro*1.25 << " reais." << endl;
    }
    
    else
    {
    cout << "Considerando os impostos e a porcentagem do distribuidor, o preço final será de " << fCarro*1.35 << " reais." << endl;
    }

    return 0;
}
