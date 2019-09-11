/**********************************************************
- Autor:     Leonardo S Cristo
- Descrição: 8 PEssoas
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
    int iNumero0 = 0;
    int iNumero1 = 0;
    int iNumero2 = 0;
    int iNumero3 = 0;
    int iNumero4 = 0;
    int iNumero5 = 0;
    float fporcentfaixa1 =0;
    float fporcentfaixa5=0;
    int inumdig = 0;








    //Código do programa





         while (i <8)          
         {
              cout << " Digite sua idade  " ;
              cin >> inumdig ;

             
         

         if (inumdig <=15)
         {
           iNumero0++;
         }

         else if (inumdig  >= 16 &&  inumdig <=30 )
         {
           iNumero1++;
           }
          else if (inumdig  >= 31 &&  inumdig <= 45 )
         {
           iNumero2++;
           }
         else if (inumdig  >= 45 &&  inumdig <=60 )
         {
           iNumero3++;
           }
           else 
         {
           iNumero4++;
           }


         i = i +1;

         }

         fporcentfaixa1 =(iNumero0*100)/i ;
         fporcentfaixa5 =(iNumero4*100)/i ;
         


     cout << "sao menores ou igual a 15 anos    " << iNumero0 << " ." << endl;
      cout << "sao entre 16 e 30 anos    " << iNumero1 << endl;
      cout << "Pessoas na faixa etéria entre 0 e 15 anos " << fporcentfaixa1 << " % " << endl ;
      cout << "Pessoas na  faixa etéria entre 60 anos ou mais " << fporcentfaixa5 << " % " << endl ;


    return 0;
}
