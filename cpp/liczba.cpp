#include <iostream>
using namespace std;
int main()
{
  int a;

  cout << "podaj liczbe" << endl;
  cin >> a;
  if (a <= 10)
  {
    cout << "10";
  }
  else if (a < 20)
  {
    cout << "20";
  }
  else
  {
    cout << "30";
  }
}