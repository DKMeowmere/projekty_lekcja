#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  string imie;
  string nazwisko;
  short wiek;
  short but;

  cout << "podaj imie:";
  cin >> imie;
  cout << "podaj nazwisko:";
  cin >> nazwisko;
  cout << "podaj wiek:";
  cin >> wiek;
  cout << "podaj numer buta:";
  cin >> but;

  fstream plik;
  plik.open("dane.txt", ios::out | ios::app);

  if (plik.good())
  {
    plik << imie << " " << nazwisko << " " << wiek << " " << but;
    plik << endl;
    plik.close();
  }
  else
  {
    cout << "Blad";
  }

  return 0;
}
