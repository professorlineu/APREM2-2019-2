/**********************************************************
- Autor: 	Rhanã Tosetto
- Descrição: soma basica DE 4 NÚMEROS
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
using namespace std;

int main()
{
	//Declaração de variáveis
int n1, n2, n3, n4,ch, soma, divisao, multi, subt, op1;

	//Configuração da tela de saída
	setlocale(LC_ALL,"");
	 system("color 1F");

	 //tela incial de boas vindas
    do
    {
	cout << "\n";
	cout << "\n";
  	cout << "\n";
	cout<< "        BEM VINDO A CALCULADORA DE 4 DIGITOS!";
	cout << "\n";
 	cout << "\n";
  	cout << "\n";
  	cout << "pressione ENTER para inciar";
  	getch();
  	cout << "Para soma(1), divisão(2), multiplicação(3), divisão(4) ";
  	cout << "\n";
  	cout << "\n";
  	cin>> op1;
  	if (op1=1)
    {
        cout<< "Numero 1 ";
	cin >> n1;
	cout << "\n";
	cout<< "Numero 2 ";
	cin >> n2;
	cout << "\n";
	cout<< "Numero 3 ";
	cin >> n3;
	cout << "\n";
	cout<< "Numero 4 ";
 	cin >> n4;
 	cout<<"\n""aperte ENTER para calcular";
 	getch();

    // Soma os números digitados
	soma = n1 + n2 + n3 + n4;

	// Mostra o resultado da soma
	// \n - coloca o cursor na linha de baixo
	cout << "\n" << "Resultado=" << soma ;
    }
 	else if (op1 = 2)
    {
    cout<< "Numero 1 ";
	cin >> n1;
	cout << "\n";
	cout<< "Numero 2 ";
	cin >> n2;
	cout << "\n";
	cout<< "Numero 3 ";
	cin >> n3;
	cout << "\n";
	cout<< "Numero 4 ";
 	cin >> n4;
 	cout<<"\n""aperte ENTER para calcular";
 	getch();

    // Soma os números digitados
	divisao = n1 * n2 * n3 * n4;

	// Mostra o resultado da soma
	// \n - coloca o cursor na linha de baixo
	cout << "\n" << "Resultado=" << multi ;
    }
	cout<<"\n";
	cout << "\n";
	cout << "\n";
  	cout << "precione qualquer tecla para continuar";
  	cout << "\n";
  	cout << "\n";
	cout<< "deseja fazer uma nova conta?" "\n" "sim(1) ou não(2)";
	cout<< "\n";
	cout<< "opção desejada:";
	cout << "\n";
 	cin>> ch;
    }
 	while(ch==1);


}
