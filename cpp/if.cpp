#include <iostream>
using namespace std;

int main()
{
  int input;
  cout << "Podaj liczbe, a ja napise czy się dzieli przez 2 i 3" << endl;
  cin >> input;

  if (input % 2 == 0 && input % 3 == 0)
  {
    cout << "liczba dzieli sie przez 2 i 3" << endl;
  }
  else if (input % 2 == 0)
  {
    cout << "liczba dzieli sie przez 2" << endl;
  }
  else if (input % 3 == 0)
  {
    cout << "liczba dzieli sie przez 3" << endl;
  }
  else
  {
    cout << "liczba nie dzieli sie przez 2 i 3" << endl;
  }

  return 0;
}
