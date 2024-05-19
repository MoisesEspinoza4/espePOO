#include <iostream>
using namespace std;
#include "miLibreria.h"

int main()
{
    int a, b;
      cout << "Ingrese el primer numero:  ";
      cin>>a;

     cout << "Ingrese el segundo numero:  ";
      cin>>b;

      cout << "Suma: " << sumar(a,b) << endl;
      cout << "Resta: " << restar(a,b) << endl;
      cout << "Multiplica: " << multiplicar(a,b) << endl;
      if (b != 0)
      {
          cout << "Dividir: " << dividir(a,b) << endl;
      }
      else
      {
           cout << "No puede dividir por cero: " << endl;
      }
    return 0;

}