#include <iostream>
using namespace std;

// **********************************************
// nazwa funkcji: euklides
// opis funkcji: funkcja oblicza najwiekszy wspolny dzielnik dwoch liczb calkowitych
// parametry: pierwsza liczba calkowita – a
//            druga liczba calkowita – b
// zwracany typ i opis: int – najwiekszy wspolny dzielnik liczb a i b
// autor:  00000000000
// ***********************************************

int euklides(int a, int b)
{
  while(a != b){
    if(a > b){
      a = a -b;
    } else {
      b = b - a;
    }
  }

  return a;
}

int main()
{
  int a, b;
  cout << "Podaj dwie liczby calkowite wieksze od zera: ";
  cin >> a >> b;

  if(a <= 0 || b <= 0){
    cout << "Liczby musza byc wieksze od zera" << endl;
    return 1;
  }

  int wynik = euklides(a, b);
  cout << "Wynik: " << wynik << endl;

  return 0;
}