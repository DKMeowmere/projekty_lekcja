#include <iostream>
using namespace std;

class Rzecz
{
public:
    float waga;
    string nazwa;
    void display()
    {
        cout << nazwa << " to nazwa, a to jej waga " << waga << endl;
    }
    Rzecz();
    /* Rzecz() : waga{0}, nazwa{"nie mo nazwy"} {}; */ // działa
    Rzecz(float wagaP, string nazwaP)
    {
        waga = wagaP;
        nazwa = nazwaP;
    }
    // kopiujacy
    Rzecz(const Rzecz &rzecz)
    {
        waga = rzecz.waga;
        nazwa = rzecz.nazwa;
    }
};
Rzecz::Rzecz() : waga{0.2}, nazwa{"recznik"} {};
int main()
{
    string nazwa;
    float waga;
    cout << "Podaj nazwe rzeczy " << endl;
    cin >> nazwa;
    cout << "Podaj wage rzeczy " << endl;
    cin >> waga;
    Rzecz rzecz1{waga, nazwa};
    cout << "rzecz 1 ";
    rzecz1.display();
    cout << "Druga i trzecia rzecz bedzie taka sama " << endl;
    cout << "Podaj nazwe rzeczy " << endl;
    cin >> nazwa;
    cout << "Podaj wage rzeczy " << endl;
    cin >> waga;
    Rzecz rzecz2(waga, nazwa);
    Rzecz rzecz3(rzecz2);
    cout << "Rzecz 2 ";
    rzecz2.display();
    cout << "Rzecz 3 ";
    rzecz3.display();
    Rzecz rzecz4;
    cout << "Rzecz 4 ";
    rzecz4.display();

    return 0;
}