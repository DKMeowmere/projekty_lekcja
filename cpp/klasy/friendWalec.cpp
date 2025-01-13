#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

class Dane
{
  double wysokosc;
  double promien;

public:
  void setPromien(double);
  double getPromien();
  void setWysokosc(double);
  double getWysokosc();

  friend class Walec;
};

void Dane::setPromien(double r)
{
  promien = r;
}

double Dane::getPromien()
{
  return promien;
}

void Dane::setWysokosc(double h)
{
  wysokosc = h;
}

double Dane::getWysokosc()
{
  return wysokosc;
}

class Walec
{
public:
  double objetosc(Dane);
};

double Walec::objetosc(Dane dane)
{
  return (M_PI * (dane.promien * dane.promien)) * dane.wysokosc;
}

class Stozek
{
public:
  double objetosc(Dane);
};

double Stozek::objetosc(Dane dane)
{
  return ((M_PI * (dane.getPromien() * dane.getPromien())) * dane.getWysokosc()) / 3;
}

int main()
{
  Dane dane;
  Walec walec;
  dane.setPromien(3);
  dane.setWysokosc(6);
  cout << "Objetosc walca wynosi: " << walec.objetosc(dane) << endl;
  Stozek stozek;
  cout << "Objetosc stozka wynosi: " << stozek.objetosc(dane) << endl;

  return 0;
}