#include <iostream>
using namespace std;

class Tablica
{
private:
  int size = 10;
  int nums[10];

  // **
  // nazwa funkcji: findMax
  // opis funkcji: szuka maksymalna wartość
  // parametry: brak
  // zwracany typ i opis: int - zwraca maksymalna wartość z tablicy
  // **
  int findMax()
  {
    int max = nums[0];
    for (int i = 0; i < size; i++)
    {
      if (max < nums[i])
      {
        max = nums[i];
      }
    }
    return max;
  }

public:
  // **
  // nazwa funkcji: sort
  // opis funkcji: sortuje całą tablice
  // parametry: brak
  // zwracany typ i opis: void - nic nie zwraca
  // **
  void sort()
  {

    for (int i = 0; i < size; i++)
    {
      int minIndex = i;
      for (int j = i + 1; j < size; j++)
      {
        if (nums[j] < nums[minIndex])
        {
          minIndex = j;
        }
      }
      int temp = nums[i];
      nums[i] = nums[minIndex];
      nums[minIndex] = temp;
    }
  }

  void load()
  {
    for (int i = 0; i < 10; i++)
    {
      cout << "Podaj element " << i + 1 << endl;
      int n;
      cin >> n;
      nums[i] = n;
    }
  }

  void display()
  {
    cout << "[";
    for (int i = 0; i < size; i++)
    {
      cout << nums[i];
      if (i + 1 != size)
      {
        cout << ", ";
      }
    }
    cout << "]";
  }

  int getMax()
  {
    return findMax();
  }
};

int main()
{
  Tablica tab;

  tab.load();
  tab.sort();
  tab.display();
  cout << endl;
  cout << "Maksymalna wartość: " << tab.getMax();
}