#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  string nazwisko;
  int index = 0;
  bool czyZnaleziono = false;
  string dane = "";

  cout << "podaj nazwisko:";
  cin >> nazwisko;

  fstream plik;
  plik.open("dane.txt", ios::in | ios::app);

  if (plik.good())
  {
    while (!plik.eof())
    {
      string wartosc;

      if (index % 4 == 0)
      {
        if (czyZnaleziono)
        {
          cout << dane;
          return 0;
        }
        dane = "";
      }

      plik >> wartosc;
      dane += wartosc + " ";

      if (index % 4 == 1 && wartosc == nazwisko)
      {
        czyZnaleziono = true;
      }

      index++;
    }
  }
  else
  {
    cout << "Blad";
  }

  cout << "nie znaleziono";

  return 0;
}
