#include <iostream>
#include <string>
using namespace std;

string szyfruj(string tekst, int klucz)
{
  string alfabet = "abcdefghijklmnopqrstuvwxyz";
  string szyfrowanyTekst = "";

  for (int i = 0; i < tekst.length(); i++)
  {
    if (tekst[i] == ' ')
    {
      szyfrowanyTekst += ' ';
      continue;
    }

    int index = (int)tekst[i] - 97; // 'a' ma kod ASCII 97
    index += klucz;

    while (index < 0)
    {
      index += alfabet.length();
    }

    while (index > alfabet.length())
    {
      index -= alfabet.length();
    }

    szyfrowanyTekst += alfabet[index];
  }

  return szyfrowanyTekst;
}

int main()
{
  string napis;
  cout << "Podaj napis do zaszyfrowania (małe litery i spacje):" << endl;
  getline(cin, napis);
  int klucz;
  cout << "Podaj klucz szyfrowania (liczba całkowita):" << endl;
  cin >> klucz;
  cout << szyfruj(napis, klucz) << endl;

  return 0;
}