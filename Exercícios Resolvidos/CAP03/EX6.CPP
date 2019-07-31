#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float sal, salreceber, grat, imp;
    // Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do salário
    cout << "\nDigite o salário do funcionário: ";
    // Recebe o salário
    cin >> sal;
    // Calcula a gratificação
    grat = sal * 5/100;
    // Calcula o imposto
    imp = sal * 7/100;
    // Calcula o sal rio a receber
    salreceber = sal + grat - imp;
    // Mostra o salário a receber
    cout << "\nSalário a receber = " << salreceber;
    // Para o programa a espera de um ENTER
    getch();
}

