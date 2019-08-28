/ * ************************************************ *********
- Autor: Milene Caroline BD Chaves
- Descrição: Tabuada
************************************************** ******* * /
# include  < iostream >
# include  < locale.h >
# include  < cstdlib >

using  namespace  std ;

int  main ()
{
    // Declaração de variáveis
      int iprazo = 0 ;
      int ivista = 0 ;
      int i=0;
      int ivalor=0;
      int ivp=0;
      int ivv=0;
      char cescolha=0;

 while (i<15)
 {
   cout<<" valor total das compras:  ";
   cin>>ivalor;
   cout<< " a vista ou a prazo";
   cin>>cescolha;


   switch (tolower(cescolha))
   {case 'p':
   iprazo=iprazo+1;
   i=i+1;
   cout<< " a prazo \n";
   ivp=ivalor+ivp;
   break;

   case 'v':
   ivista=ivista+1;
   i=i+1;
   cout<< " a vista \n";
   ivv+ivalor+ivv;
   break;

}



}

   cout<< " total de vendas a prazo"<<iprazo<< " valor total: " ivp\n;

   cout<< " total de vendas a vista"<<ivista<< " valor total de: " ivv\n;

}
