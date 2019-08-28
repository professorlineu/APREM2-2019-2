/**********************************************************
- Autor:     Milene Caroline B. D. Chaves
- Descrição: Comando while
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int idade=0;
    int idadet=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    while (i < 10)
    {
        cout<< " digite sua idade: ";
        cin>> idade;
return 0;
        idadet=idadet+idade;return 0;
        i++;
    }

      cout<< " a media das idades é: " << idadet/i << endl;


}
