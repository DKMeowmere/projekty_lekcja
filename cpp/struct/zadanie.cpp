#include <iostream>
using namespace std;

struct Kalendarz
{
  int lata;
  int miesiace;
  int dni;
};
void oblicz(Kalendarz &kalendarz, int wartosc)
{
  kalendarz.dni += wartosc;
  int miesiace = kalendarz.dni / 30;
  if (kalendarz.dni > 29)
  {
    kalendarz.miesiace += miesiace;
    kalendarz.dni -= miesiace * 30;
  }
  int lata = kalendarz.miesiace / 12;
  if (kalendarz.miesiace > 11)
  {
    kalendarz.lata += lata;
    kalendarz.miesiace -= lata * 12;
  }
}

void wypisz(Kalendarz kalendarz)
{
  cout << "lata:" << kalendarz.lata << endl;
  cout << "miesiace:" << kalendarz.miesiace << endl;
  cout << "dni:" << kalendarz.dni << endl;
}

int main()
{
  Kalendarz kalendarz;
  kalendarz.lata = 2007;
  kalendarz.miesiace = 3;
  kalendarz.dni = 0;

  oblicz(kalendarz, 1100);
  wypisz(kalendarz);

  return 0;
}