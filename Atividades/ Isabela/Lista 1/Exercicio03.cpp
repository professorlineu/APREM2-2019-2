    #include <iostream>
    #include <locale.h>
    #include <cstdlib>

    using namespace std;

    int main()
{
    int iNumero1 = 0;
    int iNumero2 = 0;
    int iDivisao = 0;

    setlocale (LC_ALL,"");
    system("COLOR F1");

    cout << "inserir primeiro numero ";
    cin  >> iNumero1;

    cout << "inserir segundo numero ";
    cin  >> iNumero2;

    iDivisao = (iNumero1/iNumero2);
    cout << "a Divisao entre os numeros e " << iDivisao;
}
