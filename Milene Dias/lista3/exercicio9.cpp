/**********************************************************
- Autor:     Milene Caroline B. D. Chaves
- Descrição: exercicio 9
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
      int idade = 0;
      int idadet = 0;
      float faltura = 0;
      float fpeso=0;
      int i90=0;
      int i=0;
      float falturat =0;
      float f10=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa


 while (i<2)
 {

   cout<<" qual a sua idade:  ";
   cin>>idade;

   cout<< " qual a sua altura em cm: ";
   cin>>faltura;


   cout<< " qual o seu peso em kg: ";
   cin>>fpeso;

   idadet=idadet+idade;

    if ( fpeso>90 && faltura < 150)

  {
      f10++;
  }


if (idade>=10 && idade <= 30 && faltura>190 )

   {
     i90++;
   }

 i++;

 }



  cout<<float(idadet/i) <<" media das idades \n";
  cout<< f10<< " quantidade de pessoas com peso maior que 90 e altura inferior 150cm  \n" ;
  cout<< (100*i90)/i <<"% de pessoas entre 10 e 30 anos com altura maior que 190cm \n";


 }
