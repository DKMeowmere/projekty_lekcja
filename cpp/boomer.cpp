#include <iostream>
using namespace std;

int main()
{
  int input;
  cout << "Podaj liczbe, a ja napise czy się dzieli przez 2 i 3" << endl;
  cin >> input;

  if (input % 2 == 0)
  {
    cout << "liczba dzieli sie przez 2" << endl;
  }
  
  if (input % 3 == 0)
  {
    cout << "liczba dzieli sie przez 3" << endl;
  }

  if (input % 3 != 0 && input % 2 != 0)
  {
    cout << "liczba nie dzieli sie przez 2 i 3" << endl;
  }

  return 0;
}
