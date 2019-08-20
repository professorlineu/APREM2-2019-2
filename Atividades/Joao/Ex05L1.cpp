/********************************************************
- Autor: João Pedro Neves Baldin

- Descrição: Lista 01 - Exercício 05
********************************************************/
#include <iostream>

#include <conio.h>

#include <locale.h>

#include <cstdlib>

using namespace std;



int main()

{

    float preco, novopre;

    //Limpa a tela

    system("cls");

    // Ativa acentuação

    setlocale(LC_ALL,"");

    // Mostra mensagem antes da leitura do salário

    cout << "\nInforme o preço do produto: $ ";

    // Recebe o valor do produto

    cin >> preco;

    // Calcula o preço com desconto

    novopre = preco - preco * 10/100;

    // Mostra o novo preço

    cout << "\nPreço com desconto = $" << novopre;

    // Para o programa a espera de um ENTER

    getch();

}
