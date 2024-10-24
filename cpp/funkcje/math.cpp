#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
  double liczba1, liczba2;
  cout << "Podaj liczbe" << endl;

  cin >> liczba1;
  cout << "Podaj druga liczbe" << endl;

  cin >> liczba2;

  double calkowitaLiczba1;
  double czescLiczba1 = modf(liczba1, &calkowitaLiczba1);
  double calkowitaLiczba2;
  double czescLiczba2 = modf(liczba2, &calkowitaLiczba2);
  cout << "Czesc ulamkowa liczby 1:" << czescLiczba1 << endl;
  cout << "Czesc ulamkowa liczby 2:" << czescLiczba2 << endl;
  cout << "Wieksza liczba to:" << fmax(liczba1, liczba2) << endl;
  cout << "Mniejsza liczba to:" << fmin(liczba1, liczba2) << endl;
  cout << "Liczba1 do potegi liczby 2 to:" << pow(liczba1, liczba2) << endl;
  cout << "Liczba2 do potegi liczby 1 to:" << pow(liczba2, liczba1) << endl;

  return 0;
}