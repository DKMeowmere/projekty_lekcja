#include <iostream>
using namespace std;
void wylosuj(int *tab)
{
  srand(time(NULL));
  for (int i = 0; i < 100; i++)
  {
    tab[i] = rand() % 9 + 1;
  }
}
void wypisz(int *tab)
{
  for (int i = 0; i < 100; i++)
  {
    cout << tab[i] << ", ";
  }
}
void sortowanie(int *tab)
{
  int temp = 0;
  for (int i = 0; i < 100; i++)
  {
    for (int j = 0; j < 100; j++)
    {
      if (tab[j] > tab[j + 1])
      {
        temp = tab[j];
        tab[j] = tab[j + 1];
        tab[j + 1] = temp;
      }
    }
  }
}
int main()
{
  int tab[100];

  wylosuj(tab);
  sortowanie(tab);
  cout << endl;
  wypisz(tab);

  return 0;
}