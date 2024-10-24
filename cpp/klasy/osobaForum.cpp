#include <iostream>
using namespace std;

class Osoba
{
private:
  unsigned int id;
  string imie;

public:
  static unsigned int iloscInstancji;

  Osoba(int podaneId, string podaneImie);
  Osoba();
  Osoba(const Osoba &osoba);

  void wypisz(string podaneImie)
  {
    if (imie == "")
    {
      cout << "Brak danych" << endl;
      return;
    }
    cout << "Cześć!" << podaneImie << ", mam na imie " << imie << endl;
  }

  int getId()
  {
    return id;
  }

  string getImie()
  {
    return imie;
  }

  void setImie(string podaneImie)
  {
    imie = podaneImie;
  }

  void setId(int podaneId)
  {
    id = podaneId;
  }
};

unsigned int Osoba::iloscInstancji = 0;
Osoba::Osoba()
{
  cout << "Nastąpiło wywołanie konstruktora domyślnego ..." << endl;
  iloscInstancji++;
};
Osoba::Osoba(int podaneId, string podaneImie) : Osoba::Osoba()
{
  cout << "Nastąpiło wywołanie konstruktora parametrycznego ..." << endl;
  id = podaneId;
  imie = podaneImie;
}
Osoba::Osoba(const Osoba &osoba) : Osoba::Osoba()
{
  cout << "Nastąpiło wywołanie konstruktora kopiującego ..." << endl;
  id = osoba.id;
  imie = osoba.imie;
};

int main()
{
  Osoba osoba1(1, "111");
  Osoba osoba2;
  Osoba osoba3(osoba1);

  osoba1.wypisz("aaa");
  osoba2.wypisz("bbb");
  osoba3.wypisz("ccc");

  cout << osoba1.iloscInstancji << endl;
  return 0;
}