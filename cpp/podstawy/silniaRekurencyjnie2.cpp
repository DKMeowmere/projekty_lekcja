#include <iostream>
using namespace std;

int silnia(int liczba)
{
  if (liczba == 0)
  {
    return 1;
  }

  return liczba * silnia(liczba - 1);
}

int main()
{
  cout << silnia(0) << endl;
  cout << silnia(1)  << endl;
  cout << silnia(6)  << endl;
  return 0;
}
