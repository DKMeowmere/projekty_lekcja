#include <iostream>
using namespace std;

// ************************************************
//  klasa: Notatka
//  opis: klasa reprezentująca notatkę z tytułem i treścią oraz unikalnym ID
//  pola:  id - unikalny identyfikator notatki
//         licznik - statyczne pole przechowujące liczbę utworzonych notatek
//         tytul - tytuł notatki
//         tresc - treść notatki
//  autor: 0000000000000
// ************************************************

class Notatka
{
private:
  int id;
  static int licznik;
protected:
  string tytul;
  string tresc;

public:
  Notatka(string pTytul, string pTresc)
  {
    id = ++licznik;
    tytul = pTytul;
    tresc = pTresc;
  }

  void wyswietl()
  {
    cout << "Tytuł: " << tytul << ", Treść: " << tresc << endl;
  }

  void debug()
  {
    cout << "ID: " << id << "; tytuł: " << tytul << "; treść: " << tresc << "; liczba notatek: " << licznik << endl;
  }
};

int Notatka::licznik = 0;

int main()
{
  Notatka notatka1("tytul1", "tresc1");
  notatka1.wyswietl();
  notatka1.debug();

  Notatka notatka2("tytul2", "tresc2");
  notatka2.wyswietl();
  notatka2.debug();
  return 0;
}