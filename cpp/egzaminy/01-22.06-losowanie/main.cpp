#include <iostream>
using namespace std;

void wypelnij(int tablica[], int rozmiar)
{
  srand(time(NULL));
  for (int i = 0; i < rozmiar; i++)
  {
    tablica[i] = (rand() % 100) + 1;
  }
}

// **
// nazwa funkcji: wyszukaj
// opis funkcji: wyszukuje podaną liczbę w tablicy
// parametry:  int tablica[] - tablica w której szukamy
//             int rozmiar - rozmiar tablicy
//             int liczba - liczba do wyszukania
// zwracany typ i opis: void - nic nie zwraca
// **
int wyszukaj(int tablica[], int rozmiar, int liczba)
{
  for (int i = 0; i < rozmiar; i++)
  {
    if (tablica[i] == liczba)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int liczby[100];
  int liczbaDoWyszukania;

  wypelnij(liczby, 100);
  cout << "Podaj liczbę do wyszukania (1-100): ";
  cin >> liczbaDoWyszukania;

  int indeks = wyszukaj(liczby, 100, liczbaDoWyszukania);
  if (indeks != -1)
  {
    cout << "Znaleziono liczbę " << liczbaDoWyszukania << " na indeksie " << indeks << endl;
  }
  else
  {
    cout << "Nie znaleziono liczby " << liczbaDoWyszukania << endl;
  }
  return 0;
}
