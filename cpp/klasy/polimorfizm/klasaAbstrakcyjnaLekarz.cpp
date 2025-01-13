#include <iostream>
using namespace std;

class Osoba
{
public:
  virtual void wyswietlDane() = 0;
};

class Lekarz : public Osoba
{
public:
  string imie;
  string nazwisko;
  string specjalizacja;
  void wyswietlDane()
  {
    cout << imie << " " << nazwisko << ", specjalizacja:" << specjalizacja << endl;
  };

  Lekarz() {};

  Lekarz(string pImie, string pNazwisko, string pSpecjalizacja)
  {
    imie = pImie;
    nazwisko = pNazwisko;
    specjalizacja = pSpecjalizacja;
  };
};

class Ordynator : public Lekarz
{
public:
  string kieruje;

  void wyswietlDane()
  {
    cout << imie << " " << nazwisko << ", specjalizacja:" << specjalizacja << ", kieruje odziałem:" << kieruje << endl;
  };

  Ordynator(string pImie, string pNazwisko, string pSpecjalizacja, string pKieruje)
  {
    imie = pImie;
    nazwisko = pNazwisko;
    specjalizacja = pSpecjalizacja;
    kieruje = pKieruje;
  };
};
int main()
{
  Osoba *wskaznik = new Lekarz("Jan", "Kowalski", "proktolog");

  cout << "DANE LEKARZA 1:" << endl;
  wskaznik->wyswietlDane();
  wskaznik = new Lekarz("Jan", "Nowak", "kardiolog");
  cout << "DANE LEKARZA 2:" << endl;
  wskaznik->wyswietlDane();

  wskaznik = new Ordynator("imie1", "nazwisko1", "stomatolog", "oddział 1");
  cout << "DANE ORDYNATORA 1:" << endl;
  wskaznik = new Ordynator("imie2", "nazwisko2", "proktolog", "oddział wewnetrzny");
  cout << "DANE ORDYNATORA 2:" << endl;
  wskaznik->wyswietlDane();
  return 0;
}