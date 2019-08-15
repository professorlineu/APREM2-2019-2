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
    int iSalminimo = 954.00;
    int iSalario = 0;
    float iResultado = 0;
    float iResto = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o valor do seu salário em reais: ";
    cin >> iSalario;

    iResto = iSalario % iSalminimo;
    iResultado = iSalario/iSalminimo + iResto/iSalminimo;


    cout << "O seu salário é equivalente à: " << iResultado; cout << " salários mínimos";

    return 0;
}
