#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    float X, Y, Z;
    // Limpa tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do tamanho da escada
    cout << "\nDigite o tamanho da escada: ";
    // Recebe o valor de Z que é o tamanho da escada
    cin >> Z;
    // Mostra mensagem antes da leitura da altura desejada
    cout << "\nDigite a altura desejada: ";
    // Recebe o valor de X que é a altura desejada
    cin >> X;
    // Calcula o valor de Y que é a distância da escada da parede
    Y = pow(Z,2) - pow(X,2);
    // Extrai a raiz quadrada de Y
    Y = sqrt(Y);
    // Mostra valor de Y que é a distância da escada da parede
    cout << "\nA distância necessária: " << Y;
    // Para o programa a espera de um ENTER
    getch();
}
