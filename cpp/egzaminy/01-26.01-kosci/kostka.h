#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Kosc
{
public:
  int liczbaOczek;
  int idPliku;
  bool czyDostepna = false;
  static int liczbaInstancji;
  vector<string> tab = {"kosc0.png", "kosc1.png", "kosc2.png", "kosc3.png", "kosc4.png", "kosc5.png", "kosc6.png"};
  
  Kosc(int argument)
  {
    liczbaOczek = 0;
    idPliku = 0;
    if (argument > 0 && argument < 7)
    {
      liczbaOczek = argument;
      idPliku = argument;
    }
    czyDostepna = true;
    liczbaInstancji++;
  };
  Kosc()
  {
    int liczba = wylosuj();
    liczbaOczek = liczba;
    idPliku = liczba;
    czyDostepna = true;
    liczbaInstancji++;
  }
  int wylosuj()
  {
    int liczba = rand() % 6 + 1;
    return liczba;
  }
  string wratoscKostki()
  {
    switch (liczbaOczek)
    {
    case 1:
      return "jeden";
      break;
    case 2:
      return "dwa";
      break;
    case 3:
      return "trzy";
      break;
    case 4:
      return "cztery";
      break;
    case 5:
      return "piec";
      break;
    case 6:
      return "szesc";
      break;
    default:
      return "zero";
      break;
    }
  }
  void rzut()
  {
    if (czyDostepna)
    {
      int liczba = wylosuj();
      liczbaOczek = liczba;
      idPliku = liczba;
    }
  }
  void blokada()
  {
    czyDostepna = false;
  }
};
int Kosc::liczbaInstancji = 0;