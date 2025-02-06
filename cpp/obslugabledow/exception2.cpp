#include <iostream>
#include <stdexcept>
using namespace std;

class OneDigit : public exception {
public:
    const char* what() const noexcept override {
        return "podales jednocyfrowa";
    }
};

class ThreeDigit : public runtime_error{
    public:
    explicit ThreeDigit(const string &what_argument="podales trzycyfrowa"):runtime_error(what_argument){};
};

class FourDigit : public logic_error{
    public:
    explicit FourDigit(const string &what_argument="podales czterocyfrowa"):logic_error(what_argument){};
};

int main()
{
    int liczba;
    try
    {
        cout << "Podaj liczbe dwucyfrowa ";
        cin >> liczba;
        if (liczba >= 10 && liczba <= 99)
        {
            int reszta = liczba % 10;
            int dziesiatki = (liczba - reszta) / 10;
            cout << "Pierwsza cyfra " << dziesiatki << " druga cyfra " << reszta;
        }
        else if (liczba < 10)
        {
            throw OneDigit();
        }
        else if (liczba > 99 && liczba < 1000)
        {
            throw ThreeDigit();
        }
        else if (liczba > 999 && liczba < 10000)
        {
            throw FourDigit();
        }
        else
        {
            throw (short)liczba;
        }
    }
    // klasy pochodne od exepction beda wykonywac sie w tym catchu
  /*   catch (exception &e)
    {
        cout<<e.what();
    } */
  /*   catch (runtime_error &e)
    {
        cout<<"3";
       cout<<e.what();
    }
    catch (logic_error &e)
    {
        cout<<4;
        cout<<e.what();
    } */
    catch (exception &e)
    {
        cout<<e.what();
    }
    catch (...)
    {
        cout << "wiecej niz czterocyfrowa \n";
    }
    return 0;
}