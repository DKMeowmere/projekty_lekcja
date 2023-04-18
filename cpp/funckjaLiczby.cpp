#include <iostream>
using namespace std;

int main()
{
  float number;
  cout << "Podaj wiek, jesli jest dodatnia lub 0 wypisze 0 a jesli ujemna to 1" << endl;
  cin >> number; 
  if(!number) cout << "musisz podac liczbe" << endl;
  else if(number <= 0) cout << 0 << endl;
  else if(number >  0) cout << 1 << endl;

  return 0;
}
