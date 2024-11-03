#include <iostream>
using namespace std;

// Napisz program pozwalający zapamiętać wybrane dane samochodu osobowego: markę,
// model, rok produkcji, cenę, numer rejestracyjny. Zapewnij możliwość wprowadzania
// danych samochodu z klawiatury oraz ich modyfikowania, a ponadto zrób tak, żeby
// były wyświetlane na ekranie monitora. Wykorzystaj obiekt należący do zdefiniowanej
// samodzielnie klasy, dla którego pamięć operacyjna została zaalokowana:
// • w sposób statyczny na stosie (wariant I),
// • w sposób dynamiczny na stercie (wariant II).
// Stwórz funkcję pobierającą optymalnie dwa auta i wypisująca cechy droższego. Cena ma być prywatna.

class Samochod
{
  float cena;

public:
  string marka;
  string model;
  int rokProdukcji;
  string numerRejestracyjny;

  // Samochod(string pMarka, string pModel, int pRokProdukcji, float pCena, string pNumerRejestracyjny)
  // {
  //   marka = pMarka;
  //   model = pModel;
  //   rokProdukcji = pRokProdukcji;
  //   cena = pCena;
  //   numerRejestracyjny = pNumerRejestracyjny;
  // }

  float getCena()
  {
    return cena;
  }

  void setCena(float pCena)
  {
    cena = pCena;
  }
};

Samochod* pobierzDane(Samochod *s)
{
  string marka, model, numerRejestracyjny;
  int rokProdukcji;
  float cena;

  cout << "Podaj marke:" << endl;
  cin >> marka;
  cout << "Podaj model:" << endl;
  cin >> model;
  cout << "Podaj numer rejestracyjny:" << endl;
  cin >> numerRejestracyjny;
  cout << "Podaj rok produkcji:" << endl;
  cin >> rokProdukcji;
  cout << "Podaj cena:" << endl;
  cin >> cena;

  s->setCena(cena);
  s->marka = marka;
  s->model = model;
  s->numerRejestracyjny = numerRejestracyjny;
  s->rokProdukcji = rokProdukcji;

  return s;
}

void wypiszDane(Samochod *s)
{
  cout << "cena:" << s->getCena() << endl;
  cout << "marka:" << s->marka << endl;
  cout << "model:" << s->model << endl;
  cout << "numerRejestracyjny:" << s->numerRejestracyjny << endl;
  cout << "rokProdukcji:" << s->rokProdukcji << endl;
}

void ktoryDrozszy(Samochod *s1, Samochod *s2)
{
  if (s1->getCena() > s2->getCena())
  {
    cout << "Drozszy jest samochod 1" << endl;
    wypiszDane(s1);
  }
  else
  {
    cout << "Drozszy jest samochod 2" << endl;
    wypiszDane(s2);
  }
}

int main()
{

  Samochod samochod1;
  pobierzDane(&samochod1);

  Samochod *samochod2 = new Samochod;
  samochod2 = pobierzDane(samochod2);


  ktoryDrozszy(&samochod1, samochod2);

  // delete samochod2;
}
