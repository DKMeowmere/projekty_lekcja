#include <iostream>
// Dołączenie do programu zasobów biblioteki (zbioru nagłówkowego) o nazwie cstring:
#include <cstring>
using namespace std;
int main() {
// Deklaracja i inicjalizacja C-napisu jezyk1:
char jezyk1[15] = "C++++++"; // inicjalizacja kopiująca
/* UWAGA
* C-napis jezyk1 można również zainicjować na inne sposoby:
* char jezyk1[15] ("C++"); // inicjalizacja bezpośrednia
* lub
* char jezyk1[15] = {"C++"}; // inicjalizacja jednolita kopiująca
Rozdział 6. t Łańcuchy znaków
150
* lub
* char jezyk1[15] {"C++"}; // inicjalizacja jednolita bezpośrednia
*/
cout << jezyk1 << endl;
// Skopiowanie literału łańcuchowego "Java" do zmiennej jezyk1:
strcpy(jezyk1, "Java");
/* UWAGA
* Funkcja strcpy() pozwala na skopiowanie wartości stałej napisowej (typu const char*), jako jej drugiego
* argumentu, do zmiennej typu char* — pierwszego argumentu. Funkcja ta została zdefiniowana
* w bibliotece cstring.
*/
cout << jezyk1 << endl;
// Deklaracja i inicjalizacja C-napisu jezyk2:
char jezyk2[] = "C#";
/* UWAGA
* Rozmiar tablicy zostanie ustalony na podstawie rozmiaru wartości początkowej.
*/
cout << jezyk2 << endl;
// jezyk2="bo";//nie da się tak
// Skopiowanie napisu "Java" do zmiennej jezyk2:
strcpy(jezyk2, "Javaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
cout << jezyk2 << endl;
// Deklaracja i inicjalizacja C-napisu jezyk3:
char *jezyk3 = "C++";
cout << jezyk3 << endl;
/* UWAGA
* Modyfikacja napisu jezyk3 za pomocą instrukcji przypisania, w której po prawej stronie będzie inny literał
* łańcuchowy, jest możliwa. Wynika to z faktu, że konwersja stałej łańcuchowej do typu char* jest wykonalna,
* chociaż jest to sposób zdeprecjonowany.
*/
jezyk3 = "Java";
cout << jezyk3 << endl;
return 0;
}