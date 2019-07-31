#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    double hora, conversao, m, h;
	// Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura da hora e dos minutos
	cout << "\nDigite a hora e os minutos, por exemplo, 4.30: ";
	// Recebe a hora (hora e minutos)
	cin >> hora;
	// Separa as horas na variável h e os minutos na variável m
	m=modf(hora, &h);
	// Calcula a conversão para minutos
	conversao = h * 60 + m * 100;
	// Mostra a conversão
	cout << "\nHora convertida para minutos: " << conversao;
	// Para o programa a espera de um ENTER
	getch();
}
