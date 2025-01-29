#include <iostream>
using namespace std;
class Film
{
private:
  /* data */
  string tytul = "";
  int liczbaWypo = 0;

public:
  void setTytul(string pTytul)
  {
    tytul = pTytul;
  }
  string getTytul()
  {
    return tytul;
  }
  void setLiczbaWypo(int pLiczbaWypo)
  {
    liczbaWypo = pLiczbaWypo;
  }
  int getLiczbaWypo()
  {
    return liczbaWypo;
  }
  void increment()
  {
    liczbaWypo++;
  }
};

int main()
{
  Film film;
  film.setLiczbaWypo(4);
  film.setTytul("cwl");
  cout << film.getTytul() << endl;

  cout << film.getLiczbaWypo()<<endl;
  film.increment();
  cout << film.getLiczbaWypo();
  return 0;
}