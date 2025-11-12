#include <iostream>
using namespace std;

// ******************************************************
//   nazwa klasy: Film
//   pola: tytul - przechowuje tytuł filmu
//          liczbaWypozyczen - przechowuje liczbę wypożyczeń filmu
//   metody: getTytul, string – zwraca tytuł filmu
//           setTytul, void – ustawia tytuł filmu
//           getLiczbaWypozyczen, int – zwraca liczbę wypożyczeń filmu
//           wypozycz, void – zwiększa liczbę wypożyczeń o 1
//   informacje: Klasa reprezentuje film w systemie wypożyczalni filmów.
//               Pozwala na zarządzanie tytułem oraz liczbą wypożyczeń filmu.
//   autor: 0000000000
// ******************************************************

class Film
{
protected:
  string tytul;
  int liczbaWypozyczen;

public:
  Film()
  {
    tytul = "";
    liczbaWypozyczen = 0;
  }

  string getTytul()
  {
    return tytul;
  }

  void setTytul(string nowyTytul)
  {
    tytul = nowyTytul;
  }

  int getLiczbaWypozyczen()
  {
    return liczbaWypozyczen;
  }

  void wypozycz()
  {
    liczbaWypozyczen++;
  }
};

int main()
{
  Film film;
  cout << "Tytul filmu: " << film.getTytul();
  cout << ", Liczba wypozyczen: " << film.getLiczbaWypozyczen() << endl;

  film.setTytul("tytul1");
  film.wypozycz();

  cout << "Tytul filmu: " << film.getTytul();
  cout << ", Liczba wypozyczen: " << film.getLiczbaWypozyczen() << endl;
  return 0;
}