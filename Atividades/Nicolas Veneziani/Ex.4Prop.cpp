/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 12 dos propostos.
**********************************************************/
 #include <iostream>
 #include <locale.h>
 #include <cstdlib>


using namespace std;

int main()
{
    //Declaração de variáveis
    int iNotaP1 = 0;
    int iNotaP2 = 0;
    int iPeso1 = 2;
    int iPeso2 = 3;
    int iSoma = 5;
    int iParte1 = 0;
    int iParte2 = 0;
    float iResultado = 0;




    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite a nota obtida na P1: ";
    cin >> iNotaP1;

    cout << "Digite a nota obtida na P2: ";
    cin >> iNotaP2;




    iParte1 = iNotaP1 * iPeso1;
    iParte2 = iNotaP2 * iPeso2;
    iResultado = iParte1 + iParte2;


    cout << "A média ponderada obtida foi: " << iResultado / iSoma; cout << " , parabéns! ";

    return 0;
}
