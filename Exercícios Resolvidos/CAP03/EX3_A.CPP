#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    float nota1, nota2, nota3, peso1, peso2, peso3, media;
    // Limpa a tela
    system("cls");
    // Recebe as três notas e seus pesos
    cin >> nota1 >> nota2 >> nota3 >> peso1 >> peso2 >> peso3;
    // Calcula a média
    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3)/(peso1 + peso2 + peso3);
    // Mostra o resultado da média
    // Formatando a saída para mostrar apenas duas casas decimais
    cout << setprecision(2);
    cout << "\n" << media;
    // Para o programa a espera de um ENTER
    getch();
}
