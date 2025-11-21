#include <iostream>
using namespace std;

class Urzadzenie
{
public:
  // ************************************************
  // nazwa: komunikat
  // opis:  Wyświetla podany komunikat w konsoli
  // parametry: string msg - komunikat do wyświetlenia
  // zwracany typ i opis:  brak
  // autor: 0000000
  // ************************************************
  void komunikat(string msg)
  {
    cout << msg << endl;
  }
};

class Okurzacz : public Urzadzenie
{
  bool czyWlaczony = false;

public:
  void on()
  {
    if (!czyWlaczony)
    {
      czyWlaczony = true;
      komunikat("Odkurzacz włączono");
    }
  }

  void off()
  {
    if (czyWlaczony)
    {
      czyWlaczony = false;
      komunikat("Odkurzacz wyłączono");
    }
  }
};

class Pralka : public Urzadzenie
{
  int numerProgramu = 0;

public:
  int ustawProgram(int numer)
  {
    if (numer < 1 || numer > 12)
    {
      cout << "Podano niepoprawny numer programu" << endl;
      numerProgramu = 0;
      return 0;
    }

    cout << "Program został ustawiony " << endl;
    numerProgramu = numer;
    return numerProgramu;
  }
};

int main()
{
  int numerProgramu;
  cout << "Podaj numer programu pralki (1-12): ";
  cin >> numerProgramu;

  Pralka pralka;
  pralka.ustawProgram(numerProgramu);

  Okurzacz odkurzacz;
  odkurzacz.on();
  odkurzacz.on();
  odkurzacz.on();
  odkurzacz.komunikat("Odkurzacz wyładował się");
  odkurzacz.off();

  return 0;
}