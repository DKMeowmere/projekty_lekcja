#include <iostream>
#include <cmath>
using namespace std;
// GRUPA A
//  Napisz program sortujący tablicę metodą przez wybieranie według zamieszczonej dokumentacji: Sortowanie przez wybieranie - jedna z prostszych metod sortowania o złożoności O(n2 ). Polega na wyszukaniu elementu mającego się znaleźć na żądanej pozycji i zamianie miejscami z tym, który jest tam obecnie. Operacja jest wykonywana dla wszystkich indeksów sortowanej tablicy. Algorytm przedstawia się następująco: 1. wyszukaj minimalną wartość z tablicy spośród elementów od i do końca tablicy 2. zamień wartość minimalną, z elementem na pozycji i Gdy zamiast wartości minimalnej wybierana będzie maksymalna, wówczas tablica będzie posortowana od największego do najmniejszego elementu. Założenia do programu ‒ Program wykonywany w konsoli. ‒ Obiektowy język programowania zgodny z zainstalowanym na stanowisku egzaminacyjnym: C++ lub C# lub Java lub Python. ‒ Sortowanie odbywa się rosnąco, nie wykorzystuje gotowych funkcji do sortowania oraz do szukania maksimum. ‒ Sortowana jest tablica 100 liczb całkowitych. Tablica jest polem klasy. ‒ Tablica jest losowana ‒ Wszystkie elementy posortowanej tablicy są wyświetlane na ekranie. ‒ Klasa zawiera co najmniej dwie metody: sortującą i szukającą wartość najwyższą. Widzialność metody szukającej ogranicza się jedynie do klasy. ‒ Metoda szukająca zwraca wartość, w zależności od przyjętej taktyki może być to wartość maksymalna lub index wartości maksymalnej. ‒ Program powinien być zapisany czytelnie, z zasadami czystego formatowania kodu, należy stosować znaczące nazwy zmiennych i funkcji. W funkcji main przetestuj zaimplementowane funkcjonalności.

class SelectionSort
{
private:
  int findMax()
  {
    int max = tab[0];
    for (int i = 0; i < 100; i++)
    {
      if (max < tab[i])
      {
        max = tab[i];
      }
    }
    return max;
  }

public:
  int tab[100];

  void setTab()
  {
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
      tab[i] = rand() % 200 + 1;
    }
  }

  void sort()
  {
    int temp;
    int maxNum = findMax();

    for (int i = 0; i < 100; i++)
    {
      int minIndex = i;

      for (int j = i; j < 100; j++)
      {
        if (tab[minIndex] > tab[j])
        {
          minIndex = j;
        }
      }

      if (tab[minIndex] == maxNum)
      {
        return;
      }

      temp = tab[i];
      tab[i] = tab[minIndex];
      tab[minIndex] = temp;
    }
  }

  void print()
  {
    for (int i = 0; i < 100; i++)
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
  SelectionSort selectionSort;
  selectionSort.setTab();
  selectionSort.sort();
  selectionSort.print();
  cout << endl;
  cout << "Maksymalna wartosc: " << selectionSort.getMax() << endl;
  return 0;
}