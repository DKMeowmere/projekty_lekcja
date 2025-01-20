// Grupa B Napisz program, w którym zdefiniujesz szablon przy użyciu dwóch zmiennych uogólnionych który pobiera jeden argument. Napisz szablony specjalizacyjne dla zmiennych float,int (ma powiekszyć argument o jeden) oraz double,float  (ma powiekszyć argument o dwa). Uruchom napisane szablony specjalizujące w sposób jawny.

#include <iostream>
#include <cmath>
using namespace std;

template <typename T, typename T2>
T2 funckja(T liczba)
{
  return liczba;
};

template <>
int funckja(float liczba)
{
  liczba++;
  return liczba;
};

template <>
float funckja(double liczba)
{
  liczba += 2;
  return liczba;
}

int main()
{
  cout << "Średnia z ocen: " << funckja<int, int>(3) << endl;
  cout << "Średnia z ocen: " << funckja<float, int>(3) << endl;
  cout << "Średnia z ocen: " << funckja<double, float>(3) << endl;

  return 0;
}