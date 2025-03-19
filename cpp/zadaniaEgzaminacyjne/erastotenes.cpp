#include <iostream>
#include <cmath>
using namespace std;

void wypelnij(bool *tab, int n)
{
  for (int i = 0; i <= n; i++)
  {
    tab[i] = true;
  }
}

void erastotenes(bool *tab, int n)
{
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (tab[i] == true)
    {
      for (int j = i + i; j <= n; j += i)
      {
        tab[j] = false;
      }
    }
  }
}

void wypisz(bool *tab, int n)
{
  for (int i = 2; i <= n; i++)
  {
    if (tab[i] == true)
    {

      cout << "Liczba pierwsza:" << i << endl;
    }
  }
}

int main()
{
  int n = 0;

  cout << "Podaj liczbe wieksza niz 2:" << endl;
  cin >> n;

  if (n < 3)
  {
    cout << "Liczba musi byc wieksza od 2:" << endl;
  }
  bool *tablica = new bool[n];
  wypelnij(tablica, n);
  erastotenes(tablica, n);
  wypisz(tablica, n);

  return 0;
}