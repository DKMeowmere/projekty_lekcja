#include <iostream>
using namespace std;

// ************************************************
//  nazwa: policzPunkty
//  opis: zlicza punkty za rzuty kostkami
//  parametry: int* wyniki - tablica z wynikami rzutów kostkami
//             int liczbaKostek - liczba kostek
//  zwracany typ i opis: int - liczba punktów
//  autor: 0000000000000
// ************************************************
int policzPunkty(int *wyniki, int liczbaKostek)
{
  int punkty = 0;
  int wylosowane[6] = {0, 0, 0, 0, 0, 0};

  for (int i = 0; i < liczbaKostek; i++)
  {
    wylosowane[wyniki[i] - 1] = wylosowane[wyniki[i] - 1] + 1;
  }

  for (int i = 0; i < 6; i++)
  {
    if (wylosowane[i] >= 2)
    {
      punkty += (i + 1) * wylosowane[i];
    }
  }
  return punkty;
}

int main()
{
  char czyChceszKontynuowac = 'T';
  int liczbaRzutow = 0;
  int liczbaPunktow = 0;
  cout << "Ile kostek chcesz rzucić: (3-10)" << endl;

  cin >> liczbaRzutow;
  while (liczbaRzutow < 3 || liczbaRzutow > 10)
  {
    cout << "Ile kostek chcesz rzucić: (3-10)" << endl;
    cin >> liczbaRzutow;
  }

  srand(time(NULL));
  while (czyChceszKontynuowac == 'T' || czyChceszKontynuowac == 't')
  {
    int *wyniki;
    wyniki = new int[liczbaRzutow];

    for (int i = 0; i < liczbaRzutow; i++)
    {
      int rzut = rand() % 6 + 1;
      wyniki[i] = rzut;
      cout << "Kostka " << i + 1 << ":" << rzut << endl;
    }

    cout << "Liczba uzyskanych punktow: " << policzPunkty(wyniki, liczbaRzutow) << endl;
    delete[] wyniki;
    cout << "Jeszcze raz? (t/n)" << endl;
    cin >> czyChceszKontynuowac;
  }

  return 0;
}