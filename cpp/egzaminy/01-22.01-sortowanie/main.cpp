#include <iostream>
using namespace std;


# ******
# Klasa:    Notatka
# Opis:     Klasa reprezentująca notatki. Każda notatka ma swój tytuł i opis.
# Pola:     __id - unikalny identyfikator notatki
#           _tytul - tytuł notatki
#           _tresc - treść notatki
#           __liczba_notatek - statyczne pole informujące o liczbie utworzonych notatek;
#                              nowe notatki otrzymują __id równy temu polu (po jego inkrementacji)
# Autor:    961009xxxxx
# ******

class Tablica
{
private:
  int size = 10;
  int nums[10];

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
      cout << "Podaj element " << i << endl;
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