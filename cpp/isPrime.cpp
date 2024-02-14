#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
  if (n < 2)
  {
    return false;
  }

  if (n == 2)
  {
    return true;
  }

  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }

  return true;
}

int main()
{
  cout << isPrime(1) << endl;
  cout << isPrime(2) << endl;
  cout << isPrime(3) << endl;
  cout << isPrime(4) << endl;
  cout << isPrime(5) << endl;
  cout << isPrime(6) << endl;
  cout << isPrime(7) << endl;
}