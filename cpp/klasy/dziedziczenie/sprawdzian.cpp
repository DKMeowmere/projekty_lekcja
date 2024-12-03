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
protected:
  string imie;

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
  string przedmiot;

public:
  string getPrzedmiot()
  {
    return przedmiot;
  }

  void setPrzedmiot(string pPrzedmiot)
  {
    przedmiot = pPrzedmiot;
  }

  string getImie()
  {
    return imie;
  }

  void setImie(string pImie)
  {
    imie = pImie;
  }

  void display()
  {
    cout << "Nauczyciel  imie:" << imie << " przedmiot:" << przedmiot << endl;
  }
};

int main()
{
  Nauczyciel nauczyciel;
  nauczyciel.setImie("bob");
  nauczyciel.setPrzedmiot("polski");
  nauczyciel.display();

  return 0;
}