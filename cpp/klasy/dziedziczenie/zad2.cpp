#include <iostream>
using namespace std;

class Osoba
{
protected:
  string imie;

public:
  string nazwisko;

  string getImie()
  {
    return imie;
  }

  void setImie(string pImie)
  {
    imie = pImie;
  }
};

class Pracownik : protected Osoba
{
public:
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
    return imie;
  }

  void setImie(string pImie)
  {
    imie = pImie;
  }

  void display()
  {
    cout << "Nauczyciel  imie:" << getImie() << " nazwisko:" << getNazwisko() << endl;
  }
};

int main()
{
  Pracownik pracownik;
  pracownik.setImie("bob");
  pracownik.setNazwisko("nowak");
  pracownik.display();

  return 0;
}