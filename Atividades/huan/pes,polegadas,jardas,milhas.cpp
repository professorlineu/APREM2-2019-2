/**********************************************************
- Autor:     Huan oliveira
- Descriçao pes,polegadas,jardas,milhas
**********************************************************/

pro9 pés jardas milhas
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    float jardas, milhas;
	// Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
	// Mostra a medida em jardas
	cout << "\nEm jardas  = " << jardas;
	// Mostra a medida em milhas
	cout << "\nEm milhas  = " << milhas;
	// Para o programa a espera de um ENTER
	getch();
}

