#include <iostream>
#include <vector>
#include "maxMin.h"
using namespace std;

int main()
{
  int rozmiar = 10;
  int tablicaStatyczna[rozmiar];
  int *tablicaDynamiczna = new int[rozmiar];
  vector<int> wektor;

  wypelnijStatycznie(tablicaStatyczna, rozmiar);
  wypelnij(tablicaDynamiczna, rozmiar);
  wypelnijWektor(wektor, rozmiar);

  cout << "Tablica statyczna" << endl;
  wypiszStatycznie(tablicaStatyczna, rozmiar);
  minStatycznie(tablicaStatyczna, rozmiar);
  maxStatycznie(tablicaStatyczna, rozmiar);
  cout << "Tablica dynamiczna" << endl;
  wypisz(tablicaDynamiczna, rozmiar);
  cout << "min:" << min(tablicaDynamiczna, rozmiar) << endl;
  cout << "max:" << max(tablicaDynamiczna, rozmiar) << endl;
  cout << "Wektor" << endl;
  wypiszWektor(wektor);
  cout << "min:" << minWektor(wektor) << endl;
  cout << "max:" << maxWektor(wektor) << endl;

  return 0;
}