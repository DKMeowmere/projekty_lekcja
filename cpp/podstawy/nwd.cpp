#include <iostream>
using namespace std;

int main()
{
  int a = 66;
  int b = 30;

  while (a > 0)
  {
    if (a == b)
    {
      cout << b << endl;
      return 0;
    }

    if (a > b)
    {
      a -= b;
    }
    else
    {
      b -= a;
    }
  }

  return 0;
}
