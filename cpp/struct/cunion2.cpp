#include <iostream>
using namespace std;
// Definicja C-struktury pomocniczej Plane:
struct Plane {
float x, y;
};
// Definicja C-struktury pomocniczej Space
struct Space {
float x, y, z;
};
// Definicja C-unii Coordinates:
union Coordinates {
Plane w2; // współrzędne punktu na płaszczyźnie
Space w3; // współrzędne punktu w przestrzeni 3-wymiarowej
};
int main() {
// Deklaracja zmiennej unijnej o nazwie w, należącej do typu Coordinates:
Coordinates w;
// Wprowadzenie z klawiatury wartości pól x i y elementu członkowskiego w2:
cout << "Podaj wartości współrzędnych punktu na płaszczyźnie: " << endl;
cout << "x = ";
cin >> w.w2.x;
cout << "y = ";
cin >> w.w2.y;
// Wyświetlenie na ekranie wartości pól elementu członkowskiego w2:
cout << "Wprowadzone współrzędne punktu: " << endl;
cout << "x: " << w.w2.x << endl;
cout << "y: " << w.w2.y << endl;
// Wprowadzenie z klawiatury wartości pól w, y i z elementu członkowskiego w3:
cout << "Podaj wartości współrzędnych punktu w przestrzeni: " << endl;
cout << "x = ";
cin >> w.w3.x;
cout << "y = ";
cin >> w.w3.y;
cout << "z = ";
cin >> w.w3.z;
// Wyświetlenie na ekranie wartości pól elementu członkowskiego w3:
cout << "Wprowadzone współrzędne punktu: " << endl;
cout << "x: " << w.w3.x << endl;
cout << "y: " << w.w3.y << endl;
cout << "z: " << w.w3.z << endl;
return 0;
}