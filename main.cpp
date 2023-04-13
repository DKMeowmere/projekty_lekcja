#include <iostream>
using namespace std;

namespace volume
{
  const float cola = 0.33;
  const float flaszka = 0.5;
  const float liter = 1;
}

int main()
{
  int cola1 = 20;
  int flaszka = 30;
  int liter = 10;
  cout << "Wypite zostało " << cola * volume::cola << " coli" << endl;
  cout << "Wypite zostało " << flaszka * volume::cola << " flaszki" << endl;
  cout << "Wypite zostało" << liter * volume::cola << " liter" << endl;

  return 0;
}

// cola 0.33, flaszka 0.5, liter 1

// wypisz wypite zostalo 20 cola 30 flaszka 10 liter