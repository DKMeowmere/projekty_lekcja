#include <iostream>
#include <cstdlib>
using namespace std;

class DzialaniaNaTablicach
{
  int liczbaElementow;
  int *tablica;

public:
  DzialaniaNaTablicach(int rozmiarTablicy)
  {
    liczbaElementow = rozmiarTablicy;
    tablica = new int[liczbaElementow];

    srand(time(NULL));
    for (int i = 0; i < rozmiarTablicy; i++)
    {
      tablica[i] = rand() % 1000;
    }
  }
  void display()
  {
    for (int i = 0; i < liczbaElementow; i++)
    {
      cout << i << ": " << tablica[i] << endl;
    }
  }
  int wyszukaj(int liczba)
  {
    for (int i = 0; i < liczbaElementow; i++)
    {
      if (tablica[i] == liczba)
      {
        return i;
      }
    }

    return -1;
  }
  int liczbaNieparzystych()
  {
    int iloscLiczbNieparzystach = 0;

    cout << "Nieparzyste liczby to:" << endl;
    for (int i = 0; i < liczbaElementow; i++)
    {
      if (tablica[i] % 2 == 1)
      {
        cout << tablica[i] << endl;
        iloscLiczbNieparzystach++;
      }
    }

    return iloscLiczbNieparzystach;
  }
  double srednia()
  {
    int sumaLiczb = 0;

    for (int i = 0; i < liczbaElementow; i++)
    {

      sumaLiczb += tablica[i];
    }

    return sumaLiczb / liczbaElementow;
  }
};

int main()
{
  DzialaniaNaTablicach tablica(25);
  tablica.display();
  
  cout << "Podaj liczbe do wyszukania" << endl;
  int liczbaDoWyszukania;
  cin >> liczbaDoWyszukania;
  int wyszukanyIndex = tablica.wyszukaj(liczbaDoWyszukania);

  if (wyszukanyIndex != -1)
  {
    cout << "Indeks tej liczby to:" << wyszukanyIndex << endl;
  }

  int iloscLiczbNieparzystych = tablica.liczbaNieparzystych();
  cout << "Ilość liczb nieparzystych:" << iloscLiczbNieparzystych << endl;

  cout << "srednia:" << tablica.srednia() << endl;

  return 0;
}