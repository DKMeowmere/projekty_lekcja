#include <iostream>
#include <string>
using namespace std;

int liczbaWystapienLitery(string napis, char znak)
{
  int suma = 0;

  for (int i = 0; i < napis.length(); i++)
  {
    if (napis[i] == znak)
    {
      suma++;
    }
  }

  return suma;
}

int liczbaWystapienLiteryForEach(string napis, char znak)
{
  int suma = 0;

  for (char iterator : napis)
  {
    if (iterator == znak)
    {
      suma++;
    }
  }

  return suma;
}

int main()
{
  string input;
  cout << "Podaj napis:" << endl;
  cin >> input;
  char litera;
  cout << "Podaj litere a ja wypisze ile razy jest w napisie:" << endl;
  cin >> litera;
  cout << "Litera wystepuje w napisie: " << liczbaWystapienLiteryForEach(input, litera) << " razy" << endl;

  return 0;
}
