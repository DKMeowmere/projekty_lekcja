#include <iostream>
#include <string>
using namespace std;
int main() {
// Deklaracje zmiennych łańcuchowych: s1, s2 i s3, połączone z ich inicjalizacjami:
string s1 ("Język programowania ");
string s2 ("C++");
string s3 ("11");
// Konkatenacja (dodanie) łańcuchów s1 i s2:
string s4 = s1 + s2;
/* UWAGA
* Wynik dodawania łańcuchów s1 i s2 zostaje przypisany do zmiennej łańcuchowej s4.
*/
cout << s4 << endl;
// Skopiowanie zawartości zmiennej (łańcucha) s1 do zmiennej s5;
string s5="bob";
s5 = s1;
// Konkatenacja łańcuchów — dodanie łańcucha s2 na końcu łańcucha s5:
s5 += s2;
cout << s5 << endl;
/* UWAGA
* Wynik dodawania łańcuchów zostaje przypisany do zmiennej s5:
*/
// Dodanie łańcucha s3 na końcu łańcucha s5:
s5.append(s3);
/* UWAGA
* Wynik dodawania łańcuchów (łańcuch wynikowy) zostaje zapamiętany w zmiennej s5.
*/
cout << s5 << endl;
// Skopiowanie zmiennej (łańcucha) s2 do zmiennej s6;
string s6 = s2;
// Wstawienie podłańcucha s1 na początku łańcucha s6:
s6.insert(0, s1);

/* UWAGA
* Łańcuch wynikowy zostaje zapisany w zmiennej s6. Liczba 0 oznacza pozycję początkową
* podłańcucha s1 w łańcuchu s6.
*/
cout << s6 << endl;
return 0;
}
 