    //**********************************************************
    //Nome: Isabela ap de souza
    //Descrição: Ex11 Numeros impares e pares - L4
    //**********************************************************

    #include <iostream>
    #include <cstdlib>
    #include <locale>

    using namespace std;

    int main()
    {
    int i = 0;
    int iNum[10];

    setlocale(LC_ALL,"");
    system ("Color F8");

    for (i=0; i<10; i+=1)
    {
    cout << "Digite o " << i+1 << "° número: ";
    cin  >> iNum[i];
    }
    cout << "\n\t\tNúmeros pares: \n" << endl;
    for (i=0; i<10; i++)
    {
        if (iNum[i]%2 == 0)
        cout << iNum[i] << "\t";
    }

    cout << "\n\t\tNúmeros impares: \n" << endl;
    for (i=0; i<10; i++)
    {
        if (iNum[i]%2 != 0)
        cout << iNum[i] << "\t";
    }

    cout << "\n\n" << endl;

    return 0;
}
