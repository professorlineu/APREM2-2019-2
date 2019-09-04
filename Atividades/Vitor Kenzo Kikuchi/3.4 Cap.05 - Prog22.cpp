/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 25 - Programa que determina o rendimento de um investimento após tantos meses.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
        int iOpcao = 0;
    int i = 1;
    float fDin = 0;
    int iCodigo = 0;
    float fMeses = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
while (i!=0)
{
system("cls");
cout << "\nAperte 0 para sair ou qualquer outro número para continuar... ";
cin  >> i;

if (i==0)

{
return 0;
}

else
{

cout << "\n\n     Qual é o valor que você deseja investir? ";
cin  >> fDin;

cout << "\n\nPara investir na poupança, digite 1.\n"
     << "\nPara investir na poupança Plus, digite 2.\n"
     << "\nPara investir em fundos de renda fixa, digite 3.\n\n\n                       ";
cin  >> iOpcao;
}
cout << "\n\nPor quantos meses você deseja deixar seu dinheiro investido? ";
cin  >> fMeses;

if (iOpcao == 1)
{
cout << "\n\nNa poupança, seu dinheiro rende 1.5% por mês.\n\n"
     << "Em " << fMeses << " Meses, você teria "
     << fDin*(pow(1.015,fMeses))
     << " reais.\n\n "
     << endl;
}
else if (iOpcao == 2)
{
cout << "\n\nNa poupança Plus, seu dinheiro rende 2% por mês.\n\n"
     << "Em " << fMeses << " Meses, você teria "
     << fDin*(pow(1.020,fMeses))
     << " reais.\n\n "
     << endl;
}
else
{
cout << "\n\nNa Renda Fixa, seu dinheiro rende 4% por mês.\n\n"
     << "Em " << fMeses << " Meses, você teria "
     << fDin*(pow(1.040,fMeses))
     << " reais.\n\n "
     << endl;
}

system("pause");
}


    return 0;
}
