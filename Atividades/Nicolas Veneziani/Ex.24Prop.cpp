/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 24 dos propostos.
**********************************************************/
 #include <iostream>
 #include <locale.h>
 #include <cstdlib>


using namespace std;

int main()
{
    //Declaração de variáveis
    float iDin = 0;
    float iDolar = 1.80;
    float iLib = 3.57;
    float iMarc = 2;
    float iProd1 = 0;
    float iProd2 = 0;
    float iProd3 = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");


    //Código do programa
    cout << "Informe a quantia de dinheiro em reais: ";

    cin >> iDin;

    iProd1 = iDin / iDolar;
    iProd2 = iDin / iMarc;
    iProd3 = iDin / iLib;

    cout << "Você tem: " << iProd1 << " dólares. ";
                    cout << iProd2 << " marcos alemães. ";
                    cout << iProd3 << " libras esterlinas. ";



    return 0;
}
