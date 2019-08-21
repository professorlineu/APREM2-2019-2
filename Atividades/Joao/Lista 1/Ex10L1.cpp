/********************************************************
- Autor: João Pedro Neves Baldin

- Descrição: Lista 01 - Exercício 10
********************************************************/
#include <iostream>

#include <conio.h>

#include <locale.h>

#include <cstdlib>

using namespace std;



int main()

{

    float lado, area;


    system("cls");//Limpa a tela
    setlocale(LC_ALL,"");// Ativa acentuação


    cout << "\nInforme a lateral do quadrado "; // Recebe a variavel
    cin >> lado;

    area = lado * lado;// Calcula a área



    cout << "\nO quadrado tem uma área de " << area; // Mostra a área

    // Para o programa a espera de um ENTER

    getch();

}
