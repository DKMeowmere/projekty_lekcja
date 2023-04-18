#include <iostream>
using namespace std;

int main()
{
  int age;
   cout << "Podaj wiek, a ja ci powiem czy jestes stary" << endl;
  cin >> age; 
  if(!age) cout << "musisz podac liczbe" << endl;
  else if(age < 50) cout << "jestes mlody" << endl;
  else if(age == 50) cout << "jestes prawie stary" << endl;
  else if(age > 50) cout << "jestes stary" << endl;

  return 0;
}
