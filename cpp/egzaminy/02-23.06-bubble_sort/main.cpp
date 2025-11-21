#include <iostream>
#include "source.h"
using namespace std;

//g++ main.cpp source.cpp -o main.exe    
// ./main.exe
int main()
{
  int tablica[100];
  wypelnij(tablica, 100);
  sortuj(tablica, 100);
  cout << "Posortowana tablica: " << endl;
  wyswietl(tablica, 100);

  return 0;
  
}