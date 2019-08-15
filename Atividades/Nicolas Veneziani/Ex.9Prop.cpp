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
    int iBM = 0;
    int ibm = 0;
    int iH = 0;
    int iAl = 0;
    int iSoma1 = 0;
    int iProd2 = 0;
    int iProd3 = 0;




    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");


    //Código do programa
    cout << "Informe a Base maior do trapézio: ";

    cin >> iBM;

    cout << "Informe a Base menor do trapézio: ";

    cin >> ibm;

    cout << "Informe a Altura do trapézio: ";

    cin >> iAl;

    iSoma1 = iBM + ibm;
    iProd2 = iSoma1 * iAl;
    iProd3 = iProd2 / 2;

    cout << "A área do trapézio é: " << iProd3 ;




    return 0;
}
