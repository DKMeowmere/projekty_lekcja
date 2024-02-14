#include <iostream>
using namespace std;
int main()
{
  double input1, input2;
  cin >> input1;
  cin >> input2;
  while (input2 == 0)
  {
    cout << "druga liczba nie może być zero";
    cin >> input2;
  }
  cout << "Dodawanie:" << input1 + input2 << endl;
  cout << "Odejmowanie:" << input1 - input2 << endl;
  cout << "Mnożenie:" << input1 * input2 << endl;
  cout << "Dzielenie:" << input1 / input2 << endl;
  return 0;
}