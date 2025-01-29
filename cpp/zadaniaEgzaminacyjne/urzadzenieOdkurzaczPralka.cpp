#include <iostream>
using namespace std;

class Urzadzenie
{
private:
public:
  void display(string komunikat)
  {
    cout << komunikat << endl;
  }
};

class Pralka : public Urzadzenie
{
private:
  int programPrania = 0;

public:
  void setProgramPrania(int nrPrania)
  {
    if (nrPrania >= 1 && nrPrania <= 12)
    {
      cout << "program zostal ustawiony" << endl;
      programPrania = nrPrania;
    }
    else
    {
      cout << "podano niepoprawny numer programu" << endl;
      programPrania = 0;
    }
  }
  int getProgramPrania()
  {
    return programPrania;
  }
};

class Odkurzacz : public Urzadzenie
{
private:
  bool stan = false;

public:
  void on()
  {
    if (stan == false)
    {
      stan = true;
      display("odkurzacz wlaczono");
    }
  }
  void off()
  {
    if (stan == true)
    {
      stan = false;
      display("odkurzacz wylaczono");
    }
  }
};

int main()
{
  Pralka pralka;
  int nr = 0;
  cout << "podaj nr Prania 1...12" << endl;
  cin >> nr;
  pralka.setProgramPrania(nr);
  cout << pralka.getProgramPrania() << endl;

  Odkurzacz odkurzacz;
  odkurzacz.off();
  odkurzacz.on();
  odkurzacz.on();
  odkurzacz.on();
  odkurzacz.display("Odkurzacz wyladowal sie");
  odkurzacz.off();
}