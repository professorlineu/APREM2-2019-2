
    #include <iostream>
    #include <locale.h>
    #include <cstdlib>

    using namespace std;

    int main()

{
    int iTemperatura = 0;
    int iFahrenheit = 0;

    setlocale (LC_ALL,"");
    system("COLOR F1");

    cout << "Inserir a temperatura em Celsius ";
    cin  >> iTemperatura;

    iFahrenheit =(iTemperatura*9/5)+32;
    cout << "A sua temperatura em Fahrenheit é " << iFahrenheit <<"°";

}
