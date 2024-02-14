#include <iostream>
using namespace std;

int main()
{
  int age;
  cout << "Podaj wiek, a ja ci ile klas ci zostało" << endl;
  cin >> age;

  switch (age)
  {
  case 7:
    cout << "została ci jeszcze 1 klasa" << endl;
  case 8:
    cout << "została ci jeszcze 2 klasa" << endl;
  case 9:
    cout << "została ci jeszcze 3 klasa" << endl;
  case 10:
    cout << "została ci jeszcze 4 klasa" << endl;
  case 11:
    cout << "została ci jeszcze 5 klasa" << endl;
  case 12:
    cout << "została ci jeszcze 6 klasa" << endl;
  case 13:
    cout << "została ci jeszcze 7 klasa" << endl;
  case 14:
    cout << "została ci jeszcze 8 klasa" << endl;
    break;
  default:
    cout << "bląd" << endl;
    break;
  }

  return 0;
}
