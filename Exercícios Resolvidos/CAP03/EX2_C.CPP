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
    // Ativa acentuação
    setlocale(LC_ALL,"");
    //Formata a saída para mostrar apenas duas casas decimais
    cout << setprecision(2);
    //Mostra mensagem antes da leitura da 1¦ nota
    cout << "\nDigite a primeira nota: ";
    // Recebe a 1¦ nota
    cin >> nota1;
    //Mostra mensagem antes da leitura da 2¦ nota
    cout << "\nDigite a segunda nota: ";
    // Recebe a 2¦ nota
    cin >> nota2;
    //Mostra mensagem antes da leitura da 3¦ nota
    cout << "\nDigite a terceira nota: ";
    // Recebe a 3¦ nota
    cin >> nota3;
    // Calcula a m‚dia
    media = (nota1 + nota2 + nota3)/3;
    // Mostra mensagem e o resultado da m‚dia
    cout << "\nMédia = "<< media;
    // P ra o programa a espera de um ENTER
    getch();
}
