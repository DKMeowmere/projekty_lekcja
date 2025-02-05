#include <iostream>

using namespace std;

void wylosuj(int *tab)
{
  srand(time(NULL));
  for (int i = 0; i < 50; i++)
  {
    tab[i] = rand() % 100 + 1;
    cout << tab[i] << ", ";
  }
  cout << endl;
}

int indeks(int *tab, int x)
{
  tab[50] = x;
  for (int i = 0; i < 50; i++)
  {
    if (tab[i] == x)
    {
      return i;
    }
  }
  return 50;
}

int main()
{
  int tab[50];
  cout << "podaj liczbe ktora chcesz wyszukac" << endl;
  wylosuj(tab);
  int x;
  cin >> x;

  if (indeks(tab, x) == 50)
  {
    cout << "wartownik" << endl;
  }
  else
  {
    cout << indeks(tab, x);
  }

  return 0;
}