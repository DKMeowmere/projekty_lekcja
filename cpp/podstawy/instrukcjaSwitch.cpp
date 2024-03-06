#include <iostream>
using namespace std;

int main()
{
  int age;
  cout << "Podaj wiek, a ja ci powiem do ktorej klasy chodzisz" << endl;
  cin >> age;

  switch (age)
  {
  case 7:
    cout << "chodzisz do 1 klasy" << endl;
    break;
  case 8:
    cout << "chodzisz do 2 klasy" << endl;
    break;
  case 9:
    cout << "chodzisz do 3 klasy" << endl;
    break;
  case 10:
    cout << "chodzisz do 4 klasy" << endl;
    break;
  case 11:
    cout << "chodzisz do 5 klasy" << endl;
    break;
  case 12:
    cout << "chodzisz do 6 klasy" << endl;
    break;
  case 13:
    cout << "chodzisz do 7 klasy" << endl;
    break;
  case 14:
    cout << "chodzisz do 8 klasy" << endl;
    break;
  default:
    cout << "bląd" << endl;
    break;
  }

  return 0;
}
