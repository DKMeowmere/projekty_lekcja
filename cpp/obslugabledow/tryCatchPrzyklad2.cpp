#include <iostream>
using namespace std;
int main()
{
  try
  {
    int liczba;
    cout << "podaj liczbe dwucyfrowa" << endl;
    cin >> liczba;

    if (liczba < 10)
    {
      throw (int)liczba;
    }
    if (liczba > 99 && liczba < 1000)
    {
      throw (float)liczba;
    }
    if (liczba > 999 && liczba < 10000)
    {
      throw (double)liczba;
    }
    if (liczba > 9999)
    {
      throw (short)liczba;
    }

    cout << "liczba jednosci:" << liczba % 10 << endl;
    cout << "liczba dziesiatek:" << liczba / 10 << endl;
  }
  catch (int)
  {
    cout << "podales jedno cyfrowa" << endl;
  }
  catch (float)
  {
    cout << "podales jedno trzycyfrowa" << endl;
  }
  catch (double)
  {
    cout << "podales jedno czterocyfrowa" << endl;
  }
  catch (...)
  {
    cout << "podales  wieksza" << endl;
  }
  return 0;
}