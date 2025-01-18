#include <iostream>
using namespace std;

class Osoba
{
private:
  string nazwisko;

public:
  string imie;

  string getNazwisko()
  {
    return nazwisko;
  }

  void setNazwisko(string pNazwisko)
  {
    nazwisko = pNazwisko;
  }
};

class Pracownik : private Osoba
{
public:
  string getNazwisko()
  {
    return Osoba::getNazwisko();
  }

  void setNazwisko(string pNazwisko)
  {
    Osoba::setNazwisko(pNazwisko);
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
    cout << "Pracownik  imie:" << getImie() << " nazwisko:" << getNazwisko() << endl;
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