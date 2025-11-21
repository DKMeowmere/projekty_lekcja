#include <iostream>
#include "../source.h"
using namespace std;

//g++ testy/test.cpp source.cpp -o test.exe
// ./test.exe
int main()
{
  int tablica[1000];
  wypelnij(tablica, 1000);
  sortuj(tablica, 1000);
  
  return 0;

}