#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    float ang, alt, escada, radiano;
	// Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura do valor do ângulo
	cout << "\nDigite o valor do ângulo em graus: ";
	// Recebe valor de ângulo
	cin >> ang;
	// Mostra mensagem antes da leitura da altura da ponta da escada
	cout << "\nDigite a altura da parede onde está a ponta da escada: ";
	// Recebe valor da altura da parede onde está a ponta da escada
	cin >> alt;
	// Converte o ângulo digitado em graus para radianos
	radiano = ang * 3.14 / 180;
	// Calcula tamanho da escada
	escada = alt / sin(radiano);
	// Mostra o tamanho da escada
	cout << "\nO comprimento da escada: "<< escada;
	// Para o programa a espera de um ENTER
	getch();
}
