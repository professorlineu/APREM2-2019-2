/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 3 dos propostos.
**********************************************************/
 #include <iostream>
 #include <locale.h>
 #include <cstdlib>


using namespace std;

int main()
{
    //Declaração de variáveis
    float iProd = 0;
    float iDesc = 0.1;
    float iDesc1 = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");


    //Código do programa
    cout << "Digite o preço do produto em reais: ";

    cin >> iProd;

    iDesc1 = iProd * iDesc;


    cout << "O preço com desconto será de: " << iProd - iDesc1; cout << " reais. ";



    return 0;
}
