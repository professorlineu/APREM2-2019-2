/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 25 - Este programa calcula o rendimento de vários investimentos
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

main()
{
    int iOpcao = 0;
    int i = 1;
    float fDin = 0;
    int iCodigo = 0;

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
cin  >> iMeses;

if (iOpcao == 1)
{
cout << "\n\nNa poupança, seu dinheiro rende 1.5% por mês.\n\n"
     << "Em " << iMeses << " Meses, você teria "
     << fDin*(1+0.015)^iMeses
     << " reais.\n\n "
     << endl;
}
else if (iOpcao == 2)
{
cout << "\n\nNa poupança Plus, seu dinheiro rende 2% por mês.\n\n"
     << "Em " << iMeses << " Meses, você teria "
     << fDin*(1+0.020)^iMeses
     << " reais.\n\n "
     << endl;
}
else
{
cout << "\n\nNa Renda Fixa, seu dinheiro rende 4% por mês.\n\n"
     << "Em " << iMeses << " Meses, você teria "
     << fDin*(1+0.040)^iMeses
     << " reais.\n\n "
     << endl;
}

system("pause");
}


    return 0;
}
