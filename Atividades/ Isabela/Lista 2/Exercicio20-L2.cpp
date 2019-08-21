    /**********************************************************
    - Autor:     Isabela Aparecida de Souza
    - Descrição: Nadador EX20
    **********************************************************/

    #include <iostream>
    #include <locale.h>
    #include <cstdlib>

    using namespace std;

    int main()
    {
    int iIdade = 0;

    setlocale(LC_ALL,"");
    system("color F6");

    cout <<"Digite sua idade: ";
    cin >> iIdade;


        if (iIdade < 5)
            cout << "Não participante!" << endl;
    else if (iIdade <= 7)
            cout << "Infantil." << endl;
    else if (iIdade <= 10)
            cout << "Juvenil." << endl;
    else if (iIdade <= 15)
            cout << "Adolescente." << endl;
    else if (iIdade <= 30)
            cout << "Adulto." << endl;
    else if (iIdade > 30)
            cout << "Senior." << endl;

}
