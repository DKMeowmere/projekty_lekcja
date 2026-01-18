#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // accumulate
using namespace std;

int main() {
    // ===========================
    // JEDNOWYMIAROWE WEKTORY
    // ===========================
    
    // Tworzenie
    vector<int> v1;                     // pusty wektor
    vector<int> v2(5);                  // 5 elementów, domyślnie 0
    vector<int> v3(5, 7);               // 5 elementów, wszystkie = 7
    vector<int> v4 = {1, 2, 3, 4, 5};   // inicjalizacja listą

    // Dodawanie elementów
    v1.push_back(10);
    v1.push_back(20);

    // Usuwanie elementów
    v1.pop_back();                       // usuwa ostatni element
    v1.erase(v1.begin());                // usuwa pierwszy element
    v1.erase(remove(v1.begin(), v1.end(), 10), v1.end()); // usuwa wszystkie 10

    // Dostęp do elementów
    int a = v4[2];          // brak sprawdzenia zakresu
    int b = v4.at(2);       // sprawdza zakres

    // Iteracja
    for(int x : v4) cout << x << " ";
    cout << endl;

    for(int i = 0; i < v4.size(); i++)
        cout << v4[i] << " ";
    cout << endl;

    // Wielkość
    cout << "Rozmiar: " << v4.size() << endl;

    // Czyszczenie
    v4.clear();

    // Sortowanie
    sort(v2.begin(), v2.end());                  // rosnąco
    sort(v2.begin(), v2.end(), greater<int>());  // malejąco

    // Maksimum / minimum
    int maxi = *max_element(v2.begin(), v2.end());
    int mini = *min_element(v2.begin(), v2.end());

    // Suma elementów
    int suma = accumulate(v2.begin(), v2.end(), 0);

    // Odwracanie wektora
    reverse(v2.begin(), v2.end());

    // Usuwanie duplikatów
    sort(v2.begin(), v2.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end());

    // ===========================
    // DWUWYMIAROWE WEKTORY
    // ===========================
    
    int rows = 3, cols = 4;

    // Tworzenie 2D wektora
    vector<vector<int>> mat1(rows, vector<int>(cols));          // wszystkie elementy = 0
    vector<vector<int>> mat2(rows, vector<int>(cols, 7));       // wszystkie elementy = 7
    vector<vector<int>> mat3 = {{1,2,3},{4,5,6},{7,8,9}};       // inicjalizacja

    // Dostęp do elementów
    mat1[1][2] = 10;   // 2 wiersz, 3 kolumna

    // Iteracja po wierszach i kolumnach
    for(int i = 0; i < mat1.size(); i++) {
        for(int j = 0; j < mat1[i].size(); j++) {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }

    // Iteracja “range-based”
    for(const auto& row : mat3) {
        for(int x : row)
            cout << x << " ";
        cout << endl;
    }

    // Dodawanie nowego wiersza
    mat1.push_back(vector<int>(cols, 5)); // nowy wiersz wypełniony 5

    // Dodawanie kolumny (dla każdego wiersza)
    for(auto& row : mat1)
        row.push_back(9);

    // Usuwanie wiersza
    mat1.pop_back();          // usuwa ostatni wiersz

    // Usuwanie kolumny (dla każdego wiersza)
    for(auto& row : mat1)
        row.pop_back();

    return 0;
}
