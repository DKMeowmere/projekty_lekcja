#include <iostream>
using namespace std;

class Samochod
{
private:
  string marka;

protected:
  string model;

public:
  int rokProdukcji;

  Samochod() {};
  Samochod(string pMarka, string pModel, int pRokProdukcji)
  {
    marka = pMarka;
    model = pModel;
    rokProdukcji = pRokProdukcji;
  }

  string getModel()
  {
    return model;
  }

  void setModel(string pModel)
  {
    model = pModel;
  }

  string getMarka()
  {
    return marka;
  }

  void setMarka(string pMarka)
  {
    marka = pMarka;
  }
};

class Autobus : public Samochod
{
public:
  int liczbaMiejscSiedzacych;
  int liczbaMiejscStojacych;

  Autobus() {};
  Autobus(int pLiczbaMiejscSiedzacych, int pLiczbaMiejscStojacych, string pMarka, string pModel, int pRokProdukcji) : Samochod(pMarka, pModel, pRokProdukcji)
  {
    liczbaMiejscSiedzacych = pLiczbaMiejscSiedzacych;
    liczbaMiejscStojacych = pLiczbaMiejscStojacych;
  }

  void display()
  {
    cout << "Autobus:" << endl;
    cout << "Marka:" << getMarka() << endl;
    cout << "model:" << getModel() << endl;
    cout << "rok produkcji:" << rokProdukcji << endl;
    cout << "liczba miejsc siedzacych:" << liczbaMiejscSiedzacych << endl;
    cout << "liczba miejsc stojacych:" << liczbaMiejscStojacych << endl;
  }
};

class Ciezarowka : public Samochod
{
public:
  string typCiezarowki;

  Ciezarowka() {};
  Ciezarowka(string pTypCiezarowki, string pMarka, string pModel, int pRokProdukcji) : Samochod(pMarka, pModel, pRokProdukcji)
  {
    if (pTypCiezarowki == "wywrotka" || pTypCiezarowki == "cysterna" || pTypCiezarowki == "chlodnia")
    {
      typCiezarowki = pTypCiezarowki;
    }
    else
    {
      cout << "Niepoprawny typ ciezarowki" << endl;
    }
  }

  void display()
  {
    cout << "Ciezarowka:" << endl;
    cout << "Marka:" << getMarka() << endl;
    cout << "model:" << getModel() << endl;
    cout << "rok produkcji:" << rokProdukcji << endl;
    cout << "typ ciezarowki:" << typCiezarowki << endl;
  }
};

int main()
{
  string marka, model;
  int rokProdukcji, liczbaMiejscSiedzacych, liczbaMiejscStojacych;
  cout << "Utworz autobus:" << endl;
  cout << "Podaj model:" << endl;
  cin >> model;
  cout << "Podaj marka:" << endl;
  cin >> marka;
  cout << "Podaj rok produkcji:" << endl;
  cin >> rokProdukcji;
  cout << "Podaj liczba miejsc siedzacych:" << endl;
  cin >> liczbaMiejscSiedzacych;
  cout << "Podaj liczba miejsc stojacych:" << endl;
  cin >> liczbaMiejscStojacych;

  Autobus autobus(liczbaMiejscSiedzacych, liczbaMiejscStojacych, marka, model, rokProdukcji);
  autobus.display();

  Ciezarowka ciezarowka("cysterna", "marka", "model", 2000);
  ciezarowka.display();
  return 0;
} 
