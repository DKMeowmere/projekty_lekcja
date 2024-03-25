#include <iostream>
#include <string>
using namespace std;

int main()
{
  string napis = "C++, JavaScript, C#";

  int index = napis.find("JavaScript");
  napis.replace(index, 10, "Java");
  cout << "wynik:" << napis << endl;

  return 0;
}
