#include <iostream>
using namespace std;

// **********************************************
// nazwa funkcji:  getPlec
// opis funkcji: zwraca plec na podstawie numeru PESEL
// parametry:   string pesel - numer PESEL
// zwracany typ i opis: char - 'M' dla mezczyzny, 'K' dla kobiety
// autor: 000000000000000
// ***********************************************
char getPlec(string pesel)
{
  int plec = (int)pesel[9] - 48;

  if (plec % 2 == 0)
  {
    return 'K';
  }
  return 'M';
}

bool sprawdzPoprawnosc(string pesel)
{
  int waga[10] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};
  int S = 0;

  for (int i = 0; i < 10; i++)
  {
    S += ((int)pesel[i] - 48) * waga[i];
  }
  int M = S % 10;
  int R = M == 0 ? 0 : (10 - M);

  if (R == ((int)pesel[10] - 48))
  {
    return true;
  }
  return false;
};

int main()
{
  string pesel;
  cout << "Podaj pesel: " << endl;
  cin >> pesel;

  if (!sprawdzPoprawnosc(pesel))
  {
    cout << "Niepoprawny numer PESEL" << endl;
    return 1;
  }
  else
  {
    cout << "Poprawny numer PESEL" << endl;
  }
  cout << "Plec: " << getPlec(pesel) << endl;
  return 0;
}