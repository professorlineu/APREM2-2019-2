#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float custo, convite, qtd;
	// Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura do custo do espetáculo
	cout << "\nDigite o custo do espetáculo: ";
	// Recebe o custo do espetáculo
	cin >> custo;
	// Mostra mensagem antes da leitura do preço do convite
	cout << "\nDigite o preço do convite: ";
	// Recebe o preço do convite
	cin >> convite;
	// Calcula o total de convites necessários para cobrir as despesas
	qtd = custo / convite;
	// Mostra quantidade calculada
	cout << "\nQuantidade de convites necessária: " << qtd;
	// Para o programa a espera de um ENTER
	getch();
}
