#include <iostream>
#include <string>
using namespace std;

int main()
{
  string napis1 = "Programowanie ";
  string napis2 = "zorentowane ";
  string napis3 = "obiektowo";

  string wynik;
  wynik += napis1;
  wynik += napis2;
  wynik += napis3;

  cout << "wynik:" << wynik << endl;

  return 0;
}
