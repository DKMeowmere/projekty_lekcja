#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
T liczba(T p)
{
  cout << "podales int" << endl;
  return p;
};

template <>
double liczba(
    double p)
{
  cout << "podales double" << endl;
  return 0;
};

template <>
float liczba(
    float p)
{
  cout << "podales float" << endl;
  return 0;
};

int main()
{
  liczba(3);
  liczba(3.1);
  liczba<float>(31);

  return 0;
}