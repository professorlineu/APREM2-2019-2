//***********************************************
//Nome: Nicole Oska
//Descrição: L4 Ex 12
//***********************************************

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main()
{
    //Declaração de variáveis
   
    int i = 0;
    int iVet [6];
    int iSoma = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system ("Color F8");

    //Código do programa
    
    for (i=0; i<6; i+=1)
    {
    cout << "Digite o " << i+1 << "° numero: ";
    cin  >> iVet[i];
    iSoma = iSoma + iVet[i];
    }
    
    cout << "\n\nOs numeros digitados foram: ";
    for (i=0; i<6; i+=1)
    {
    cout << iVet[i] <<"\t";
    }
    cout << " = " << iSoma; 
}
