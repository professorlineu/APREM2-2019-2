#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int ()
{
int i = 0;
int iIdade = 0;
int iTotl = 0;
int iAltura = 0;
int iAlt = 0;

  setlocale(LC_ALL,"");
  system("color F3");
  
  while (i > 0 )
 {
  cout <<"Digite sua idade:";
  cin >>iIdade;
  cout <<"Digite sua altura:";
  cin >>iAltura;
  
   if (iIdade>50)
   {
        iAlt=iAlt+iAltura;
        iTotl = iTotl + 1;
   }
 }
  iMedia = iAlt / iTotl ;
  cout<<"A media das alturas: " <<iMedia;
}