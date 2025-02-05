#include <iostream>
using namespace std;

int NWD(int a, int b)
{
  while (a != b)
  {
    if (a < b)
    {
      b = b - a;
    }
    else if (b < a)
    {
      a = a - b;
    }
  }
  return a;
}

int main()
{
  int a, b;
  cout << "podaj a: ";
  cin >> a;
  cout << "podaj b: ";
  cin >> b;

  cout << NWD(a, b);
  return 0;
}