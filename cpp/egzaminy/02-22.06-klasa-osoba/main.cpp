#include <iostream>
using namespace std;

class Osoba
{
private:
  int id;
  string imie;

public:
  static int liczbaOsob;

  Osoba()
  {
    liczbaOsob++;
    id = 0;
    imie = "";
  }

  Osoba(int pId, string pImie)
  {
    liczbaOsob++;
    id = pId;
    imie = pImie;
  }

  Osoba(const Osoba &wzorzec)
  {
    liczbaOsob++;
    id = wzorzec.id;
    imie = wzorzec.imie;
  }

  void powitanie(string pImie)
  {
    if (imie == "")
    {
      cout << "Brak danych" << endl;
      return;
    }

    cout << "Cześć " << pImie << ", jestem " << imie << endl;
  }
};

int Osoba::liczbaOsob = 0;

int main()
{
  cout << "Liczba zarejestrowanych osób to " << Osoba::liczbaOsob << endl;
  Osoba osoba1;
  osoba1.powitanie("Jan");

  int id;
  string imie;
  cout << "Podaj ID: ";
  cin >> id;
  cout << "Podaj imię: ";
  cin >> imie;
  Osoba osoba2(id, imie);
  osoba2.powitanie("Jan");

  Osoba osoba3 = osoba2;
  osoba3.powitanie("Jan");
  cout << "Liczba zarejestrowanych osób to " << Osoba::liczbaOsob << endl;

  return 0;
}