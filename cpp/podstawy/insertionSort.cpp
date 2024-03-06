#include <iostream>
using namespace std;

void insertionSort(int tablica[], int rozmiar)
{
  for (int i = 1; i < rozmiar; i++)
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

int max(int tablica[], int rozmiar)
{
  int maxNum = tablica[0];

  for (int i = 1; i < rozmiar; i++)
  {
    if (maxNum < tablica[i])
    {
      maxNum = tablica[i];
    }
  }

  return maxNum;
}

int main()
{
  int tab[5];
  tab[0] = 3;
  tab[1] = 5;
  tab[2] = 1;
  tab[3] = 7;
  tab[4] = 2;

  // insertionSort(tab, 5);
  // wypisz(tab, 5);

  cout << max(tab, 5);
  return 0;
}