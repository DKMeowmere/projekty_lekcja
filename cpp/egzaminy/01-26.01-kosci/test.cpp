#include <iostream>
#include <cassert>
#include "kostka.h"
using namespace std;

void zakresWartosci()
{
  Kosc kosc;
  assert(kosc.liczbaOczek > 0 && kosc.liczbaOczek < 7);
  cout << "METODA zakres Wartosci STATUS: OK" << endl;
}
void wartoscBezZmian()
{
  Kosc kosc;
  int rzut = kosc.liczbaOczek;
  kosc.czyDostepna = false;
  kosc.rzut();
  assert(kosc.czyDostepna == false && rzut == kosc.liczbaOczek);
  cout << "METODA wartosc bez zmian STATUS: OK" << endl;
}

int main()
{
  zakresWartosci();
  wartoscBezZmian();
  return 0;
}