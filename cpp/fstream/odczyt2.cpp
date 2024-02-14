#include <iostream>
#include <fstream>
using namespace std;

struct
    person
{
  string imie;
  string nazwisko;
  int wiek;
  int numberButa;
};

int main()
{
  const int liczbaOsob = 3;
  person osoby[liczbaOsob];

  fstream plik;
  plik.open("dane.txt", ios::in | ios::app);

  if (plik.good())
  {
    int i = 0;
    while (!plik.eof())
    {

      plik >> osoby[i].imie >> osoby[i].nazwisko >> osoby[i].wiek >> osoby[i].numberButa;
      i++;
    }
  }
  else
  {
    cout << "Blad";
  }

  cout << "Tylko dziadki:" << endl;
  for (int i = 0; i < liczbaOsob; i++)
  {
    if (osoby[i].wiek > 60)
    {
      cout << "Imie:" << osoby[i].imie << endl;
      cout << "nazwisko:" << osoby[i].nazwisko << endl;
      cout << "wiek:" << osoby[i].wiek << endl;
      cout << "numberButa:" << osoby[i].numberButa << endl;
      cout << "=====================" << endl;
    }
  }

  return 0;
}
