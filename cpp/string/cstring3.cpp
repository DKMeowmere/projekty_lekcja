#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
  char napis[30] = "bob the bob";
  cout << strchr(napis, 't') << endl;  // the bob
  cout << *strchr(napis, 't') << endl; // t
  if (strchr(napis, 'w') == nullptr)
  {
    cout << "trafiony";
  }

  cout << strchr(napis, 'w');
  return 0;
}