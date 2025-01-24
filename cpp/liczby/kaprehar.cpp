#include <iostream>

using namespace std;

int wylosuj()
{
  srand(time(NULL));

  return rand() % 10000 + 1000;
}

void wypisz(int *tablica)
{
  for (int i = 0; i < 4; i++)
  {
    cout << tablica[i];
  }
  cout << endl;
}

void sortuj(int *tablica)
{
  for (int i = 1; i < 4; i++)
  {
    int temp = tablica[i];
    int j = i - 1;

    while (tablica[j] > temp && j >= 0)
    {
      tablica[j + 1] = tablica[j];

      j--;
    }

    tablica[j + 1] = temp;
  }
}

void sortujOdwrotnie(int *tablica)
{
  for (int i = 1; i < 4; i++)
  {
    int temp = tablica[i];
    int j = i - 1;

    while (tablica[j] < temp && j >= 0)
    {
      tablica[j + 1] = tablica[j];

      j--;
    }

    tablica[j + 1] = temp;
  }
}

int tablicaNaLiczbe(int *tablica)
{
  int liczba = 0;

  liczba += tablica[3];
  liczba += tablica[2] * 10;
  liczba += tablica[1] * 100;
  liczba += tablica[0] * 1000;

  return liczba;
}

void liczbaNaTablice(int *tablica, int liczba)
{
  tablica[3] = liczba % 10;
  liczba /= 10;
  tablica[2] = liczba % 10;
  liczba /= 10;
  tablica[1] = liczba % 10;
  liczba /= 10;
  tablica[0] = liczba;
}

int kaprehar(int liczba)
{
  int liczbaIteracji;

  while (liczba != 6174)
  {
    liczbaIteracji++;
    int wiekszaTablica[4];
    liczbaNaTablice(wiekszaTablica, liczba);
    sortujOdwrotnie(wiekszaTablica);
    int wiekszaLiczba = tablicaNaLiczbe(wiekszaTablica);

    int mniejszaTablica[4];
    liczbaNaTablice(mniejszaTablica, liczba);
    sortuj(mniejszaTablica);
    int mniejszaLiczba = tablicaNaLiczbe(mniejszaTablica);

    liczba = wiekszaLiczba - mniejszaLiczba;
  }

  return liczbaIteracji;
};

int main()
{
  int liczba = 9258;
  int tablica[4]{3,5,7,3};

  cout << tablicaNaLiczbe(tablica) << endl;
  cout << kaprehar(liczba) << endl;
}