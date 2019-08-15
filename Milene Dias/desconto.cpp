- Autor:     Milene Caroline B. D. Chaves
- Descrição: soma e divide
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
     int ipreco=0;
     int idesconto=0;



    cout<< "preco do produto:";
    cin >>ipreco;

    idesconto=ipreco-(ipreco*10/100);



    cout<< "o novo preco do produto e: ";
    cout<<idesconto;
}
