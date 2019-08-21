    #include <iostream>
    #include <locale.h>
    #include <cstdlib>

    using namespace std;

    int main()
{
    int iSalMin = 0;
    int iDinheiro = 0;

    setlocale (LC_ALL,"");
    system("COLOR F1");

    cout << "Quantos reais você ganha mensalmente ";
    cin  >> iDinheiro;

    cout << " Com o valor do salario minimo em R$998.48, nota se que voce recebe "
         << iDinheiro/998.48
         << " salarios minimos.";
}
