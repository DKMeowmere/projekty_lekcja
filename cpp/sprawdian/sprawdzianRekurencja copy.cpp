#include <iostream>
using namespace std;

void wypisz(int liczba)
{
  cout << liczba << endl;

  if (liczba == 1)
  {
    return;
  }
  if (liczba > 0)
  {
    wypisz(liczba - 1);
  }
  if (liczba < 0)
  {
    wypisz(liczba + 1);
  }
}

int main()
{
  wypisz(0);
  return 0;
}
