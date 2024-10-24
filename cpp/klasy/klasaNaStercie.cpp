#include <iostream>
using namespace std;

// Zmodyfikuj powyższy program — zamiast klasy Pracownik zdefiniuj klasę
// Uczen, pozwalającą zapamiętać w jej zmiennych członkowskich następujące dane ucznia:
// imię, nazwisko, klasę, grupę, numer w dzienniku oraz datę urodzenia. Zmienna członkowska
// data_urodzenia powinna umożliwiać zapamiętanie w C-strukturze daty urodzenia ucznia.
// Utwórz obiekt będący instancją klasy Pracownik, dla którego pamięć operacyjna została
// przydzielona w sposób dynamiczny na stercie. Odwołania do elementów członkowskich tego
// obiektu zrealizuj przy użyciu wskaźnika.

struct Data
{
  int rokUrodzenia;
  int miesiac;
  int dzien;
};

class Uczen
{
  string imie;
  string nazwisko;

public:
  int klasa;
  char grupa;
  int numer;
  Data dataUrodzenia;

  string getImie()
  {
    return imie;
  }

  string getNazwisko()
  {
    return nazwisko;
  }

  void setImie(string pImie)
  {
    imie = pImie;
  }
  void setNazwisko(string pNazwisko)
  {
    nazwisko = pNazwisko;
  }

  void wyswietlDane()
  {
    cout << "Imię: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "klasa: " << klasa << endl;
    cout << "grupa: " << grupa << endl;
    cout << "numer: " << numer << endl;
    cout << "rok urodzenia: " << dataUrodzenia.rokUrodzenia << endl;
    cout << "miesiac urodzenia: " << dataUrodzenia.miesiac << endl;
    cout << "dzien urodzenia: " << dataUrodzenia.dzien << endl;
  }
};
int main()
{
  Uczen *w_uczen;
  w_uczen = new Uczen();
  w_uczen->setImie("Jan");
  w_uczen->setNazwisko("Kowalski");
  w_uczen->klasa = 1;
  w_uczen->grupa = 'a';
  w_uczen->numer = 6;
  w_uczen->dataUrodzenia.rokUrodzenia = 2006;
  w_uczen->dataUrodzenia.miesiac = 1;
  w_uczen->dataUrodzenia.dzien = 1;
  w_uczen->wyswietlDane();

  delete w_uczen;
  return 0;
}