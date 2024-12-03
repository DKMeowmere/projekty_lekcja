#include <iostream>
using namespace std;

class Pokoj
{
public:
  float szerokosc;
  float dlugosc;

  Pokoj(float szerokoscP, float dlugoscP)
  {
    szerokosc = szerokoscP;
    dlugosc = dlugoscP;
  }
  Pokoj(const Pokoj &pokoj)
  {
    szerokosc = pokoj.szerokosc;
    dlugosc = pokoj.dlugosc;
  }

  float getPole()
  {
    return szerokosc * dlugosc;
  }

  float getObwod()
  {
    return 2 * szerokosc + 2 * dlugosc;
  }
};

int main()
{
  Pokoj pokoj1(4, 5);
  Pokoj pokoj2(pokoj1);
  Pokoj pokoj3(pokoj1);
  Pokoj pokoj4(pokoj1);

  cout << "Pole mieszkania to:" << pokoj1.getPole() + pokoj2.getPole() + pokoj3.getPole() + pokoj4.getPole() << endl;
  cout << "Obwod mieszkania to:" << pokoj1.getObwod() + pokoj2.getObwod() + pokoj3.getObwod() + pokoj4.getObwod() << endl;
  return 0;
}