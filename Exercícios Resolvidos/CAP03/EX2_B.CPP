#include <iostream>
#include <conio.h>
#include <iomanip>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float nota1, nota2, nota3, soma, media;
    //Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    //Formata a saída para duas casas decimais
    cout << setprecision(2);
    //Mostra mensagem antes da leitura das três notas
    cout << "\nDigite as três notas: ";
    // Recebe as três notas
    cin >> nota1;
    cin >> nota2;
    cin >> nota3;
    // Soma as notas digitadas
    soma = nota1 + nota2 + nota3;
    // Calcula a média
    media = soma/3;
    // Mostra o resultado da média
    cout << "\nMédia = " << media;
    // Para o programa a espera de um ENTER
    getch();
}
