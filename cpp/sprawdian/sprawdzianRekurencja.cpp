#include <iostream>
using namespace std;

float policzPotege(float liczba, int potega)
{
  if (potega == 0)
  {
    return 1;
  }

  return liczba * policzPotege(liczba, potega - 1);
}

int main()
{
  cout << policzPotege(2, 3) << endl;
  cout << policzPotege(5, 5) << endl;
  cout << policzPotege(16, 4) << endl;
  return 0;
}
