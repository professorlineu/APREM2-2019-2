/**********************************************************
- Autor:     ramon macedo
- Descrição: Faça um programa que receba a idade de oito pessoas, calcule e mostre:
a) a quantidade de pessoas em cada faixa etária;
b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas.
c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
int i = 0;
int idade = 0;
int isoma15 = 0;
int isoma1630 = 0;
int isoma3145 = 0;
int isoma4660 = 0;
int isoma61 = 0;
float fmed1 = 0;
float fmedult = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
while ( i < 8)
{
    cout << "digite sua idade: ";
    cin >> idade;
    i = i + 1;
    if ( idade > 0 && idade <= 15  )
    {
        isoma15 += 1;
    }
    else if ( idade >= 16 && idade <= 30)
{
    isoma1630 = isoma1630 + 1;
}
  else if ( idade > 30 && idade <= 45)
  {
      isoma3145 += 1;
  }
  else if ( idade >= 46 && idade <= 60)
  {
      isoma4660 += 1;
  }
  else if ( idade > 60)
  {
      isoma61 +=1;
  }

}

cout << "pessoas abaixo de 15 anos: "<< isoma15 << endl;
cout << "pessoas que tem entre 16 e 30 anos: "<< isoma1630 << endl;
cout << "pessoas que tem entre 31 e 45 anos: "<< isoma3145 << endl;
cout << "pessoas que tem entre 46 e 60 anos: "<< isoma4660 << endl;
cout << "pessoas acima de 60 anos: "<< isoma61 << endl;

fmed1 = (isoma15/ 8) * 100;
fmedult = (isoma61/ 8)* 100;

cout << " a porcentagem de pessoas na primeira faixa etaria em relaçao as outras foi de : "
<< fmed1 << "%" << endl;

cout << " a porcentagem de pessoas na ultima faixa etária em relação as outras foi de : "
<< fmedult << "%" << endl;


    return 0;
}
