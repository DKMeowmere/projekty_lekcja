#include <iostream>
#include <cstdlib>
using namespace std;

class Urzadzenie
{
  void komunikat(string napis)
  {
    cout << napis;
  }
};

class Odkurzacz : Urzadzenie
{
private:
  bool stanOdkurzacza = false;

public:
  void on()
  {
    if (stanOdkurzacza == false)
    {
      cout << "Odkurzacz wlaczono" << endl;
      stanOdkurzacza = true;
    }
  }

  void off()
  {
    if (stanOdkurzacza == true)
    {
      cout << "Odkurzacz wylaczono" << endl;
      stanOdkurzacza = false;
    }
  }
};

class Pralka  : Urzadzenie
{
private:
  int numerPrania = 0;

public:
//edit
  int ustawNumerPrania(int numer)
  {
    if (numer > 0 && numer < 13)
    {
      numerPrania = numer;
    }

    return numerPrania;
  }
};

int main()
{
  Pralka pralka;
  pralka.ustawNumerPrania(2);
  pralka.ustawNumerPrania(14);

  Odkurzacz odkurzacz;
  odkurzacz.on();
  odkurzacz.on();
  odkurzacz.on();
  odkurzacz.off();

  return 0;
}