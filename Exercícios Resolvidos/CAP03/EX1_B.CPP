#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main ()
{
    int n1, n2, n3, n4, soma;
    // Limpa a tela
    system("cls");
    // Mostra mensagem antes da leitura dos quatro números
    // \n - coloca o cursor na linha de baixo
    cout << "\nDigite quatro n£meros: ";
    // Recebe os quatro números
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    // Soma os n£meros digitados
    soma = n1 + n2 + n3 + n4;
    // Mostra mensagem e resultado da soma
    cout << "\nResultado da soma = " << soma;
    // Para o programa a espera de um ENTER
    getch();
}
