#include <iostream>

using namespace std;

int main()
{
  srand(time(NULL));

  double a = ((double)rand() / RAND_MAX) * 7 - 3;
  cout << a << endl;

  int b = rand() % 21 - 10;
  cout << b << endl;
}