#include <iostream>
using namespace std;

void wypelnij(int tablica[], int rozmiar)
{
  for (int i = 0; i < rozmiar; i++)
  {
    cout << "podej " << 1 + i << " element tablicy\n";
    cin >> tablica[i];
  }
}

void wypisz(int tablica[], int rozmiar)
{
  cout << "[";
  for (int i = 0; i < rozmiar; i++)
  {
    cout << tablica[i];

    if (i + 1 != rozmiar)
    {
      cout << ", ";
    }
  }
  cout << "]";
}

int main()
{
  int tab[5];

  wypelnij(tab, 5);
  wypisz(tab, 5);
  return 0;
}