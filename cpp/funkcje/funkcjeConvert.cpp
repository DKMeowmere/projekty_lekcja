#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  string str1;
  string str2 ;

  cout << "podaj liczbe 1:" << endl;
  cin >> str1;
  cout << "podaj liczbe 2:" << endl;
  cin >> str2;

  float liczba1 = stof(str1);
  float liczba2 = stof(str2);

  cout << liczba1 + liczba2;
}