//**********************************************************
//- Autor: Vanderlei Natanael
//- Descrição: Lista 3 - Exercício 3
//**********************************************************/

    #include <iostream>
    #include <locale.h>
    #include <cstdlib>

    using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 0;
    int iIdade = 0;
    int iG1 = 0;
    int iG2 = 0;
    int iG3 = 0;
    int iG4 = 0;
    int iG5 = 0;

    while(i<8)
    {
    cout<<"Digite uma idade: ";
    cin>>iIdade;
    i++;

    if (iIdade>60)
    {
    iG5=iG5+1;
    }

    if (iIdade>=46 && iIdade<=60)
    {
    iG4=iG4+1;
    }

    if (iIdade>=31 && iIdade<=45)
    {
    iG3=iG3+1;
    }

    if (iIdade>16 && iIdade<=30)
    {
    iG2
   //opcao para varificacao do operador se o programa esta funcionando corretamente:///  cout<<"\n op: "<<iG5<<iG4<<iG3<<iG2<<iG1;
    }

    ///a-)
    cout<<"faixa etaria '1': "<<iG1 << endl;
    cout<<"faixa etaria '2': "<<iG2 << endl;
    cout<<"faixa etaria '3': "<<iG3 << endl;
    cout<<"faixa etaria '4': "<<iG4 << endl;
    cout<<"faixa etaria '5': "<<iG5 << endl;

    ///b-)
    cout<<"porcentagem de pessoas no grupo 1 do total de pessoas: "<<(iG1*100)/8<<"%" << endl;

    ///c-)
    cout<<"porcentagem de pessoas no grupo 5 do total de pessoas: "<<(iG5*100)/8<<"%" << endl;



    }2=iG2+1;
    }

    if (iIdade<=15)
    {
    iG1=iG1+1;
    }
   //opcao para varificacao do operador se o programa esta funcionando corretamente:///  cout<<"\n op: "<<iG5<<iG4<<iG3<<iG2<<iG1;
    }

    ///a-)
    cout<<"faixa etaria '1': "<<iG1 << endl;
    cout<<"faixa etaria '2': "<<iG2 << endl;
    cout<<"faixa etaria '3': "<<iG3 << endl;
    cout<<"faixa etaria '4': "<<iG4 << endl;
    cout<<"faixa etaria '5': "<<iG5 << endl;

    ///b-)
    cout<<"porcentagem de pessoas no grupo 1 do total de pessoas: "<<(iG1*100)/8<<"%" << endl;

    ///c-)
    cout<<"porcentagem de pessoas no grupo 5 do total de pessoas: "<<(iG5*100)/8<<"%" << endl;



    }
