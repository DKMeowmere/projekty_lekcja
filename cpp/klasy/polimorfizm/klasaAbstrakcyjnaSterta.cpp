#include <iostream>
using namespace std;

class Osoba
{
public:
  string imie;
  string nazwisko;

  virtual void wyswietlDane() = 0;
};

class Pracownik : public Osoba
{
public:
  string stanowisko;
  void wyswietlDane()
  {
    cout << imie << " " << nazwisko << ", " << stanowisko << endl;
  };

  Pracownik(string pImie, string pNazwisko, string pStanowisko)
  {
    imie = pImie;
    nazwisko = pNazwisko;
    stanowisko = pStanowisko;
  }
};

class Uczen : public Osoba
{
public:
  string klasa;

  void wyswietlDane()
  {
    cout << imie << " " << nazwisko << ", " << klasa << endl;
  };

  Uczen(string pImie, string pNazwisko, string pKlasa)
  {
    imie = pImie;
    nazwisko = pNazwisko;
    klasa = pKlasa;
  }
};
int main()
{
  Osoba *wskaznik = new Pracownik("imie1", "nazwisko1", "nauczyciel");

  cout << "DANE PRACOWNIKA:" << endl;
  wskaznik->wyswietlDane();

  wskaznik = new Uczen("imie2", "nazwisko2", "4");
  cout << "DANE UCZNIA:" << endl;
  wskaznik->wyswietlDane();
  return 0;
}