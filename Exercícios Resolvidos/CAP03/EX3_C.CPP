#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstdlib>
#include <locale.h>
using namespace std;

int main()
{
    float nota1, nota2, nota3, peso1, peso2, peso3, soma1, soma2, soma3, total, media;
    //Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Formata a saída para mostrar apenas duas casas decimais
    cout << fixed << setprecision(2);
    // Mostra mensagem antes da leitura da 1a nota
    cout << "Digite a 1a nota: ";
    // Recebe a 1a nota
    cin >> nota1;
    // Mostra mensagem antes da leitura do peso da 1a nota
    cout << "Digite o peso da 1a nota: ";
    // Recebe o peso da 1¦ nota
    cin >> peso1;
    // Mostra mensagem antes da leitura da 2a nota
    cout << "Digite a 2a nota: ";
    // Recebe a 2a nota
    cin >> nota2;
    // Mostra mensagem antes da leitura do peso da 2a nota
    cout << "Digite o peso da 2a nota: ";
    // Recebe o peso da 2a nota
    cin >> peso2;
    // Mostra mensagem antes da leitura da 3a nota
    cout << "Digite a 3a nota: ";
    // Recebe a 3a nota
    cin >> nota3;
    // Mostra mensagem antes da leitura do peso da 3a nota
    cout << "Digite o peso da 3a nota: ";
    // Recebe o peso da 3a nota
    cin >> peso3;
    soma1=nota1 * peso1;
    soma2=nota2 * peso2;
    soma3=nota3 * peso3;
    total=peso1 + peso2 + peso3;
    // Calcula a média
    media = (soma1 + soma2 + soma3)/total;
    // Mostra o resultado da média
    cout <<"\nMédia = " << media;
    // Para o programa a espera de um ENTER
    getch();
}

