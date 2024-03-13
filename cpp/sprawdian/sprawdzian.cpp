#include <iostream>
#include <fstream>
using namespace std;

struct Osoba
{
  string imie;
  int wiek;
};

int wczytajDlugosc()
{
  fstream plik;
  plik.open("dane.txt", ios::in);
  int liczbaOsob = 0;
  string temp = "";
  if (plik.good())
  {
    while (!plik.eof())
    {
      plik >> temp >> temp;
      liczbaOsob++;
    }
  }
  else
  {
    cout << "Blad";
  }

  if (temp == "")
  {
    return 0;
  }

  plik.close();
  return liczbaOsob;
}

void wczytaj(Osoba *osoby)
{
  int i = 0;
  fstream plik;
  plik.open("dane.txt", ios::in);

  if (plik.good())
  {
    while (!plik.eof())
    {
      plik >> osoby[i].imie >> osoby[i].wiek;
      i++;
    }
  }
  else
  {
    cout << "Blad";
  }
}

void wypisz(Osoba osoba)
{
  cout << "imie:" << osoba.imie << endl;
  cout << "nazwisko:" << osoba.wiek << endl;
}

void wypiszWszystkie(Osoba *osoby, int rozmiar)
{
  for (int i = 0; i < rozmiar; i++)
  {
    wypisz(osoby[i]);
  }
}

void przeszukaj(Osoba *osoby, int rozmiar)
{
  bool czyZnaleziono = false;
  string imie;
  cout << "Podaj imie osoby, którą chcesz znalezc:" << endl;
  cin >> imie;
  int wiek;
  cout << "Podaj wiek osoby, którą chcesz znalezc:" << endl;
  cin >> wiek;

  for (int i = 0; i < rozmiar; i++)
  {
    if (osoby[i].imie == imie || osoby[i].wiek == wiek)
    {
      cout << "=======" << endl;
      czyZnaleziono = true;
      wypisz(osoby[i]);
      cout << "========" << endl;
    }
  }

  if (!czyZnaleziono)
  {
    cout << "Nie znaleziono" << endl;
  }
}

void dopisz()
{
  int rozmiar; 
  cout << "Podaj ilosc osob do dodania:" << endl;
  cin >> rozmiar;
  Osoba *osoby = new Osoba[rozmiar];
  fstream plik;
  plik.open("dane.txt", ios::out | ios::app);

  if (plik.good())
  {
    plik << endl;
    for (int i = 0; i < rozmiar; i++)
    {
      cout << "Podaj imie osoby:" << i + 1 << endl;
      cin >> osoby[i].imie;
      cout << "Podaj wiek osoby:" << i + 1 << endl;
      cin >> osoby[i].wiek;
      plik << osoby[i].imie << " " << osoby[i].wiek;
      if (i != rozmiar - 1)
      {
        plik << endl;
      }
    }
    plik.close();
  }
  else
  {
    cout << "Blad";
  }
}

int main()
{
  dopisz();

  int rozmiar = wczytajDlugosc();
  Osoba *osoby = new Osoba[rozmiar];
  wczytaj(osoby);
  przeszukaj(osoby, rozmiar);

  return 0;
}