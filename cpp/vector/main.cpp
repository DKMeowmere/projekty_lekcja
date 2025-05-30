#include <iostream>
#include <vector>
#include "maxMin.h"
using namespace std;
//Apka ma wyświetlać trzy zdjęcia w losowej kolejności po kliknieciu przycisku losuj, każde 3 sekundy. Przyciski z napisami 1,2,3 mają wyświetlać konkretne zdjęcia o klikniętym numerze.
// ZAD na 2:
// kalkulator 4 proste dzialania
// ZAD na 3
// wejscie 2 liczby całkowite. Wyjście NWD tych liczb. Algorytm Euklidesa:
// Obraz
// ZAD na 4
// Wyświetl po klknięciu liczbę znaków wprowadzonego stringa.
// ZAD na5
// Apka ma wyświetlać trzy zdjęcia w losowej kolejności po kliknieciu przycisku losuj, każde 3 sekundy. Przyciski z napisami 1,2,3 mają wyświetlać konkretne zdjęcia o klikniętym numerze.
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