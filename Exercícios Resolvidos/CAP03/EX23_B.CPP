#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    float num, f;
    double i, a;
    // Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do número real
    cout << "\nDigite um número real: ";
    // Recebe um número real
    cin >> num;
    // Extrai a parte inteira do número,
    // armazenando-a na variável i e extrai a parte
    // fracionária do número, armazenando-a na variável f
    f = modf(num, &i);
    // Arredonda o número para baixo
    a = floor(num);
    // Mostra a parte inteira do número digitado
    cout << "\nParte inteira do número: " << i;
    // Mostra a parte fracionária do número
    cout << "\nParte fracionária do número: " << f;
    // Mostra o arredondamento do número
    cout << "\nArredondamento do número: " << a;
    // Para o programa a espera de um ENTER
    getch();
}
