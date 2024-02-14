#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int liczbyWOkregu = 0;

  for (int i = 0; i < 40; i++)
  {
    double x = (double)rand() / RAND_MAX / 2;
    double y = (double)rand() / RAND_MAX / 2;
    double potega = pow(x, 2) + pow(y, 2);

    if (sqrt(potega) <= 0.5)
    {
      liczbyWOkregu++;
    }
  }

  cout << "Liczby w okręgu:" << liczbyWOkregu << endl;
  cout << "PI:" << double(liczbyWOkregu * 4) / 40 << endl;

  return 0;
}
