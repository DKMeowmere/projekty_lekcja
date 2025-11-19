#include <iostream>

// Grupa 1
//  Napisz klase budzik.
//  Ma miec pola:
//  Czas aktualny (niedostepne w programie)
//  Czas alarmu (dostępny)
//  Alarm (tak/nie) (dostępny)
//  Metody:
//  Display: wyswietla aktualny czas, czas alarmu i czy jest wlaczony alarm w czytelnej formie z opisem.
//  Wlacz alarm
//  Wylacz alarm.
//  Dodaj czas(sekundy)
//  Zademonstruj w programie WSZYSTKIE pola i metody.
//  Czas ma być struktura i polach: godziny, minuty, sekundy.
//  Konstruktor parametryczny i kopiujacy.

using namespace std;

struct Czas
{
  int godziny;
  int minuty;
  int sekundy;
};

class Budzik
{
  Czas czas;
  
  public:
  Czas czasAlarmu;
  bool czyAlarmWlaczony;

  Budzik(int sekundy, int minuty, int godziny, bool pCzyAlarmWlaczony, int aSekundy, int aMinuty, int aGodziny)
  {
    czas.sekundy = 0;
    czas.minuty = 0;
    czas.godziny = 0;
    czasAlarmu.sekundy = 0;
    czasAlarmu.minuty = 0;
    czasAlarmu.godziny = 0;
    dodajSekundy(sekundy);
    dodajMinuty(minuty);
    dodajGodziny(godziny);
    dodajAlarmSekundy(aSekundy);
    dodajAlarmMinuty(aMinuty);
    dodajAlarmGodziny(aGodziny);
    czyAlarmWlaczony = pCzyAlarmWlaczony;
  };

  Budzik(const Budzik &pBudzik)
  {
    czas.sekundy = pBudzik.czas.sekundy;
    czas.minuty = pBudzik.czas.minuty;
    czas.godziny = pBudzik.czas.godziny;
    czasAlarmu.sekundy = pBudzik.czasAlarmu.sekundy;
    czasAlarmu.minuty = pBudzik.czasAlarmu.minuty;
    czasAlarmu.godziny = pBudzik.czasAlarmu.godziny;
    czyAlarmWlaczony = pBudzik.czyAlarmWlaczony;
  };

  void wlaczAlarm()
  {
    czyAlarmWlaczony = true;
  }

  void wylaczAlarm()
  {
    czyAlarmWlaczony = false;
  }

  void setSekundy(int sekundy)
  {
    int liczbaMinut = 0;
    czas.sekundy = sekundy;

    while (czas.sekundy >= 60)
    {
      czas.sekundy -= 60;
      liczbaMinut++;
    }

    dodajMinuty(liczbaMinut);
  };

  void dodajSekundy(int sekundy)
  {
    int liczbaMinut = 0;
    czas.sekundy += sekundy;

    while (czas.sekundy >= 60)
    {
      czas.sekundy -= 60;
      liczbaMinut++;
    }

    dodajMinuty(liczbaMinut);
  };

  void setMinuty(int minuty)
  {
    int liczbaGodzin = 0;
    czas.minuty = minuty;

    while (czas.minuty >= 60)
    {
      czas.minuty -= 60;
      liczbaGodzin++;
    }

    dodajGodziny(liczbaGodzin);
  };

  void dodajMinuty(int minuty)
  {
    int liczbaGodzin = 0;
    czas.minuty += minuty;

    while (czas.minuty >= 60)
    {
      czas.minuty -= 60;
      liczbaGodzin++;
    }

    dodajGodziny(liczbaGodzin);
  };

  void setGodziny(int godziny)
  {
    czas.godziny = godziny;

    while (czas.godziny >= 24)
    {
      czas.godziny -= 24;
    }
  };

  void dodajGodziny(int godziny)
  {
    czas.godziny += godziny;

    while (czas.godziny >= 24)
    {
      czas.godziny -= 24;
    }
  };

  void setAlarmSekundy(int sekundy)
  {
    int liczbaMinut = 0;
    czasAlarmu.sekundy = sekundy;

    while (czasAlarmu.sekundy >= 60)
    {
      czasAlarmu.sekundy -= 60;
      liczbaMinut++;
    }

    dodajMinuty(liczbaMinut);
  };

  void dodajAlarmSekundy(int sekundy)
  {
    int liczbaMinut = 0;
    czasAlarmu.sekundy += sekundy;

    while (czasAlarmu.sekundy >= 60)
    {
      czasAlarmu.sekundy -= 60;
      liczbaMinut++;
    }

    dodajMinuty(liczbaMinut);
  };

  void setAlarmMinuty(int minuty)
  {
    int liczbaGodzin = 0;
    czasAlarmu.minuty = minuty;

    while (czasAlarmu.minuty >= 60)
    {
      czasAlarmu.minuty -= 60;
      liczbaGodzin++;
    }

    dodajGodziny(liczbaGodzin);
  };

  void dodajAlarmMinuty(int minuty)
  {
    int liczbaGodzin = 0;
    czasAlarmu.minuty += minuty;

    while (czasAlarmu.minuty >= 60)
    {
      czasAlarmu.minuty -= 60;
      liczbaGodzin++;
    }

    dodajGodziny(liczbaGodzin);
  };

  void setAlarmGodziny(int godziny)
  {
    czasAlarmu.godziny = godziny;

    while (czasAlarmu.godziny >= 24)
    {
      czasAlarmu.godziny -= 24;
    }
  };

  void dodajAlarmGodziny(int godziny)
  {
    czasAlarmu.godziny += godziny;

    while (czasAlarmu.godziny >= 24)
    {
      czasAlarmu.godziny -= 24;
    }
  };

  void display()
  {
    cout << (czyAlarmWlaczony ? "Alarm włączony" : "Alarm wyłączony") << endl;
    cout << "Aktualny czas: " << czas.godziny << ":" << czas.minuty << ":" << czas.sekundy << endl;
    cout << "Czas alarmu: " << czasAlarmu.godziny << ":" << czasAlarmu.minuty << ":" << czasAlarmu.sekundy << endl;
    cout << endl;
  }
};

int main()
{
  Budzik budzik(61, 15, 25, true, 70, 71, 2);
  budzik.dodajSekundy(70);
  budzik.wlaczAlarm();
  budzik.display();
  
  budzik.dodajAlarmSekundy(80);
  Budzik budzik2(budzik);
  budzik2.wylaczAlarm();
  budzik2.display();
}