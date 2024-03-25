#include <iostream>
#include <string>
using namespace std;

int main()
{
  string imienazwisko;
  string drugieimie;
  string caleimie;
  cout << "Podaj imie i nazwisko" << endl;
  getline(cin, imienazwisko);
  cout << "Podaj drugie imie" << endl;
  cin >> drugieimie;

  int index = imienazwisko.find(" ");
  caleimie.append(imienazwisko.substr(0, index));
  caleimie.append(" ");
  caleimie.append(drugieimie);
  caleimie.append(" ");
  caleimie.append(imienazwisko.substr(index));

  cout << "całe imie:" << caleimie << endl;

  return 0;
}
