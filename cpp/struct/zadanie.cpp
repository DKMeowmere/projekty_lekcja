#include <iostream>
using namespace std;

struct Jednostki
{
  int litry;
  int galony;
  int wanny;
  int cysterny;
};

void oblicz(Jednostki &jednostki, int wartosc)
{
  jednostki.litry += wartosc;
  int galony = jednostki.litry / 5;
  if (jednostki.litry > 4)
  {
    jednostki.galony += galony;
    jednostki.litry -= galony * 5;
  }

  int wanny = jednostki.galony / 40;
  if (jednostki.galony > 39)
  {
    jednostki.wanny += wanny;
    jednostki.galony -= wanny * 40;
  }

  int cysterny = jednostki.wanny / 5;
  if (jednostki.wanny > 4)
  {
    jednostki.cysterny += cysterny;
    jednostki.wanny -= cysterny * 5;
  }
}

void wypisz(Jednostki jednostki)
{
  cout << "litry:" << jednostki.litry << endl;
  cout << "galony:" << jednostki.galony << endl;
  cout << "wanny:" << jednostki.wanny << endl;
  cout << "cysterny:" << jednostki.cysterny << endl;
}

int main()
{
  cout << "Podaj liczbe litrów, a ja znormalizuje jednostki i je wypisze" << endl;
  int wartosc;
  cin >> wartosc;

  Jednostki jednostki;
  jednostki.litry = 0;
  jednostki.galony = 0;
  jednostki.wanny = 0;
  jednostki.cysterny = 0;

  oblicz(jednostki, wartosc);
  wypisz(jednostki);

  return 0;
}