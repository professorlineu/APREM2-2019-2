/**********************************************************
- Autor:     Luiz Davi
- Descrição: Lista 2: exercicio 17
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fN1 = 0;
    float fN2 = 0;
    float fN3 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout<<"insira o primeiro numero:        ";
    cin>>fN1;

    cout<<"insira o segundo numero:         ";
    cin>>fN2;



    cout<<"para o primeiro numero elevado ao segundo numero insira 1: "<<endl;

    cout<<"para raiz quadrada de cada um dos numeros insira 2: "<<endl;

    cout<<"para raiz cubica de cada um dos numeros insira 3: "<<endl;
    cin>>fN3;

    if (fN3==1)
    {
        cout <<"sua conta deu: " << pow(fN1,fN2) <<
    }

    if (fN3==2)
{

        if (fN1>0&&fN2>0)
            {cout<<"suas raizes deram:           "<<sqrt(fN1)<<"   e   "<< sqrt(fN2);}
        else
        {
            cout<<"erro";
        }
}

    if (fN3==3)

{
     cout<<"suas raizes deram:           "<<cbrt(fN1)<<"   e   "<< cbrt(fN2);
}
    if (fN3>3)
        {cout<<"erro, operacao invalida";}
    if (in3<1)
        {
        cout<<"erro, operacao invalida";}
cout << "Digite a sua senha: ";
    cin  >> fN1;
    cout << endl;

    if (fN1==4531)
    cout << "Acesso permetido";

    else
    cout << "Acesso negado";




    return 0;
}
