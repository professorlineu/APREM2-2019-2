    //**********************************************************
    //- Autor: Isabela Aparecida de Souza
    //- Descrição: Aumento de salario Ex07
    //**********************************************************

    #include <iostream>
    #include <locale.h>
    #include <cstdlib>
    #include <cmath>
    using namespace std;

    int main()
    {
    float iSalario = 0;

    setlocale(LC_ALL,"");
    system("color F6");

    cout << "Digite o seu salario: "<<"R$";
    cin  >> iSalario;
    cout << endl;

    if ( iSalario < 500.00 && iSalario > 0 )
        {cout << "Seu novo salario com o reajuste de 30% e de:" <<" R$"<<iSalario+(iSalario*30)/100;}

    if ( iSalario >= 500.00 )
        {cout << "Infelizmente voce nao tem direito a este reajuste de 30%";}

    if ( iSalario  <= 0 )
        {cout << "operacao invalida";}
}
