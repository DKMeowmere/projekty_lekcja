#include <iostream>
#include <limits>
using namespace std;

int main()
{
  double num;
  string mystr;

  cin >> num;
  getline(cin, mystr);

  cout << "num=" << num << ",mystr=\'" << mystr << "\'" << endl;
  return 0;
}