#include <iostream>
#include <cmath>
using namespace std;
class selction
{
private:
  /* data */
  int findMax()
  {
    int max = tab[0];
    for (int i = 0; i < 10; i++)
    {
      if (max < tab[i])
      {
        max = tab[i];
      }
    }
    return max;
  }

public:
  int tab[10] = {2, 3, 64, 5, 76, 98, 4, 0, 23, 1};
  void sortowanie()
  {
    int temp;
    for (int i = 0; i < 10; i++)
    {
      int max = tab[i];

      for (int j = i; j < 10; j++)
      {
        if (max < tab[j])
        {
          temp = max;
          max = tab[j];
          tab[i] = max;
          tab[j] = temp;
        }
      }
    }
  }
  void wypisz()
  {
    for (int i = 0; i < 10; i++)
    {
      cout << tab[i] << ", ";
    }
  }
  int getMax()
  {
    return findMax();
  }
};

int main()
{
  selction Selection;
  Selection.sortowanie();
  Selection.wypisz();
  cout << endl;
  cout << Selection.getMax();
  return 0;
}