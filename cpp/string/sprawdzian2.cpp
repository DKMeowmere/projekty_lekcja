// we: napis dwuczłonowy
// wy: pierwszy człon zamieniony z drugim i na początku i na końcu duża litera, a przed każdą lierą a wstaw %
// Przykład:
// we: ela MelA
// wy: Mel%A el%A

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string napis;

  cout << "Podaj dwuczłonowy napis" << endl;
  getline(cin, napis);
  string napisZamieniony = napis.substr(napis.find(" ") + 1, napis.length() - napis.find(" ") + 1) + " " + napis.substr(0, napis.find(" "));
  string napisDodanyProcent = "";

  for (int i = 0; i < napisZamieniony.length(); i++)
  {
    if (napisZamieniony[i] == 'a')
    {
      napisDodanyProcent += "%";
    }

    if (napisZamieniony[i] == 'A')
    {
      napisDodanyProcent += "%";
    }

    napisDodanyProcent += napisZamieniony[i];
  }

  napisDodanyProcent[0] = toupper(napisDodanyProcent[0]);
  napisDodanyProcent[napisDodanyProcent.length() - 1] = toupper(napisDodanyProcent[napisDodanyProcent.length() - 1]);

  cout << "wynik:" << napisDodanyProcent << endl;

  return 0;
}
