#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char imienazwisko[30];
  char drugieimie[30];
  char caleimie[60];
  cout << "Podaj imie i nazwisko" << endl;
  cin.getline(imienazwisko, 30);
  cout << "Podaj drugie imie" << endl;
  cin >> drugieimie;

  for (int i = 0; imienazwisko[i] != ' '; i++)
  {
    caleimie[i] = imienazwisko[i];
  }
  strcat(caleimie, " ");
  strcat(caleimie, drugieimie);
  strcat(caleimie, strchr(imienazwisko, ' '));
  cout << "całe imie:" << caleimie << endl;

  return 0;
}                   
 