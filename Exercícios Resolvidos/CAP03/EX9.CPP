#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float base, altura, area;
	// Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura da base
	cout << "\nDigite a base do triângulo:  ";
	// Recebe a base
	cin >> base;
	// Mostra mensagem antes da leitura da altura
	cout << "\nDigite a altura do triângulo: ";
	// Recebe a altura
	cin >> altura;
	// Calcula a  rea
	area = (base * altura)/2;
	// Mostra a  rea
	cout << "\nÁrea do triângulo, " << area;
	// Para o programa a espera de um ENTER
	getch();
}
