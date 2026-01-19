#include <iostream>
#include <cstdlib>
#include <ctime>
#include "kostka.h"
using namespace std;

int main()
{
  srand(time(NULL));
  Kosc kosc1;
  cout << "liczba instacji klasy kosc: " << Kosc::liczbaInstancji << endl;
  cout << "liczba oczek w postaci liczbowej: " << kosc1.liczbaOczek << " liczba oczek w postaci napisowej: " << kosc1.wratoscKostki() << endl;
  cout << "nazwa pliku: " << kosc1.tab[kosc1.idPliku] << endl;

  Kosc kosc2(7);
  cout << "liczba instacji klasy kosc: " << Kosc::liczbaInstancji << endl;
  cout << "liczba oczek w postaci liczbowej: " << kosc2.liczbaOczek << " liczba oczek w postaci napisowej: " << kosc2.wratoscKostki() << endl;
  cout << "nazwa pliku: " << kosc2.tab[kosc2.idPliku] << endl;
  return 0;
}