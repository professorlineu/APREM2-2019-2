#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float sal, novosal;
    //Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do salário
    cout << "\nDigite o salário do funcionário: ";
    // Recebe o salário
    cin >> sal;
    // Calcula o novo salário
    novosal = sal + sal * 25/100;
    // Mostra o novo salário
    cout << "\nNovo salário = " << novosal;
    // Para o programa a espera de um ENTER
    getch();
}
