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
    //Formata a saída para mostrar apenas duas casas decimais
    cout << fixed << setprecision(2);
    //Mostra mensagem antes da leitura das notas
    cout << "\nDigite as três notas: ";
    // Recebe as três notas
    cin >> nota1 >> nota2 >> nota3;
    //Mostra mensagem antes da leitura dos pesos
    cout << "\nDigite os três pesos: ";
    // Recebe os três pesos
    cin >> peso1 >> peso2 >> peso3;
    soma1=nota1 * peso1;
    soma2=nota2 * peso2;
    soma3=nota3 * peso3;
    total=peso1 + peso2 + peso3;
    // Calcula a média
    media = (soma1 + soma2 + soma3)/total;
    // Mostra o resultado da média
    cout << "\nMédia = " << media;
    // Para o programa a espera de um ENTER
    getch();
}
