/**********************************************************
- Autor: Augusto N Almeida
- Descrição:Exercicio 7 lista 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

main()
{
    float faltura=0;
    int idade=0;
    int iidade=0;
    float fpeso=0;
    int i1 =0;
    int idadet =0;
    int i = 0;
    int id=0;

    int ipessoas=0;
    int ipessoas3=0;


    setlocale(LC_ALL,"");
    system("color F1");



     while (i < 3)
    {
      cout<<"digite o sua idade  ";
      cin>> iidade;

      cout<<"digite o seu peso (kg) ";
      cin>> fpeso;

      cout<<"digite o sua altura em (cm) ";
      cin>> faltura;


i = i + 1;

if (idade>50);
   {
      (idadet=idade+idadet);
   }




    } // fim do laço

           cout <<"\n quantidade de pessoas com mais de 50 anos: "<< idade <<endl;
           cout<<"pessoas com mais de 90 Kg e menores que 150 cm "<< (ipessoas)<<endl;
           cout<<"porcentagem de pessoas entre 10 a 30 anos com mais de 190 cm "<<((ipessoas3*100)/i)<<"%"<<endl;



} // fim do main

