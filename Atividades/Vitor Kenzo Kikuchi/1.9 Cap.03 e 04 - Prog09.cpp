/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descrição: Exercício 15 - Este programa calcula seu saldo depois de pagar suas contas. (com estrutura condicional)
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fSalario = 0;
float fConta1 = 0;
float fConta2 = 0;
float fMulta = 0;
float ffinal = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "Qual é o valor de seu salário? ";
cin >> fSalario;

cout << "E quanto ao valor de uma das contas que você deve pagar? ";
cin >> fConta1;

cout << "E o valor da segunda conta? ";
cin >> fConta2;

fMulta = (fConta1*2/100 +fConta1) + (fConta2*2/100 + fConta2);
ffinal = fSalario - fMulta;

cout << "Considerando a multa de 2% por conta do atraso, você terá R$"
     << ffinal
     << " após quitar todas suas dívidas."
     << endl;

if (ffinal < 400 && ffinal > 0)

{
cout << "Eu acho que alguém vai ter que cancelar a netflix..."
     << endl;
}

else if (ffinal > 5000)

{
cout << "Tá com dinheiro de sobra em? se quiser pagar minhas contas, eu agradeço."
     << endl;
}
else if (ffinal < 0)
{
cout << "Eu creio que a única saída é pedir dinheiro no semáforo..."
     << endl;
}
else
{
cout << "Ufa, seu nome não vai pro SPC!"
     << endl;
}
    return 0;
}
