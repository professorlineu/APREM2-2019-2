#include <iostream>
#include <locale.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main ()
{
    float p_fab, perc_d, perc_i, vlr_d, vlr_i, p_final;
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura do preço de fábrica
	cout << "\nDigite o preço de fábrica: ";
	// Recebe o preço de fábrica
	cin >> p_fab;
	// Mostra mensagem antes da leitura do percentual do distribuidor
	cout << "\nDigite o percentual de lucro do distribuidor: ";
	// Recebe o percentual de lucro do distribuidor
	cin >> perc_d;
	// Mostra mensagem antes da leitura do percentual de impostos
	cout << "\nDigite o percentual de impostos: ";
	// Recebe o percentual de impostos
	cin >> perc_i;
	// Calcula o valor do lucro do distribuidor
	vlr_d = p_fab * perc_d / 100;
	// Calcula o valor dos impostos
	vlr_i  = p_fab * perc_i / 100;
	// Calcula o preço final do veículo
	p_final = p_fab + vlr_d + vlr_i;
	// Mostra o lucro do distribuidor calculado
	cout << "\nO lucro do distribuidor: " << vlr_d;
	// Mostra o valor calculado dos impostos
	cout << "\nO valor dos impostos: " << vlr_i;
	// Mostra o preço final do veículo ao consumidor
	cout << "\nO preço final do veículo ao consumidor: " << p_final;
	// Para o programa a espera de um ENTER
	getch();
}
