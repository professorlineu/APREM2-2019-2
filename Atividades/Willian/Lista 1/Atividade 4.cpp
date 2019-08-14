/**********************************************************
- Autor:     Willian
- Descrição: Lista 1 Atividade 4 (notas)
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iNota1 = 0;
    int iNota2 = 0;
    int iPeso1 = 2;
    int iPeso2 = 3;
    int iResultado1 = 0;
    int iResultado2 = 0;
    int iResultadoParc = 0;
    int iMediaPond = 2;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite o 1ª nota: ";
    cin >> iNota1 ;

    cout << "Digite o 2ª nota: ";
    cin >> iNota2 ;

    iResultado1 = iNota1 * iPeso1 ;

    iResultado2 = iNota2 * iPeso2 ;

    iResultadoParc = iResultado1 + iResultado2  ;


    cout << " Sua Nota Foi " << iResultadoParc / iMediaPond ;



    return 0;
}
