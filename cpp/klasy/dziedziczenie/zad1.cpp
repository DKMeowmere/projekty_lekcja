// Grupa A :klasy bazowe mają własności które się dziedziczą, ale nie są dostępne w funkcji main przez operator wyłuskania.

// Klasa pochodna mają mieć  odziedziczone własności prywatne oraz metodę display.

// Ma być możliwość edycji wszystkich własności klasy pochodnej .
// Gruba B:
// klasy bazowe mają własności które się nie dziedziczą.
// Klasa pochodna ma
//  metodę display.

// Ma być możliwość edycji wszystkich własności klasy pochodnej .

#include <iostream>
using namespace std;

class Pracownik
{
  string imie;

protected:
  string nazwisko;

public:
  string getImie()
  {
    return imie;
  }

  void setImie(string pImie)
  {
    imie = pImie;
  }
};

class Nauczyciel : private Pracownik
{
public:
  string przedmiot;

  string getNazwisko()
  {
    return nazwisko;
  }

  void setNazwisko(string pNazwisko)
  {
    nazwisko = pNazwisko;
  }

  string getImie()
  {
    return Pracownik::getImie();
  }

  void setImie(string pImie)
  {
    Pracownik::setImie(pImie);
  }

  void display()
  {
    cout << "Nauczyciel  imie:" << getImie() << " nazwisko:" << getNazwisko() << " przedmiot:" << przedmiot << endl;
  }
};

int main()
{
  Nauczyciel nauczyciel;
  nauczyciel.setImie("bob");
  nauczyciel.setNazwisko("nowak");
  nauczyciel.przedmiot = "polski";
  nauczyciel.display();

  return 0;
}