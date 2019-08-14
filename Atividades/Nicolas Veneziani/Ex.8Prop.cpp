/**********************************************************
- Autor:     Nicolas Veneziani
- Descrição: Exercício 8 dos propostos.
**********************************************************/
 #include <iostream>
 #include <locale.h>
 #include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iPeso = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o seu peso em quilogramas: ";
    cin >> iPeso;


    cout << "O seu peso em gramas é de: " << iPeso*1000 ;


    return 0;
}
