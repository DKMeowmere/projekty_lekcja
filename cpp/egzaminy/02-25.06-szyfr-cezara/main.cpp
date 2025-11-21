#include <iostream>
#include "source.h"
#include <string>
using namespace std;

// g++ main.cpp source.cpp -std=c++17 -o main.exe
int main()
{
  string napis;
  int klucz;

  cout << "Podaj napis do zaszyfrowania: " << endl;
  getline(cin, napis);
  cout << "Podaj klucz:" << endl;
  cin >> klucz;

  cout << "Zaszyfrowany napis: " << szyfruj(napis, klucz) << endl;

  return 0;
}

