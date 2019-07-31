#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float dep, taxa, rend, total;
    // Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do valor do depósito
    cout << "\nDigite o valor do depósito: ";
    // Recebe o valor do depósito
    cin >> dep;
    // Mostra mensagem antes da leitura da taxa de juros
    cout << "\nDigite a taxa de juros: ";
    // Recebe a taxa de juros
    cin >> taxa;
    // Calcula o rendimento
    rend = dep * taxa/100;
    // Calcula o total
    total = dep + rend;
    // Mostra o rendimento
    cout << "\nRendimento = " << rend;
    // Mostra o total
    cout << "\nTotal = " << total;
    // Para o programa a espera de um ENTER
    getch();
}

