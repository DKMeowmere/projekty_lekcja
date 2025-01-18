#include <iostream>
#include <string>
using namespace std;
class Ksiazka
{
private:
  string tytul, autor;
  int rokWydania;

public:
  static int liczbaKsiazek;

  void setTytul(string pTytul)
  {
    tytul = pTytul;
  }
  string getTytul()
  {
    return tytul;
  }
  void setAutor(string pAutor)
  {
    autor = pAutor;
  }
  string getAutor()
  {
    return autor;
  }
  void setRokWydania(int pRokWydania)
  {
    rokWydania = pRokWydania;
  }
  int getRokWydania()
  {
    return rokWydania;
  }
  void display()
  {
    cout << "Ksiazka" << endl;
    cout << "tytul: " << tytul << endl;
    cout << "autor: " << autor << endl;
    cout << "rok Wydania: " << rokWydania << endl;
  }
  Ksiazka(/* args */) : tytul{""}, autor{""}, rokWydania{0} { liczbaKsiazek++; };
  Ksiazka(string pTytul, string pAutor, int pRokWydania) : Ksiazka()
  {
    tytul = pTytul;
    autor = pAutor;
    rokWydania = pRokWydania;
  }
  Ksiazka(const Ksiazka &ksiazka) : Ksiazka()
  {
    tytul = ksiazka.tytul;
    autor = ksiazka.autor;
    rokWydania = ksiazka.rokWydania;
  }
};
Ksiazka upper(Ksiazka ksiazka)
{
  for (int i = 0; i < ksiazka.getAutor().length(); i++)
  {
    ksiazka.setAutor((string)((int)ksiazka.getAutor()[i] - 32))[i];
  }
  return ksiazka;
};
// jak zamienic na duzo litere bo toupper dziala tylko na char
int Ksiazka::liczbaKsiazek = 0;
int main()
{
  Ksiazka *ksiazka;
  ksiazka = new Ksiazka;
  ksiazka->setAutor("jan");
  ksiazka->setTytul("dsa");
  ksiazka->setRokWydania(1234);
  ksiazka->display();
  cout << ksiazka->getAutor();
  cout << ksiazka->getTytul();
  cout << ksiazka->getRokWydania();
  string autor, tytul;
  int rokWydania;
  Ksiazka ksiazka2{"autor", "tytul", 2000};
  ksiazka2.display();
  Ksiazka ksiazka3(ksiazka2);
  upper(ksiazka3);
  ksiazka3.display();
  cout << ksiazka3.liczbaKsiazek;
  return 0;
}