#include <iostream>
using namespace std;

int main()
{
  int liczba = 1;

  for (int i = 1; i < 10; i++)
  {
    liczba *= i;
  }

  cout << liczba;
  return 0;
}
