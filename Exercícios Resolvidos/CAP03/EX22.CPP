#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main ()
{
    float vlr_sal, qtd_kw, vlr_kw, vlr_reais, desc, vlr_desc;
	// Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura do salário mínimo
	cout << "\nDigite o valor do salário mínimo: ";
	// Recebe o valor do salário mínimo
	cin >> vlr_sal;
	// Mostra mensagem antes da leitura da quantidade de quilowatts
	cout << "\nDigite a quantidade de Kws consumidos: ";
	// Recebe a quantidade de Kws
	cin >> qtd_kw;
	// Calcula o valor de cada Kw
	vlr_kw = vlr_sal / 5;
	// Calcula o valor a ser pago pelo residência
	vlr_reais = vlr_kw * qtd_kw;
	// Calcula o desconto de 15%
	desc = vlr_reais * 15 / 100;
	// Calcula valor a ser pago com desconto de 15%
	vlr_desc = vlr_reais - desc;
	// Mostra o valor do Kw
	cout << "\nValor do Kw: " << vlr_kw;
	// Mostra valor a ser pago
	cout << "\nValor a ser pago: " << vlr_reais;
	//Mostra valor com desconto
	cout << "\nValor a ser pago com desconto: " << vlr_desc;
	// Para o programa a espera de um ENTER
	getch();
}
