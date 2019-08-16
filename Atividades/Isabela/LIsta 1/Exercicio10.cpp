    #include <iostream>
    #include <locale.h>
    #include <cstdlib>

    using namespace std;

    int main()
{

    int iLado = 0;
    int iResul = 0;


    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Digite a medida do lado do quadrado: ";
    cin  >> iLado;

    iResul = (iLado * iLado);
    cout << "A area do quadrado e igual a " << iResul;
}
