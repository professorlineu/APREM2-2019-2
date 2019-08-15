/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 9 dos propostos.
**********************************************************/
 #include <iostream>
 #include <locale.h>
 #include <cstdlib>


using namespace std;

int main()
{
    //Declaração de variáveis
    int iLado = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o lado L do quadrado em metros:";
    cin >> iLado;


    cout << "A área desejada em metros quadrados é de: " << iLado*iLado;


    return 0;
}
 
