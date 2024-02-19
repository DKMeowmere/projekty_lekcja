#include <iostream>
using namespace std;

int main()
{
  char gender;
   cout << "Wpisz litere m jesli jeśtes mezczyzna, k jesli jestes kobieta lub inna jesli jestes no gender" << endl;
  cin >> gender; 

  if(gender == 'm') cout << "jestes mezczyzna" << endl;
  else if(gender == 'k') cout << "jestes kobieta" << endl;
  else cout << "no gender" << endl;

  return 0;
}
