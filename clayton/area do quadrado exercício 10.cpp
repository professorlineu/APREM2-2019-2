/**********************************************************
- Autor:     clayton
- Descrição: area do quadrado exercicio 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

        int ilado1 = 0;
        int ilado2 = 0;
        int iarea = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    cout << " digite o primeiro valor:";
    cin >> ilado1;

    cout << " digite o segundo valor:";
    cin >> ilado2;

    iarea =(ilado1*ilado2);

    cout << " a area do quadrado e:";
    cout << iarea;

    return 0;

}
