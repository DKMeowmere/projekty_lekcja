#include <iostream>
using namespace std;

class Liczby
{
  int rozmiar;
  int *tablica;

public:
  Liczby(int r) : rozmiar(r)
  {
    tablica = new int[rozmiar];
    srand(time(NULL));
    for (int i = 0; i < rozmiar; i++)
    {
      tablica[i] = rand() % 1000 + 1;
    }
  }

  //**********************************************
  // nazwa metody: wyswietl
  // opis metody: Wyświetla wszystkie liczby z tablicy wraz z ich indeksami
  // parametry: brak
  // zwracany typ i opis: brak
  // autor: 000000000000
  // ***********************************************

  void wyswietl()
  {
    for (int i = 0; i < rozmiar; i++)
    {
      cout << i << ":" << tablica[i] << endl;
    }
    cout << endl;
  }

  int szukaj(int wartosc)
  {
    for (int i = 0; i < rozmiar; i++)
    {
      if (tablica[i] == wartosc)
      {
        return i;
      }
    }
    return -1;
  }

  int wyswietlNieparzyste()
  {
    int liczbaNieparzystych = 0;

    cout << "Nieparzyste liczby to: ";
    for (int i = 0; i < rozmiar; i++)
    {
      if (tablica[i] % 2 != 0)
      {
        liczbaNieparzystych++;
        cout << tablica[i] << " ";
      }
    }
    cout << endl;
    return liczbaNieparzystych;
  }

  float srednia()
  {
    float suma = 0;

    for (int i = 0; i < rozmiar; i++)
    {
      suma += tablica[i];
    }

    return suma / rozmiar;
  }

  ~Liczby()
  {
    delete[] tablica;
  }
};

int main()
{
  Liczby liczby(25);
  liczby.wyswietl();
  int liczbaNieparzystych = liczby.wyswietlNieparzyste();
  cout << "Liczba nieparzystych liczb: " << liczbaNieparzystych << endl;
  cout << "Srednia liczb: " << liczby.srednia() << endl;
  cout << "Indeks liczby 500:" << liczby.szukaj(500);
  return 0;
}