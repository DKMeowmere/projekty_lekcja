// Grupa A: Stworz szablon klasy komórka który zawiera pola cena maksymalna i minimalne i metodę średnia cena. Zastosuj  2 parametry uogólnione. Wykonaj specjalizację dla float double, konkretyzację dla int float. Tak stwórz definicje aby secjalizację i konkretyzację wykonać jawnie i niejawnie.

#include <iostream>
#include <cmath>
using namespace std;

template <typename T, typename T2>

class Komorka
{
public:
  Komorka(T pMinCena, T2 pMaxCena)
  {
    minCena = pMinCena;
    maxCena = pMaxCena;
  }
  T minCena;
  T2 maxCena;

  T srednia()
  {
    return (minCena + maxCena) / 2;
  };
};

template <>
class
    Komorka<float, double>
{
public:
  Komorka(float pMinCena, double pMaxCena)
  {
    minCena = pMinCena;
    maxCena = pMaxCena;
  }
  float minCena;
  double maxCena;
  float srednia()
  {
    cout << "specjalizacja dla float double" << endl;
    float wynik = (minCena + maxCena) / 2;
    return wynik;
  }
};

int main()
{
  Komorka<float, double> komorka1 = Komorka<float, double>(100, 200);
  cout << komorka1.srednia() << endl;

  Komorka komorka2 = Komorka((float)300, (double)500);
  cout << komorka2.srednia() << endl;

  Komorka<int, float> komorka3(200, 400);
  cout << komorka3.srednia() << endl;

  Komorka komorka4((int)1000, (float)2000);
  cout << komorka4.srednia() << endl;

  return 0;
}