#include <iostream>
using namespace std;

class Pytanie
{
protected:
  string tresc;
  string nazwaPliku;
  bool czyPoprawna;

public:
  Pytanie(string podanaTresc, string podanaNazwaPliku)
  {
    tresc = podanaTresc;
    nazwaPliku = podanaNazwaPliku;
    czyPoprawna = false;
  };
  virtual bool sprawdzOdpowiedz(char) = 0;
  virtual ~Pytanie() {};
};

class PytanieZamkniete : public Pytanie
{
private:
  string odpowiedz1;
  string odpowiedz2;
  string odpowiedz3;
  char poprawnaOdpowiedz;

public:
  PytanieZamkniete(string podanaTresc, string podanaNazwaPliku, string podanaOdpowiedz1, string podanaOdpowiedz2, string podanaOdpowiedz3, char podanaPoprawnaOdpowiedz) : Pytanie(podanaTresc, podanaNazwaPliku)
  {
    odpowiedz1 = podanaOdpowiedz1;
    odpowiedz2 = podanaOdpowiedz2;
    odpowiedz3 = podanaOdpowiedz3;
    poprawnaOdpowiedz = podanaPoprawnaOdpowiedz;
  };

  bool sprawdzOdpowiedz(char podanaOdpowiedz) override
  {
    if ((podanaOdpowiedz == poprawnaOdpowiedz) || (podanaOdpowiedz == tolower(poprawnaOdpowiedz)))
    {
      czyPoprawna = true;
    }
    else
    {
      czyPoprawna = false;
    }
    return czyPoprawna;
  }
};

int main()
{
  string pytanie = "Jaka jest stolica Polski?";
  string odpowiedz1 = "A) Warszawa";
  string odpowiedz2 = "B) Krakow";
  string odpowiedz3 = "C) Gdansk";
  char poprawnaOdpowiedz = 'A';
  char odpowiedzUzytkownika;
  cout << pytanie << endl;
  cout << odpowiedz1 << endl;
  cout << odpowiedz2 << endl; 
  cout << odpowiedz3 << endl;
  cout << "Podaj odpowiedz (A, B, C): ";
  cin >> odpowiedzUzytkownika;

  PytanieZamkniete pytanie1(pytanie, "pytanie1.txt", odpowiedz1, odpowiedz2, odpowiedz3, poprawnaOdpowiedz);
  if (pytanie1.sprawdzOdpowiedz(odpowiedzUzytkownika))
  {
    cout << "Odpowiedź poprawna" << endl;
  }
  else
  {
    cout << "Odpowiedź niepoprawna" << endl;
  }

  return 0;
}

// git -h lub git help 
// git init
// git add .
// git commit -m "tekst tu"

// oraz git config coś tam czk
// git config --global user.name "Imię Nazwisko"
// git config --global user.email "email@example.com

// git init

// git config user.name "NUMER_ZDAJACEGO"
// git config user.email "egzamin@poczta.pl"

// git add *.xaml *.cs *.csproj
// git commit -m "Utworzenie widoku aplikacji quizu z elementami UI"
// git add *.xaml *.cs
// git commit -m "Implementacja logiki quizu, obsługi pytań i punktacji"

// git config user.name
// git config user.email
// git log 