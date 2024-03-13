#include <iostream>
#include <vector>
using namespace std;

int getSum(vector<int> &wektor)
{
  int suma = 0;

  for (int i = 0; i < wektor.size(); i++)
  {
    suma += wektor[i];
  }

  return suma;
}

int getSumForEach(vector<int> &wektor)
{
  int suma = 0;

  for (int liczba : wektor)
  {
    suma += liczba;
  }

  return suma;
}

double srednia(vector<int> &wektor)
{
  return (double)getSum(wektor) / wektor.size();
}

void wypelnij(vector<int> &wektor)
{
  bool czyPetlaDziala = true;

  while (czyPetlaDziala)
  {
    int liczba;
    cout << "Podaj liczbe" << endl;
    cin >> liczba;
    wektor.push_back(liczba);
    char znak;
    cout << "Wcisnij k, żeby zakonczyć lub inny znak żeby kontynuować wprowadzać liczby" << endl;
    cin >> znak;
    if (znak == 'k')
    {
      czyPetlaDziala = false;
    }
  }
}

int main()
{
  vector<int> wektor;

  wypelnij(wektor);
  cout << "Suma:" << getSum(wektor) << endl;
  cout << "Suma:" << getSumForEach(wektor) << endl;
  cout << "Srednia:" << srednia(wektor) << endl;

  return 0;
}