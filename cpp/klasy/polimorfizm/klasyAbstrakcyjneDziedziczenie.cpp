#include <iostream>
using namespace std;

class Osoba
{
public:
  virtual void wyswietlDane() = 0;
};

class Pracownik
{
public:
  virtual void pracuj() = 0;
};

class Lekarz : public Osoba, public Pracownik
{
public:
  string imie;
  string nazwisko;
  string specjalizacja;
  void wyswietlDane()
  {
    cout << imie << " " << nazwisko << ", specjalizacja:" << specjalizacja << endl;
  };

  void pracuj()
  {
    cout << "Lekarz pracuje..." << endl;
  };

  Lekarz() {};

  Lekarz(string pImie, string pNazwisko, string pSpecjalizacja)
  {
    imie = pImie;
    nazwisko = pNazwisko;
    specjalizacja = pSpecjalizacja;
  };
};

int main()
{
  Lekarz *wskaznik = new Lekarz("imie1", "nazwisko1", "stomatolog");
  cout << "DANE LEKARZA 1:" << endl;
  wskaznik->wyswietlDane();
 
  return 0;
}