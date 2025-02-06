#include <iostream>
#include <cmath>
using namespace std;
class Selection
{
private:
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
  int tab[10];
  void wypelnij()
  {
    for (int i = 0; i < 10; i++)
    {
      cout << "Podaj element " << i << endl;
      int n;
      cin >> n;
      tab[i] = n;
    }
  }
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
  Selection selection;
  selection.wypelnij();
  selection.sortowanie();
  selection.wypisz();
  cout << endl;
  cout << selection.getMax();
  return 0;
}