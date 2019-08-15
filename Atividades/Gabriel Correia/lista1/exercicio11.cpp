//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descrição: Lista 1 - Exercício 10
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int ibanana= 0;


    setlocale(LC_ALL,"");
    system("color 7E");
    cout << "PROGRAMA DE Gabriel Correia Soares; Curso de engenharia mecânica; IFSP-SJC";
    cout <<endl;
    cout << "insira o numero para ser multiplicado: ";
    cin  >>ibanana;
    cout <<endl;
    cout << "A tabuada do numero " << ibanana << "e:"<<endl;
    cout <<ibanana<<"*0: "<<(ibanana*0)<<";"<<endl;
    cout <<ibanana<<"*1: "<<(ibanana*1)<<";"<<endl;
    cout <<ibanana<<"*2: "<<(ibanana*2)<<";"<<endl;
    cout <<ibanana<<"*3: "<<(ibanana*3)<<";"<<endl;
    cout <<ibanana<<"*4: "<<(ibanana*4)<<";"<<endl;
    cout <<ibanana<<"*5: "<<(ibanana*5)<<";"<<endl;
    cout <<ibanana<<"*6: "<<(ibanana*6)<<";"<<endl;
    cout <<ibanana<<"*7: "<<(ibanana*7)<<";"<<endl;
    cout <<ibanana<<"*8: "<<(ibanana*8)<<";"<<endl;
    cout <<ibanana<<"*9: "<<(ibanana*9)<<";"<<endl;
    cout <<ibanana<<"*10: "<<(ibanana*10)<<";"<<endl;


}
