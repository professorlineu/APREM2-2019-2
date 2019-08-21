
    #include <iostream>
    #include <locale.h>
    #include <cstdlib>

    using namespace std;

    int main()

{
    int iPesoKG = 0;
    int iGramas = 0;

    setlocale (LC_ALL,"");
    system("COLOR F1");

    cout << "Insira seu Peso ";
    cin  >> iPesoKG;

    iFahrenheit =(iPesoKG/1000);
    cout << "O seu Peso em gramas é " << iGramas;

}
