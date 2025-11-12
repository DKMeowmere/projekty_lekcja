#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

// ************************************************
//  klasa: Tekst
//  opis:  zawiera metody do analizy tekstu
//  metody: policzSamogloski - zlicza samogloski w tekscie
//          usunPodwojne - usuwa podwojne znaki obok siebie
//  autor: 00000000000000
// ************************************************
class Tekst
{
public:
  static int policzSamogloski(std::string tekst)
  {
    if (tekst.empty()) return 0;

    int licznik = 0;
    string samogloski[18] = {
        "A", "E", "I", "O", "U", "Y",
        "a", "e", "i", "o", "u", "y",
        "Ą", "Ę", "Ó", "ą", "ę", "ó"};

    for (int i = 0; i < 18; i++)
    {
      int pozycja = tekst.find(samogloski[i]);

      while (pozycja != string::npos)
      {
        licznik++;
        int dlugosc_znaku = samogloski[i].length();
        pozycja = tekst.find(samogloski[i], pozycja + dlugosc_znaku);
      }
    }

    return licznik;
  }
  static string usunPodwojne(string tekst)
  {
    string wynik = "";

    for (int i = 0; i < tekst.length(); i++)
    {
      if (i == 0 || tekst[i] != tekst[i - 1])
      {
        wynik += tekst[i];
      }
    }

    return wynik;
  }
};

int main()
{
  string tekst = "Abba;;;to zespół Ó";

  cout << tekst << endl;
  cout << "Liczba samoglosek: " << Tekst::policzSamogloski(tekst) << endl;
  cout << "Usuniete podwojne: " << Tekst::usunPodwojne(tekst) << endl;

  return 0;
}