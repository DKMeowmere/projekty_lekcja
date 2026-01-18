#include <iostream>
#include <string>
#include <algorithm> // transform, reverse, sort
#include <sstream>   // istringstream
using namespace std;

int main() {
    // ===============================
    // 1️⃣ Tworzenie stringów
    // ===============================
    string s1 = "Hello";
    string s2("World");
    string s3 = s1 + " " + s2; // konkatenacja
    cout << s3 << endl;        // Hello World

    // ===============================
    // 2️⃣ Długość stringa
    // ===============================
    cout << "Długość: " << s3.length() << endl;
    cout << "Długość: " << s3.size() << endl; // zamiennie

    // ===============================
    // 3️⃣ Dostęp do znaków
    // ===============================
    cout << s3[0] << endl;      // H
    cout << s3.at(1) << endl;   // e (bezpieczne sprawdzenie zakresu)
    s3[0] = 'h';                // zmiana znaku
    cout << s3 << endl;         

    // ===============================
    // 4️⃣ Porównywanie stringów
    // ===============================
    string a = "abc", b = "def";
    if (a == b) cout << "rowne" << endl;
    if (a < b) cout << "a < b" << endl;

    // ===============================
    // 5️⃣ Konwersja na wielkie/małe litery
    // ===============================
    string s4 = "AbCde";
    transform(s4.begin(), s4.end(), s4.begin(), ::toupper); // wielkie litery
    cout << s4 << endl; // ABCDE
    transform(s4.begin(), s4.end(), s4.begin(), ::tolower); // małe litery
    cout << s4 << endl; // abcde

    // ===============================
    // 6️⃣ Dodawanie / wstawianie / usuwanie
    // ===============================
    string s5 = "Hello";
    s5 += " World";      // dodawanie
    s5.insert(6, "C++ "); // wstawianie
    cout << s5 << endl;  // Hello C++ World
    s5.erase(6, 4);      // usuwa 4 znaki od indeksu 6
    cout << s5 << endl;  // Hello World
    s5.clear();          // czyści cały string

    // ===============================
    // 7️⃣ Szukanie
    // ===============================
    string s6 = "abrakadabra";
    size_t pos = s6.find("bra");   // zwraca indeks pierwszego wystąpienia
    if (pos != string::npos) cout << "Znaleziono na indeksie: " << pos << endl;

    pos = s6.rfind("bra"); // ostatnie wystąpienie

    // ===============================
    // 8️⃣ Podciągi / substr
    // ===============================
    string s7 = "Hello World";
    string sub = s7.substr(6, 5); // od indeksu 6, 5 znaków
    cout << sub << endl;          // World

    // ===============================
    // 9️⃣ Porządkowanie liter w stringu
    // ===============================
    string s8 = "dcba";
    sort(s8.begin(), s8.end());   // sort rosnąco
    cout << s8 << endl;           // abcd
    reverse(s8.begin(), s8.end()); // odwrócenie
    cout << s8 << endl;           // dcba

    // ===============================
    // 🔟 Podział stringa na słowa (split)
    // ===============================
    string zdanie = "Ala ma kota";
    istringstream iss(zdanie);
    string word;
    while (iss >> word) {
        cout << word << endl; // wypisuje każde słowo w nowej linii
    }

    // ===============================
    // 1️⃣1️⃣ Zamiana string -> liczba / liczba -> string
    // ===============================
    string numStr = "12345";
    int num = stoi(numStr);
    double dnum = stod("3.14");
    string sNum = to_string(6789);

    // ===============================
    // 1️⃣2️⃣ Usuwanie spacji z początku / końca
    // ===============================
    string s9 = "   hello world   ";
    s9.erase(0, s9.find_first_not_of(' '));  // trim left
    s9.erase(s9.find_last_not_of(' ')+1);   // trim right
    cout << "|" << s9 << "|" << endl;       // |hello world|

    return 0;
}
