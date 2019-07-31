#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float sal, salreceber, imp;
    // Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do salário
    cout << "\nDigite o salário do funcionário: ";
    // Recebe o salário
    cin >> sal;
    // Calcula o imposto
    imp = sal * 10/100;
    // Calcula o salário a receber
    salreceber = sal + 50 - imp;
    // Mostra o salário a receber
    cout << "\nSalário a receber = " << salreceber;
    // Para o programa a espera de um ENTER
    getch();
}

