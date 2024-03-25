#include <iostream>
#include <string>
using namespace std;

int main()
{
  string napis1 = "Java Runtime Enviroment";
  string napis2 = "Runtime";

  int index = napis1.find(napis2);

  if (index > -1)
  {
    cout << "znaleziono";
  }
  else
  {
    cout << "nie znaleziono";
  }

  return 0;
}
