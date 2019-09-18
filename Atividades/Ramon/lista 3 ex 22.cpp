/**********************************************************
- Autor:     ramon macedo
- Descrição: 22. Faça um programa que receba a idade e a altura de várias pessoas, calcule e mostre a média das alturas
daquelas com mais de 50 anos. Para encerrar a entrada de dados, digite idade menor ou igual a zero
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int idade=1;
    int ialt=1;
    int isomaalt=0;
    int ia=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout<< "para encerrar o programa digite 0 na idade \n";

    while ( idade!=0)
    {
        i++;
        cout << "digite a " << i << "° idade: ";
        cin >> idade;

        if( idade !=0)
            {
            cout << "digite a "<< i << "° altura em centimetros: ";
            cin >> ialt;
        if (idade> 50)
            {
                ia++;
                isomaalt = isomaalt + ialt;

}
}
}
    cout<< "a media das alturas das pessoas com mais de 50 anos é: "<< isomaalt/ia << " centimetro";

    return 0;
}
