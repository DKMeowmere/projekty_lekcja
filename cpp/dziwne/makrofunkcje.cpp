#include <iostream>
#include <cmath>
// Definicje makrofunkcji:
#define PI 3.14
#define OBWOD(r) (r * 2 * PI)
#define POLE(r) pow(r, 2) * PI

#define PARAMETRY(r)                         \
  std::cout << "Podaj promien kola" << endl; \
  std::cin >> r;                             \
  std::cout << "Pole:" << POLE(r) << endl;   \
  std::cout << "Obwód:" << OBWOD(r) << endl

using namespace std;
int main()
{
  int promien;
  PARAMETRY(promien);

  return 0;
}
