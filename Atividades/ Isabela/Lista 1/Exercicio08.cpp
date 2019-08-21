
    #include  <iostream>
    #include  <locale.h>
    #include  <cstdlib>

    using namespace std;

    int main()

{
    int iPesoKg = 0 ;
    int iGramas = 0 ;

    setlocale (LC_ALL,"");
    system("COLOR F1");

    cout << " Insira seu peso " ;
    cin >> iPesoKg;

    iGramas = (iPesoKg*1000);
    cout << " O seu peso em gramas é " << iGramas <<".";

}
