#include <iostream>
using namespace std;
void wylosuj(int *tab, int n)
{
  srand(time(NULL));
  for (int i = 0; i < n; i++)
  {
    tab[i] = rand() % 6 + 1;
  }
}
void wypisz(int *tab, int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "Kostka " << i + 1 << ": " << tab[i] << endl;
  }
}
int ile()
{
  int n;
  while (n > 10 || n < 3)
  {
    cout << "Ile kostek chcesz rzucic (3 - 10)" << endl;
    cin >> n;
  }
  return n;
}
int points(int *tab, int n)
{
  int suma = 0;
  for (int i = 0; i <= n; i++)
  {
    int liczba = 0;

    for (int j = i + 1; j <= n; j++)
    {

      if (tab[i] == tab[j]) // tab[i=2]=6 tab[j=4]=6
      {
        suma += tab[j];
        liczba = tab[i];
        tab[j] = 0;
      }
    }
    suma += liczba;
    cout << "suma po: " << i + 1 << " " << suma
         << endl;
  }
  cout << "liczba uzyskanych punktow: ";
  return suma;
}
bool jeszczeRaz()
{
  char znak;
  while (znak != 'n')
  {
    cout << "jeszcze raz? (t/n) ";
    cin >> znak;
    if (znak == 't')
    {
      /* code */
      return true;
    }

    return false;
  }
}

int main()
{
  int tab[10];
  wylosuj(tab, ile());
  wypisz(tab, ile());
  cout << points(tab, ile()) << endl;
  // while (jeszczeRaz())
  // {
  //   wylosuj(tab, ile());
  //   wypisz(tab, ile());
  //   cout << points(tab, ile()) << endl;
  // }

  return 0;
}