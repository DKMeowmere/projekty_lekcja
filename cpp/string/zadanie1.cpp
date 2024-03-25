#include <iostream>
#include <string>
using namespace std;

int main()
{
  string napis1;
  string napis2;
  string wynik;
  cout << "Podaj napis1" << endl;
  getline(cin, napis1);
  cout << "Podaj napis2" << endl;
  getline(cin, napis2);

  int index = napis2.find(" ");
  wynik.append(napis2.substr(index));
  wynik.append(" ");

  int index2 = napis1.find(" ");
  wynik.append(napis1.substr(index2));
  wynik.append(" ");

  wynik.append(napis2.substr(0,index));
  wynik.append(" ");

  wynik.append(napis1.substr(0,index2));
  wynik.append(" ");

  cout << "wynik:" << wynik << endl;

  return 0;
}
