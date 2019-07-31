#include <iostream>
#include <conio.h>
#include <iomanip>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float nota1, nota2, nota3, media;
    //Limpa a tela
    system("cls");
    // Recebe as três notas
    cin >> nota1;
    cin >> nota2;
    cin >> nota3;
    // Calcula a média
    media = (nota1 + nota2 + nota3)/3;
    //Formata a mensagem de saída para duas casas decimais
    cout << setprecision(2);
    // Mostra o resultado da média
    cout << "\n" << media;
    // Para o programa a espera de um ENTER
    getch();
}
