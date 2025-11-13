#include <iostream>
#include <vector>
using namespace std;

void wypelnij(vector<vector<int>> &liczby)
{
  srand(time(NULL));
  for (int i = 0; i < liczby.size(); i++)
  {
    for (int j = 0; j < 6; j++)
    {
      liczby[i][j] = rand() % 49 + 1;
    }
  }
}

// **********************************************
// nazwa funkcji: wyswietl
// opis funkcji: Funkcja wyświetla zawartość dwuwymiarowej tablicy liczb całkowitych
// parametry: liczby - dwuwymiarowa tablica liczb całkowitych
// zwracany typ i opis: void
// autor: 00000000000
// ***********************************************

void wyswietl(vector<vector<int>> &liczby)
{
  int iloscLiczb[49];

  for (int i = 0; i < 49; i++)
  {
    iloscLiczb[i] = 0;
  }

  cout << "Zestawy wylosowanych liczb:" << endl;

  for (int i = 0; i < liczby.size(); i++)
  {
    cout << "Losowanie " << i + 1 << ": ";
    for (int j = 0; j < 6; j++)
    {
      iloscLiczb[liczby[i][j] - 1]++;
      cout << liczby[i][j] << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < 49; i++)
  {
    cout << "Wystąpienia liczby " << i + 1 << ": " << iloscLiczb[i] << endl;
  }
}

int main()
{
  cout << "Ile chcesz wylosować zestawów?" << endl;
  int rozmiar;
  cin >> rozmiar;
  vector<vector<int>> liczby(rozmiar, vector<int>(6));

  wypelnij(liczby);
  wyswietl(liczby);
}