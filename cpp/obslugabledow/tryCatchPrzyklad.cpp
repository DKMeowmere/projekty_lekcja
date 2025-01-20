#include <iostream>
using namespace std;
int main()
{
  try
  {
    int liczba;
    cout << "podaj liczbe dwucyfrowa" << endl;
    cin >> liczba;

    if (liczba < 10 || liczba > 99)
    {
      throw liczba;
    }

    cout << "liczba jednosci:" << liczba % 10 << endl;
    cout << "liczba dziesiatek:" << liczba / 10 << endl;
  }
  // cout << "instrukcja pomiedzy" << endl;
  catch (int err)
  {
    try
    {
      if (err > 99)
      {
        throw err;
      }
      cout << "podałeś jednocyfrowa" << endl;
    }
    catch (int err)
    {
      try
      {
        if (err > 999)
        {
          throw err;
        }
        cout << "podales trzycyfrowa" << endl;
      }
      catch (int err)
      {
        try
        {
          if (err > 9999)
          {
            throw err;
          }
          cout << "podales czterocyfrowa" << endl;
        }
        catch (...)
        {
          cout << "podales pieciocyfrowa lub wieksza" << endl;
        }
      }
    }
  }
  return 0;
}