#include <iostream>

using namespace std;

struct Punkt
{
  double x;
  double y;
};

void max(Punkt *punkty, int rozmiar)
{
  int max = 0;

  for (int i = 0; i < rozmiar; i++)
  {
    if (punkty[i].x * punkty[i].x + punkty[i].y * punkty[i].y > max)
    {
      max = punkty[i].x * punkty[i].x + punkty[i].y * punkty[i].y;
    }
  }

  for (int i = 0; i < rozmiar; i++)
  {
    if (punkty[i].x * punkty[i].x + punkty[i].y * punkty[i].y == max)
    {
      cout << "x:" << punkty[i].x << endl;
      cout << "y:" << punkty[i].y << endl;
    }
  }
}

int main()
{
  srand(time(NULL));

  double a = ((double)rand() / RAND_MAX) * 7 - 3;
  cout << a << endl;

  int b = rand() % 21 - 10;
  cout << b << endl;
}