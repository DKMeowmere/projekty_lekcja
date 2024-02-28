#include <iostream>
#include <vector>
using namespace std;

int wylosujLiczbe()
{
  int liczba = ((double)rand() * 20 / RAND_MAX);

  return liczba;
}

void wypisz(int *tablica, int rozmiar)
{
  for (int i = 0; i < rozmiar; i++)
  {
    cout << tablica[i] << endl;
  }
}

void wypiszWektor(vector<int> wektor)
{
  for (int i = 0; i < wektor.size(); i++)
  {
    cout << wektor[i] << endl;
  }
}

void wypelnij(int *tablica, int rozmiar)
{
  for (int i = 0; i < rozmiar; i++)
  {
    tablica[i] = wylosujLiczbe();
  }
}

void wypelnijWektor(vector<int> wektor, int rozmiar)
{
  for (int i = 0; i < rozmiar; i++)
  {
    wektor[i] = wylosujLiczbe();
  }
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

int maxWektor(vector<int> wektor)
{
  int maxNum = wektor[0];

  for (int i = 1; i < wektor.size(); i++)
  {
    if (maxNum < wektor[i])
    {
      maxNum = wektor[i];
    }
  }

  return maxNum;
}

int min(int tablica[], int rozmiar)
{
  int minNum = tablica[0];

  for (int i = 1; i < rozmiar; i++)
  {
    if (minNum > tablica[i])
    {
      minNum = tablica[i];
    }
  }

  return minNum;
}

int minWektor(vector<int> wektor)
{
  int minNum = wektor[0];

  for (int i = 1; i < wektor.size(); i++)
  {
    if (minNum > wektor[i])
    {
      minNum = wektor[i];
    }
  }

  return minNum;
}