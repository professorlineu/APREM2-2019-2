/**********************************************************
- Autor:     João vitor morais
- Descrição: Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
■■ a quantidade de pessoas com idade superior a 50 anos;
■■ a média das alturas das pessoas com idade entre 10 e 20 anos;
■■ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
int i = 0;
int iidade = 0;
int isoma50 = 0;
int icontent1020 = 0;
int icontaltent1020 = 0;
int icontpeso = 0;
float fporc = 0;
float fmed = 0;
float faltura = 0;
float fpeso = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
while (i<5)
{
  cout << "Digite a sua idade: ";
  cin  >> iidade;

  cout << "Digite sua altura: ";
  cin  >> faltura;

  cout << "Digite seu peso: ";
  cin  >> fpeso;

  i += 1;

  if (iidade > 50)

  {
      isoma50 +=1;

  }

  if (iidade >= 10 && iidade <= 20)

  {
     icontent1020 += 1;
     icontaltent1020 += faltura;

  }

  if (fpeso < 40)

  {
      icontpeso += 1;


  }
} // Fim do laço


  system("cls");
  cout << isoma50
       << " Pessoas tem idade superior a 50 anos."
       << endl;

   fmed = icontaltent1020/icontent1020;

  cout << "Media da altura de pessoas com idade entre 10 e 20 anos de idade: "
       << fmed
       << endl;

   fporc = (icontpeso * 100)/5;

  cout << "O numero de pessoas com peso inferior a 40 kg de todas as analisadas e: "
       << fporc
       << "%"
       << endl;

    return 0;
}
