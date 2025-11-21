#include <iostream>
#include "source.h"
using namespace std;

void wypelnij(int tablica[], int rozmiar)
{
  srand(time(NULL));
  for (int i = 0; i < rozmiar; i++)
  {
    tablica[i] = (rand() % 1001);
  }
}

void wyswietl(int tablica[], int rozmiar)
{
  for (int i = 0; i < rozmiar; i++)
  {
    cout << tablica[i] << " ";
  }
  cout << endl;
}

void sortuj(int tablica[], int rozmiar)
{
  for (int i = 0; i < rozmiar - 1; i++)
  {
    for (int j = 0; j < rozmiar - i - 1; j++)
    {
      if (tablica[j] > tablica[j + 1])
      {
        int temp = tablica[j];
        tablica[j] = tablica[j + 1];  
        tablica[j + 1] = temp;
      }
    }
  }
}
