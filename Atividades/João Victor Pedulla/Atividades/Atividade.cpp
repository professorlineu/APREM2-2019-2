#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
   float fApartamento = 0;
   float fOnibus = 0;
   float fGastos = 0;
   float fSomamensal = 0;
   int iquantidademes = 0;
   float fresultado = 0;

   cout << "Valor dos seus gastos medios mensais com moradia: ";
   cin >> fApartamento;

   cout << "Valor dos seus gastos medios mensais com transporte: ";
   cin >> fOnibus;

   cout << "Valor dos seus outros gastos medios mensais: ";
   cin >> fGastos;

   fSomamensal = fApartamento + fOnibus + fGastos;

   cout << "Gastos no mes = " << fSomamensal <<endl;

   cout << "Informe a quantidade de meses: ";
   cin >> iquantidademes;

   fresultado = fSomamensal * iquantidademes;

   cout << "Gasto final:" << fresultado;
}
