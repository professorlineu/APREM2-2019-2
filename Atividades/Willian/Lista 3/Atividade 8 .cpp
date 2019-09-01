/**********************************************************
- Autor:     Willian Paixao da Silva
- Descrição: Recebe 6 dados (peso, altura, idade, cor dos olhos e cor dos cabelos) e faz os calculos
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 0;
    int iIdade1 = 0;
    int iIdade2 = 0;
    int iIdade3 = 0;
    int iIdade4 = 0;
    int iIdade5 = 0;
    int iIdade6 = 0;
    char cCorOlhos1 = 0;
    char cCorOlhos2 = 0;
    char cCorOlhos3 = 0;
    char cCorOlhos4 = 0;
    char cCorOlhos5 = 0;
    char cCorOlhos6 = 0;
    char cCorcabelo1 = 0;
    char cCorcabelo2 = 0;
    char cCorcabelo3 = 0;
    char cCorcabelo4 = 0;
    char cCorcabelo5 = 0;
    char cCorcabelo6 = 0;
    float fAltura1 = 0;
    float fAltura2 = 0;
    float fAltura3 = 0;
    float fAltura4 = 0;
    float fAltura5 = 0;
    float fAltura6 = 0;
    float fPeso1 = 0;
    float fPeso2 = 0;
    float fPeso3 = 0;
    float fPeso4 = 0;
    float fPeso5 = 0;
    float fPeso6 = 0;
    int iId50 = 0;
    float fMediaIda = 0;
    int iContMedIda = 0;
    float fContOlhosA = 0;
    int iContOlhosR = 0;







    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while (i < 1)
    {
        cout << "\nDigite a idade da " << i + 1 << "ª pessoa ";
        cin >> iIdade1 ;
        cout << "Digite o peso da " << i + 1 << "ª pessoa ";
        cin >> fPeso1 ;
        cout << "Digite a altura da " << i + 1 << "ª pessoa ";
        cin >> fAltura1 ;
        cout << "\nPara a cor dos olhos; A - Azul; P - Preto; V - Verde; C - Castanho. (ATENÇÃO USAR APENAS LETRAS MAIUSCULAS)";
        cout << "\nDigite a cor dos olhos da pessoa " << i + 1 << "ª pessoa ";
        cin >> cCorOlhos1;
        if (cCorOlhos1 != 'A' && cCorOlhos1 != 'P'&& cCorOlhos1 != 'V' && cCorOlhos1 != 'C')
        {

            cout << "\n\n!!!!ATENÇÃO !!!!\n\n";
            cout << "Valor para a cor dos olhos invalido !!! O programa será encerrado" << endl;
            return 0;
        }
        cout << "\nPara a cores do cabelo; P - Preto; C - Castanho; L - loiro; R - Ruivo. . (ATENÇÃO USAR APENAS LETRAS MAIUSCULAS)";
        cout << "\nDigite a cor do cabelo da pessoa " << i + 1 << "ª pessoa ";
        cin >> cCorcabelo1;
        if (cCorcabelo1 != 'R' && cCorcabelo1 != 'P'&& cCorcabelo1 != 'C' && cCorcabelo1 != 'L')
        {

            cout << "\n\n!!!!ATENÇÃO !!!!\n\n";
            cout << "Valor para a cor do Cabelo invalido !!! O programa será encerrado" << endl;
            return 0;
        }



        if (iIdade1 >50 && fPeso1 <60)
        {
            iId50 = iId50 + 1;
        }
        if (fAltura1 <1.50)
        {
            fMediaIda = iIdade1;
            iContMedIda = iContMedIda +1;
        }
        if (cCorOlhos1 == 'A')
        {

            fContOlhosA   = fContOlhosA  + 1;

        }

        if (cCorOlhos1== 'A' && cCorcabelo1 == 'R')
        {
            iContOlhosR  = iContOlhosR + 1;
        }

        i = i +1;

        system("cls");

    }



    i = 0;

    while (i <1)
    {
        cout << "\n\nDigite a idade da " << i + 2 << "ª pessoa ";
        cin >> iIdade2 ;
        cout << "Digite o peso da " << i + 2 << "ª pessoa ";
        cin >> fPeso2 ;
        cout << "Digite a altura da " << i + 2 << "ª pessoa ";
        cin >> fAltura2 ;
        cout << "\nPara a cor dos olhos; A - Azul; P - Preto; V - Verde; C - Castanho. (ATENÇÃO USAR APENAS LETRAS MAIUSCULAS)";
        cout << "\nDigite a cor dos olhos da pessoa " << i + 2 << "ª pessoa ";
        cin >> cCorOlhos2;
        if (cCorOlhos2 != 'A' && cCorOlhos2 != 'P'&& cCorOlhos2 != 'V' && cCorOlhos2 != 'C')
        {

            cout << "\n\n!!!!ATENÇÃO !!!!\n\n";
            cout << "Valor para a cor dos olhos invalido !!! O programa será encerrado" << endl;
            return 0;
        }
        cout << "\nPara a cores do cabelo; P - Preto; C - Castanho; L - loiro; R - Ruivo. . (ATENÇÃO USAR APENAS LETRAS MAIUSCULAS)";
        cout << "\nDigite a cor do cabelo da pessoa " << i + 2 << "ª pessoa ";
        cin >> cCorcabelo2;
        if (cCorcabelo2 != 'R' && cCorcabelo2 != 'P'&& cCorcabelo2 != 'C' && cCorcabelo2 != 'L')
        {

            cout << "\n\n!!!!ATENÇÃO !!!!\n\n";
            cout << "Valor para a cor do Cabelo invalido !!! O programa será encerrado" << endl;
            return 0;
        }

        if (iIdade2 >50 && fPeso2 <60)
        {
            iId50 = iId50 + 1;
        }
        if (fAltura2 <1.50)
        {
            fMediaIda = iIdade2 + fMediaIda;
            iContMedIda = iContMedIda +1;
        }
        if (cCorOlhos2 == 'A')
        {

            fContOlhosA   = fContOlhosA  + 1;

        }

        if (cCorOlhos2 == 'A' && cCorcabelo2 == 'R')
        {
            iContOlhosR  = iContOlhosR + 1;
        }


        i = i +1;
        system("cls");
    }
    i = 0;
    while (i <1)
    {
        cout << "\nDigite a idade da " << i + 3 << "ª pessoa ";
        cin >> iIdade3 ;
        cout << "Digite o peso da " << i + 3 << "ª pessoa ";
        cin >> fPeso3 ;
        cout << "Digite a altura da " << i + 3 << "ª pessoa ";
        cin >> fAltura3 ;
        cout << "\nPara a cor dos olhos; A - Azul; P - Preto; V - Verde; C - Castanho. (ATENÇÃO USAR APENAS LETRAS MAIUSCULAS)";
        cout << "\nDigite a cor dos olhos da pessoa " << i + 3 << "ª pessoa ";
        cin >> cCorOlhos3;
        if (cCorOlhos3 != 'A' && cCorOlhos3 != 'P'&& cCorOlhos3 != 'V' && cCorOlhos3 != 'C')
        {

            cout << "\n\n!!!!ATENÇÃO !!!!\n\n";
            cout << "Valor para a cor dos olhos invalido !!! O programa será encerrado" << endl;
            return 0;
        }
        cout << "\nPara a cores do cabelo; P - Preto; C - Castanho; L - loiro; R - Ruivo. . (ATENÇÃO USAR APENAS LETRAS MAIUSCULAS)";
        cout << "\nDigite a cor do cabelo da pessoa " << i + 3 << "ª pessoa ";
        cin >> cCorcabelo3;
        if (cCorcabelo3 != 'R' && cCorcabelo3 != 'P'&& cCorcabelo3 != 'C' && cCorcabelo3 != 'L')
        {

            cout << "\n\n!!!!ATENÇÃO !!!!\n\n";
            cout << "Valor para a cor do Cabelo invalido !!! O programa será encerrado" << endl;
            return 0;
        }

        if (iIdade3 >50 && fPeso3 <60)
        {
            iId50 = iId50 + 1;
        }
        if (fAltura3 <1.50)
        {
            fMediaIda = iIdade3 + fMediaIda;
            iContMedIda = iContMedIda +1;
        }
        if (cCorOlhos3 == 'A')
        {

            fContOlhosA   = fContOlhosA  + 1;

        }

        if (cCorOlhos3 == 'A' && cCorcabelo3 == 'R')
        {
            iContOlhosR  = iContOlhosR + 1;
        }


        i = i +1;
        system("cls");
    }
    i = 0;
    while (i <1)
    {
        cout << "\nDigite a idade da " << i + 4 << "ª pessoa ";
        cin >> iIdade4 ;
        cout << "Digite o peso da " << i + 4 << "ª pessoa ";
        cin >> fPeso4 ;
        cout << "Digite a altura da " << i + 4 << "ª pessoa ";
        cin >> fAltura4 ;
        cout << "\nPara a cor dos olhos: A - Azul; P - Preto; V - Verde; C - Castanho. (ATENÇÃO USAR APENAS LETRAS MAIUSCULAS)";
        cout << "\nDigite a cor dos olhos da pessoa " << i + 4 << "ª pessoa ";
        cin >> cCorOlhos4;
        if (cCorOlhos4 != 'A' && cCorOlhos4 != 'P'&& cCorOlhos4 != 'V' && cCorOlhos4 != 'C')
        {

            cout << "\n\n!!!!ATENÇÃO !!!!\n\n";
            cout << "Valor para a cor dos olhos invalido !!! O programa será encerrado" << endl;
            return 0;
        }
        cout << "\nPara a cores do cabelo; P - Preto; C - Castanho; L - loiro; R - Ruivo. . (ATENÇÃO USAR APENAS LETRAS MAIUSCULAS)";
        cout << "\nDigite a cor do cabelo da pessoa " << i + 4 << "ª pessoa ";
        cin >> cCorcabelo4;
        if (cCorcabelo4 != 'R' && cCorcabelo4 != 'P'&& cCorcabelo4 != 'C' && cCorcabelo4 != 'L')
        {

            cout << "\n\n!!!!ATENÇÃO !!!!\n\n";
            cout << "Valor para a cor do Cabelo invalido !!! O programa será encerrado" << endl;
            return 0;
        }

        if (iIdade4 >50 && fPeso4 <60)
        {
            iId50 = iId50 + 1;
        }
        if (fAltura4 <1.50)
        {
            fMediaIda = iIdade4 + fMediaIda;
            iContMedIda = iContMedIda +1;
        }
        if (cCorOlhos4 == 'A')
        {

            fContOlhosA   = fContOlhosA  + 1;

        }

        if (cCorOlhos4  == 'A' && cCorcabelo4 == 'R')
        {
            iContOlhosR  = iContOlhosR + 1;
        }

        i = i +1;
        system("cls");
    }
    i = 0;
    while (i <1)
    {
        cout << "\nDigite a idade da " << i + 5 << "ª pessoa ";
        cin >> iIdade5 ;
        cout << "Digite o peso da " << i + 5 << "ª pessoa ";
        cin >> fPeso5 ;
        cout << "Digite a altura da " << i + 5<< "ª pessoa ";
        cin >> fAltura5 ;
        cout << "\nPara a cor dos olhos; A - Azul; P - Preto; V - Verde; C - Castanho. (ATENÇÃO USAR APENAS LETRAS MAIUSCULAS)";
        cout << "\nDigite a cor dos olhos da pessoa " << i + 5 << "ª pessoa ";
        cin >> cCorOlhos5;
        if (cCorOlhos5 != 'A' && cCorOlhos5 != 'P'&& cCorOlhos5 != 'V' && cCorOlhos5 != 'C')
        {

            cout << "\n\n!!!!ATENÇÃO !!!!\n\n";
            cout << "Valor para a cor dos olhos invalido !!! O programa será encerrado" << endl;
            return 0;
        }
        cout << "\nPara a cores do cabelo; P - Preto; C - Castanho; L - loiro; R - Ruivo. . (ATENÇÃO USAR APENAS LETRAS MAIUSCULAS)";
        cout << "\nDigite a cor do cabelo da pessoa " << i + 5 << "ª pessoa ";
        cin >> cCorcabelo5;
        if (cCorcabelo5 != 'R' && cCorcabelo5 != 'P'&& cCorcabelo5 != 'C' && cCorcabelo5 != 'L')
        {

            cout << "\n\n!!!!ATENÇÃO !!!!\n\n";
            cout << "Valor para a cor do Cabelo invalido !!! O programa será encerrado" << endl;
            return 0;
        }
        if (iIdade5 >50 && fPeso5 <60)
        {
            iId50 = iId50 + 1;
        }
        if (fAltura5 <1.50)
        {
            fMediaIda = iIdade5 + fMediaIda;
            iContMedIda = iContMedIda +1;
        }
        if (cCorOlhos5 == 'A')
        {

            fContOlhosA   = fContOlhosA  + 1;

        }

        if (cCorOlhos4 == 'A' && cCorcabelo5 == 'R')
        {
            iContOlhosR  = iContOlhosR + 1;
        }


        i = i +1;


        system("cls");
    }
    i = 0;

    while (i < 1)

    {
        cout << "\nDigite a idade da " << i + 6 << "ª pessoa ";
        cin >> iIdade6 ;
        cout << "Digite o peso da " << i + 6 << "ª pessoa ";
        cin >> fPeso6 ;
        cout << "Digite a altura da " << i + 6 << "ª pessoa ";
        cin >> fAltura6 ;
        cout << "\nPara a cor dos olhos; A - Azul; P - Preto; V - Verde; C - Castanho. (ATENÇÃO USAR APENAS LETRAS MAIUSCULAS)";
        cout << "\nDigite a cor dos olhos da pessoa " << i + 6 << "ª pessoa ";
        cin >> cCorOlhos6;
        if (cCorOlhos6 != 'A' && cCorOlhos6 != 'P'&& cCorOlhos6 != 'V' && cCorOlhos6 != 'C')
        {

            cout << "\n\n!!!!ATENÇÃO !!!!\n\n";
            cout << "Valor para a cor dos olhos invalido !!! O programa será encerrado" << endl;
            return 0;
        }
        cout << "\nPara a cores do cabelo; P - Preto; C - Castanho; L - loiro; R - Ruivo. . (ATENÇÃO USAR APENAS LETRAS MAIUSCULAS)";
        cout << "\nDigite a cor do cabelo da pessoa " << i + 6 << "ª pessoa ";
        cin >> cCorcabelo6;
        if (cCorcabelo6 != 'R' && cCorcabelo6 != 'P'&& cCorcabelo6 != 'C' && cCorcabelo6 != 'L')
        {

            cout << "\n\n!!!!ATENÇÃO !!!!\n\n";
            cout << "Valor para a cor do Cabelo invalido !!! O programa será encerrado" << endl;
            return 0;
        }

        if (iIdade6 >50 && fPeso6 <60)
        {
            iId50 = iId50 + 1;
        }
        if (fAltura6 <1.50)
        {
            fMediaIda = iIdade6 + fMediaIda;
            iContMedIda = iContMedIda +1;
        }
        if (cCorOlhos6 == 'A')
        {

            fContOlhosA   = fContOlhosA  + 1;

        }

        if (cCorOlhos4  == 'A' && cCorcabelo6 == 'R')
        {
            iContOlhosR  = iContOlhosR + 1;
        }


        i = i +1;
        system("cls");
    }






    if (iId50 > 0)
    {

        cout << "\n\nA quantidade de pessoas acimas dos 50 anos e com peso inferior a 60kg é de " << iId50 << " pessoas "<< endl;
    }
    else if (iId50 <= 0)
    {
        cout << "\n\nA não a pessoas com idade acimas dos 50 anos e com peso inferior a 60Kg " << endl;
    }

    if (iContMedIda> 0)
    {
        cout << "\n\nA média das idades das pessoas com altura inferior a 1,50m é de " << fMediaIda/ 6 << endl;

    }
    else if (iContMedIda <= 0)
    {
        cout << "\n\nA não a pessoas com altura inferior a 1,50m " << endl;
    }

    if (fContOlhosA  > 0)
    {
        cout <<"\n\n" << fContOlhosA  << " pessoas com olhos azuis, elas representam " << ( fContOlhosA  / 6  )*100 <<"% do total de pessoas" << endl;

    }
    else if (fContOlhosA   = 0)
    {
        cout << "\n\nA não a pessoas com olhos azuis representam" << endl;
    }

    if (iContOlhosR > 0)
    {
        cout << "\n\nAs pessoas com cabelos ruivos e olhos azuis é " <<  iContOlhosR  << endl;

    }
    else if (iContOlhosR   <= 0)
    {
        cout << "\n\nA não a pessoas com cabelos ruivos e olhos azuis \n\n" << endl;
    }





    cout << fixed << setprecision(2);


    return 0;
}
