#include <iostream>
using namespace std;

class Motor
{
private:
  bool czyDwusuw, czyCross;
  int pojemnosc = 350;

public:
  string kolor;
  float ilePaliwa;
  bool czyLyse;
  Motor(bool czyDwu, bool czyCro, int pojem, string color, float Paliwo, bool Lyse)
  {
    czyDwusuw = czyDwu;
    czyCross = czyCro;
    pojemnosc = pojem;
    kolor = color;
    setIlePaliwa(Paliwo);
    czyLyse = Lyse;
  }
  Motor()
  {
    czyDwusuw = 1;
    czyCross = 1;
    pojemnosc = 250;
    kolor = "bialy";
    ilePaliwa = 200;
    czyLyse = 0;
  }
  friend void lepszyMotor(Motor, Motor);
  void tankuj(float ilosc)
  {
    ilePaliwa += ilosc;
  }
  void setCzyDwusuw(char czy)
  {
    if (czy == 'T')
    {
      czyDwusuw = true;
    }
    else
    {
      czyDwusuw = false;
    }
  }
  void setCzyCross(char czy)
  {
    if (czy == 'T')
    {
      czyCross = true;
    }
    else
    {
      czyCross = false;
    }
  }
  bool getCzyDwusuw()
  {
    return czyDwusuw;
  }
  bool getCzyCross()
  {
    return czyCross;
  }
  void setPojemnosc(int value)
  {
    pojemnosc = value;
  }

  int getPojemnosc()
  {
    return pojemnosc;
  }
  void setIlePaliwa(int value)
  {
    ilePaliwa = value;
  }
  int getIlePaliwa()
  {
    return ilePaliwa;
  }
  bool czyTymPojade()
  {

    if (kolor == "czerwony" && !czyLyse && czyDwusuw)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  bool czySieNadaje()
  {
    if (ilePaliwa <= pojemnosc)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};
void lepszyMotor(Motor motor1, Motor motor2)
{
  int punkty1 = 0;
  int punkty2 = 0;

  if (motor1.kolor == "czerwony")
  {
    punkty1++;
  }
  if (motor2.kolor == "czerwony")
  {
    punkty2++;
  }

  if (motor1.czyDwusuw)
  {
    punkty1++;
  }
  if (motor2.czyDwusuw)
  {
    punkty2++;
  }

  if (motor1.czyCross)
  {
    punkty1++;
  }
  if (motor2.czyCross)
  {
    punkty2++;
  }

  if (!motor1.czyLyse)
  {
    punkty1++;
  }
  if (!motor2.czyLyse)
  {
    punkty2++;
  }

  if (motor1.czySieNadaje())
  {
    punkty1++;
  }
  if (motor2.czySieNadaje())
  {
    punkty2++;
  }

  if (motor1.czyTymPojade())
  {
    punkty1++;
  }
  if (motor2.czyTymPojade())
  {
    punkty2++;
  }

  if (motor1.ilePaliwa > motor2.ilePaliwa)
  {
    punkty1++;
  }
  else if (motor2.ilePaliwa > motor1.ilePaliwa)
  {
    punkty2++;
  }

  if (motor1.pojemnosc > motor2.pojemnosc)
  {
    punkty1++;
  }
  else if (motor2.pojemnosc > motor1.pojemnosc)
  {
    punkty2++;
  }

  if (punkty1 > punkty2)
  {
    cout << "motor1 jest lepszy bo ma " << punkty1 << " na 8 a motor2 ma " << punkty2 << " na 8";
  }
  else if (punkty1 < punkty2)
  {
    cout << "motor2 jest lepszy bo ma " << punkty2 << " na 8 a motor1 ma " << punkty1 << " na 8";
  }
  else
  {
    cout << "remis";
  }
}
int main()
{
  Motor motor1;
  int pojemnosc, ilePaliwa;
  float tankowanie;
  string kolor;
  char czy1, czy2, czy3;

  cout << "czy Dwusuw: ";
  cin >> czy1;
  motor1.setCzyDwusuw(czy1);

  cout << "czy Cross: ";
  cin >> czy2;
  motor1.setCzyCross(czy2);

  cout << "podaj pojemnosc: " << endl;
  cin >> pojemnosc;
  motor1.setPojemnosc(pojemnosc);

  cout << "podaj ile Paliwa" << endl;
  cin >> ilePaliwa;
  motor1.setIlePaliwa(ilePaliwa);

  cout << "podaj kolor: ";
  cin >> kolor;
  motor1.kolor = kolor;

  cout << "czy opony sa lyse: ";
  cin >> czy3;
  if (czy3 == 'N')
  {
    motor1.czyLyse = false;
  }
  else
  {
    motor1.czyLyse = true;
  }

  cout << "tankujesz: ";
  cin >> tankowanie;

  motor1.tankuj(tankowanie);

  cout << "*************************************************" << endl;
  cout << "pojemnosc:" << motor1.getPojemnosc() << endl;
  cout << "ile Paliwa:" << motor1.getIlePaliwa() << endl;
  if (motor1.getPojemnosc() < motor1.getIlePaliwa())
  {
    cout << "blad paliwo nie miesci sie w baku" << endl;
  }

  cout << "kolor: " << motor1.kolor << endl;
  if (motor1.czyLyse)
  {
    cout << "opony sa lyse" << endl;
  }
  else
  {
    cout << "opony nie sa lyse" << endl;
  }

  if (motor1.getCzyDwusuw())
  {
    cout << "Dwusuw" << endl;
  }
  else
  {
    cout << "nie Dwusuw" << endl;
  }

  if (motor1.getCzyCross())
  {
    cout << "cross" << endl;
  }
  else
  {
    cout << "nie cross" << endl;
  }
  if (motor1.czyTymPojade())
  {
    cout << "pojedziesz tym" << endl;
  }
  else
  {
    cout << "nie pojedziesz tym" << endl;
  }

  if (motor1.czySieNadaje())
  {
    cout << "nadaje sie" << endl;
  }
  else
  {
    cout << "nie nadaje sie" << endl;
  }
  Motor motor2(true, true, 300, "czerwony", 200, 0);
  //  motor(bool czyDwu, bool czyCro, int pojem, string color, float Paliwo, bool Lyse)
  lepszyMotor(motor1, motor2);
  return 0;
}