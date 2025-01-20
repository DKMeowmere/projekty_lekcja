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

int kaprehar()
{
}

int main()
{
  int liczba = wylosuj();
  int tablica[4] = {2, 4, 5, 3};
  sortujOdwrotnie(tablica);
  wypisz(tablica);
}