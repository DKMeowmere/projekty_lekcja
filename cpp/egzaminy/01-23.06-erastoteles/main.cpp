#include <iostream>
#include <cmath>
using namespace std;

// *******************************************************
//  nazwa funkcji: wypelnij
//  parametry wejściowe tablica[] - tablica do wypełnienia
//                    rozmiar - rozmiar tablicy
//  wartość zwracana: nic
//  informacje: funkcja wypelnia tablice wartosciami true
//  autor: 00000000000090
// ****************************************************
void wypelnij(bool tablica[], int rozmiar)
{
  for (int i = 0; i < rozmiar; i++)
  {
    tablica[i] = true;
  }
}

// *******************************************************
//  nazwa funkcji: erastoteles
//  parametry wejściowe: tablica[] - tablica logiczna
//                       n - górna granica zakresu wyszukiwania
//  wartość zwracana: brak
//  informacje: funkcja znajduje liczby pierwsze metodą sita Eratostenesa
//  autor: 00000000000090
// *******************************************************

void erastoteles(bool tablica[], int n)
{
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (tablica[i])
    {
      for (int j = i * i; j <= n; j += i)
      {
        tablica[j] = false;
      }
    }
  }
}

int main()
{
  bool pierwsze[101] = {false, false};


  wypelnij(pierwsze, 101);
  erastoteles(pierwsze, 100);

  cout << "Liczby pierwsze:\n";
  for (int i = 2; i <= 100; i++)
  {
    if (pierwsze[i])
    {
      cout << i << " ";
    }
  }

  return 0;
}