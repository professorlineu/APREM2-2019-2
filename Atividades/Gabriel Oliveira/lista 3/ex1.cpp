/**********************************************************
- Autor:     Gabriel Oliveira
- Descrição: exercicio 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i   = 1;

    int ia1 = 0;
    int ia2 = 0;
    int ia3 = 0;
    int ia4 = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    while (i < 5)
    {
    system("cls");
      cout<<"insira os 5 grupos de 4 numeros\n";
      cout<<"grupo "<<i<<":     \n";

      cin>>ia1;
      cin>>ia2;
      cin>>ia3;
      cin>>ia4;


if (ia1==ia2||ia1==ia3||ia1==ia4||ia2==ia3||ia2==ia4||ia3==ia4)
{
    cout<<"erro numeros iguais nao pode\n           ";
}
      if((ia1>ia2) && (ia1>ia3) && (ia1>ia4) ) ///1234
      {
          if((ia2>ia3)&& (ia2>ia4))
          {
              if(ia3>ia4)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia1<<endl<<ia2<<endl<<ia3<<endl<<ia4<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia4<<endl<<ia3<<endl<<ia2<<endl<<ia1<<endl;


              }
          }
      }






      if((ia1>ia2) && (ia1>ia3) && (ia1>ia4) ) ///1324
      {
          if((ia3>ia2)&& (ia3>ia4))
          {
              if(ia2>ia4)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia1<<endl<<ia3<<endl<<ia2<<endl<<ia4<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia4<<endl<<ia2<<endl<<ia3<<endl<<ia1<<endl;


              }
          }
      }







      if((ia1>ia2) && (ia1>ia3) && (ia1>ia4) ) ///1432
      {
          if((ia4>ia3)&& (ia4>ia2))
          {
              if(ia3>ia2)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia1<<endl<<ia4<<endl<<ia3<<endl<<ia2<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia2<<endl<<ia3<<endl<<ia4<<endl<<ia1<<endl;


              }
          }
      }








      if((ia1>ia2) && (ia1>ia3) && (ia1>ia4) ) ///1243
      {
          if((ia2>ia3)&& (ia2>ia4))
          {
              if(ia4>ia3)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia1<<endl<<ia2<<endl<<ia4<<endl<<ia3<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia3<<endl<<ia4<<endl<<ia2<<endl<<ia1<<endl;


              }
          }
      }







      if((ia1>ia2) && (ia1>ia3) && (ia1>ia4) ) ///1342
      {
          if((ia3>ia2)&& (ia3>ia4))
          {
              if(ia4>ia2)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia1<<endl<<ia3<<endl<<ia4<<endl<<ia2<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia2<<endl<<ia4<<endl<<ia3<<endl<<ia1<<endl;


              }
          }
      }







      if((ia1>ia2) && (ia1>ia3) && (ia1>ia4) ) ///1423
      {
          if((ia4>ia3)&& (ia4>ia2))
          {
              if(ia2>ia3)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia1<<endl<<ia4<<endl<<ia2<<endl<<ia3<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia3<<endl<<ia2<<endl<<ia4<<endl<<ia1<<endl;


              }
          }
      }


///--------------------------------------------------------------------------------------------------------------------

    if((ia2>ia1) && (ia2>ia3) && (ia2>ia4) ) ///2134
      {
          if((ia1>ia3)&& (ia1>ia4))
          {
              if(ia3>ia4)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia2<<endl<<ia1<<endl<<ia3<<endl<<ia4<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia4<<endl<<ia3<<endl<<ia1<<endl<<ia2<<endl;


              }
          }
      }


      if((ia2>ia1) && (ia2>ia3) && (ia2>ia4) ) ///2143
      {
          if((ia1>ia3)&& (ia1>ia4))
          {
              if(ia4>ia3)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia2<<endl<<ia1<<endl<<ia4<<endl<<ia3<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia3<<endl<<ia4<<endl<<ia1<<endl<<ia2<<endl;


              }
          }
      }


      if((ia2>ia1) && (ia2>ia3) && (ia2>ia4) ) ///2314
      {
          if((ia3>ia1)&& (ia3>ia4))
          {
              if(ia1>ia4)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia2<<endl<<ia3<<endl<<ia1<<endl<<ia4<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia4<<endl<<ia1<<endl<<ia3<<endl<<ia2<<endl;


              }
          }
      }
      if((ia2>ia1) && (ia2>ia3) && (ia2>ia4) ) ///2341
      {
          if((ia3>ia1)&& (ia3>ia4))
          {
              if(ia4>ia1)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia2<<endl<<ia3<<endl<<ia4<<endl<<ia1<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia1<<endl<<ia4<<endl<<ia3<<endl<<ia2<<endl;


              }
          }
      }
      if((ia2>ia1) && (ia2>ia3) && (ia2>ia4) ) ///2413
      {
          if((ia4>ia3)&& (ia4>ia1))
          {
              if(ia1>ia3)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia2<<endl<<ia4<<endl<<ia1<<endl<<ia3<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia3<<endl<<ia1<<endl<<ia4<<endl<<ia2<<endl;


              }
          }
      }
      if((ia2>ia1) && (ia2>ia3) && (ia2>ia4) ) ///2431
      {
          if((ia4>ia3)&& (ia4>ia1))
          {
              if(ia3>ia1)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia2<<endl<<ia4<<endl<<ia3<<endl<<ia1<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia1<<endl<<ia3<<endl<<ia4<<endl<<ia2<<endl;


              }
          }
      }
///-------------------------------------------------------------------------------------------------------

if((ia3>ia1) && (ia3>ia2) && (ia3>ia4) ) ///3124
      {
          if((ia1>ia2)&& (ia1>ia4))
          {
              if(ia2>ia4)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia3<<endl<<ia1<<endl<<ia2<<endl<<ia4<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia4<<endl<<ia2<<endl<<ia1<<endl<<ia3<<endl;


              }
          }
      }



if((ia3>ia1) && (ia3>ia2) && (ia3>ia4) ) ///3142
      {
          if((ia1>ia2)&& (ia1>ia4))
          {
              if(ia4>ia2)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia3<<endl<<ia1<<endl<<ia4<<endl<<ia2<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia2<<endl<<ia4<<endl<<ia1<<endl<<ia3<<endl;


              }
          }
      }

      if((ia3>ia1) && (ia3>ia2) && (ia3>ia4) ) ///3214
      {
          if((ia2>ia1)&& (ia2>ia4))
          {
              if(ia1>ia4)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia3<<endl<<ia2<<endl<<ia1<<endl<<ia4<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia4<<endl<<ia1<<endl<<ia2<<endl<<ia3<<endl;


              }
          }
      }

      if((ia3>ia1) && (ia3>ia2) && (ia3>ia4) ) ///3241
      {
          if((ia2>ia4)&& (ia2>ia1))
          {
              if(ia4>ia1)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia3<<endl<<ia2<<endl<<ia4<<endl<<ia1<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia1<<endl<<ia4<<endl<<ia2<<endl<<ia3<<endl;


              }
          }
      }

      if((ia3>ia1) && (ia3>ia4) && (ia3>ia2) ) ///3412
      {
          if((ia4>ia2)&& (ia4>ia1))
          {
              if(ia1>ia2)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia3<<endl<<ia4<<endl<<ia1<<endl<<ia2<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia2<<endl<<ia1<<endl<<ia4<<endl<<ia3<<endl;


              }
          }
      }

      if((ia3>ia1) && (ia3>ia2) && (ia3>ia4) ) ///3421
      {
          if((ia4>ia2)&& (ia4>ia1))
          {
              if(ia2>ia1)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia3<<endl<<ia4<<endl<<ia2<<endl<<ia1<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia1<<endl<<ia2<<endl<<ia4<<endl<<ia3<<endl;


              }
          }
      }

///-----------------------------------------------------------------------------------

        if((ia4>ia1) && (ia4>ia2) && (ia4>ia3) ) ///4123
      {
          if((ia1>ia2)&& (ia1>ia3))
          {
              if(ia2>ia3)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia4<<endl<<ia1<<endl<<ia2<<endl<<ia3<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia3<<endl<<ia2<<endl<<ia1<<endl<<ia4<<endl;


              }
          }
      }

      if((ia4>ia1) && (ia4>ia2) && (ia4>ia3) ) ///4132
      {
          if((ia1>ia2)&& (ia1>ia3))
          {
              if(ia3>ia2)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia4<<endl<<ia1<<endl<<ia3<<endl<<ia2<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia2<<endl<<ia3<<endl<<ia1<<endl<<ia4<<endl;


              }
          }
      }

      if((ia4>ia1) && (ia4>ia2) && (ia4>ia3) ) ///4213
      {
          if((ia2>ia1)&& (ia2>ia3))
          {
              if(ia1>ia3)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia4<<endl<<ia2<<endl<<ia1<<endl<<ia3<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia3<<endl<<ia1<<endl<<ia2<<endl<<ia4<<endl;


              }
          }
      }

      if((ia4>ia1) && (ia4>ia2) && (ia4>ia3) ) ///4231
      {
          if((ia2>ia3)&& (ia2>ia1))
          {
              if(ia3>ia1)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia4<<endl<<ia2<<endl<<ia3<<endl<<ia1<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia1<<endl<<ia3<<endl<<ia2<<endl<<ia4<<endl;


              }
          }
      }

      if((ia4>ia1) && (ia4>ia2) && (ia4>ia3) ) ///4312
      {
          if((ia3>ia2)&& (ia3>ia1))
          {
              if(ia2<ia1)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia4<<endl<<ia3<<endl<<ia1<<endl<<ia2<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia2<<endl<<ia1<<endl<<ia3<<endl<<ia4<<endl;


              }
          }
      }

      if((ia4>ia1) && (ia4>ia2) && (ia4>ia3) ) ///4321
      {
          if((ia3>ia2)&& (ia3>ia1))
          {
              if(ia2>ia1)
              {
                  cout<<"grupo 1 em ordem decrescente:  "<<endl;
                  cout<<ia4<<endl<<ia3<<endl<<ia2<<endl<<ia1<<endl;
                  cout<<"grupo 1 em ordem crescente:    "<<endl;
                  cout<<ia1<<endl<<ia2<<endl<<ia3<<endl<<ia4<<endl;


              }
          }
      }






    i=i+1;
    cout<<"o programa vai ser limpo     ";
    system("pause");

    }

    return 0;
}
