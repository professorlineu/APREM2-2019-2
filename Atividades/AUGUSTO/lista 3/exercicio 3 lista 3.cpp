/**********************************************************
- Autor: Augusto N Almeida
- Descrição:Exercio 3 lista 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
int idade=0;
float f1=0;
float f2=0;
float f3=0;
float f4=0;
float f5=0;
int i=0;


    setlocale(LC_ALL,"");
    system("color F1");



     while (i < 8)
    {
      cout<<"digite o sua idade  "<< endl;
      cin>> idade;



if (idade<=15)
   {
      f1++;

   }


if (16<=idade&&idade<=30)
   {
      f2++;

   }


   if (31<=idade&&idade<=45)
   {
      f3++;

   }


   if (46<=idade&&idade<=60)
   {
      f4++;

   }


  if (idade>60)
   {
      f5++;

   }



 i++;

    } // fim do laço

           cout <<"\n quantidade de pessoas com até 15 anos: "<< f1 <<endl;
           cout <<"\n quantidade de pessoas entre 16 a 30 anos: "<< f2 <<endl;
           cout <<"\n quantidade de pessoas entre 31 a 45 anos: "<< f3 <<endl;
           cout <<"\n quantidade de pessoas entre 46 a 60 anos: "<< f4 <<endl;
           cout <<"\n quantidade de pessoas com mais de 60 anos: "<< f5 <<endl<<endl;

           cout <<"\n porcentagem de pessoas na primeira faixa etaria:" <<(f1*100)/i<<"%"<<endl<<endl;

            cout <<"\n porcentagem de pessoas na primeira faixa etaria:" <<(f5*100)/i<<"%"<< endl<< endl;
















} // fim do main
