#include <iostream>
#include <string>
using namespace std;

int main()
{
  string napis1 = "Java";
  string napis2 = "Javascript";

  if (napis1.compare(napis2) == 0)
  {
    cout << "napisy sa rowne";
  }
  else
  {
    cout << "napisy nie sa rowne";
  }

  return 0;
}
