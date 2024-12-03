// GRUPA A
//  Stwórz klasę „książka” zawierającą:
//  – pola prywatne: tytuł, autor, rok wydania
//  – settery i gettery do prywatnych pól
//  – metoda wypisująca informację o książce
//  – lista użyta do inicjalizacji
//  – konstruktor parametryczny i kopiujący
//  – pole statyczne zliczające liczbę książek
//  – delegowanie konstruktora bezparametrowego do konstruktora parametrycznego
//  – W programie użyty konstruktor parametryczny i kopiujący
//  -W programie zdefiniuj funkcje która pobiera obiekt jako parametr i zwraca obiekt  w którym imie i nazwisko autora są wielkimi literami.
//  GRUPA B
//  Stwórz klasę „film” zawierającą:
//  – pola prywatne: tytuł, reżyser, rok wydania
//  – settery i gettery do prywatnych pól
//  – metoda wypisująca informację o filmie
//  – lista użyta do inicjalizacji
//  – konstruktor parametryczny i kopiujący
//  – pole statyczne zliczające liczbę filmów
//  – delegowanie konstruktora bezparametrowego do konstruktora parametrycznego
//  – W programie użyty konstruktor parametryczny i kopiujący
//  --W programie zdefiniuj funkcje która pobiera obiekt jako parametr i zwraca obiekt  w którym rok wydania jest pomniejszony o 199.

#include <iostream>
using namespace std;

class Film
{
private:
  string tytul;
  string resyzer;
  int rokWydania;
  static int liczbaFilmow;

public:
  int getLiczbaFilmow()
  {
    return liczbaFilmow;
  }

  string getTytul()
  {
    return tytul;
  }
  string getRezyser()
  {
    return resyzer;
  }
  int getRokWydania()
  {
    return rokWydania;
  }
  void setTytul(string pTytul)
  {
    tytul = pTytul;
  }
  void setRezyser(string pRezyser)
  {
    resyzer = pRezyser;
  }
  void setRokWydania(int pRokWydania)
  {
    rokWydania = pRokWydania;
  }

  void display()
  {
    cout << "Film:" << endl;
    cout << "tytuł:" << tytul << endl;
    cout << "resyzer:" << resyzer << endl;
    cout << "rokWydania:" << rokWydania << endl;
  }

  //lista inizaclizacyjna
  Film() : tytul{""}, resyzer{""}, rokWydania{0}
  {
    liczbaFilmow++;
  }

  Film(string pTytul, string pRezyser, int pRokWydania) : Film()
  {
    tytul = pTytul;
    resyzer = pRezyser;
    rokWydania = pRokWydania;
  }

  Film(const Film &film)
  {
    liczbaFilmow++;
    tytul = film.tytul;
    resyzer = film.resyzer;
    rokWydania = film.rokWydania;
  }
};

int Film::liczbaFilmow = 0;

Film *zmiejszRokWydania(Film *film)
{
  film->setRokWydania(film->getRokWydania() - 199);
  return film;
}

int main()
{
  Film film1("tytul", "rezyser", 2000);
  Film *film2 = new Film(film1);
  film2 = zmiejszRokWydania(film2);
  film1.display();
  film2->display();
  Film film3;
  film3.display();
  cout << film2->getLiczbaFilmow();

  return 0;
}