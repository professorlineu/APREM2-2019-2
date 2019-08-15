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
    float iNum1 = 0;
    float iNum2 = 0;




    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");


    //Código do programa
    cout << "Digite o dividendo: ";
    cin >> iNum1;

    cout << "Digite o divisor: ";
    cin >> iNum2;




    cout << "Resultado: " << iNum1 / iNum2 ;



    return 0;
}
