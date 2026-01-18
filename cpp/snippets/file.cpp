#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Album
{
    string wykonawca;
    string tytul;
    int liczbaUtworow;
    int rok;
    int liczbaPobran;
};

// Funkcja wczytuje albumy z pliku
int wczytaj(vector<Album>& albumy)
{
    ifstream plik("Data.txt");
    if (!plik.is_open())
    {
        cout << "Nie udalo sie otworzyc pliku!" << endl;
        return 1;
    }

    Album album;
    string line;
    while (getline(plik, album.tytul))
    {
        if (album.tytul.empty()) break;

        getline(plik, album.wykonawca);

        getline(plik, line);
        album.liczbaUtworow = stoi(line);

        getline(plik, line);
        album.rok = stoi(line);

        getline(plik, line);
        album.liczbaPobran = stoi(line);

        plik.ignore(); // pomija pustą linię między rekordami
        albumy.push_back(album);
    }

    plik.close();
    return 0;
}

// Funkcja wyświetla wszystkie albumy
void wyswietl(const vector<Album>& albumy)
{
    for (const auto& album : albumy)
    {
        cout << "Wykonawca: " << album.wykonawca
             << ", Tytul: " << album.tytul
             << ", Rok: " << album.rok
             << ", Liczba utworow: " << album.liczbaUtworow
             << ", Liczba pobran: " << album.liczbaPobran
             << endl;
    }
}

// Funkcja zapisuje albumy do pliku
void zapisz(const vector<Album>& albumy, const string& nazwaPliku)
{
    ofstream plik(nazwaPliku);
    if (!plik.is_open())
    {
        cout << "Nie udalo sie otworzyc pliku do zapisu!" << endl;
        return;
    }

    for (const auto& album : albumy)
    {
        plik << album.tytul << endl;
        plik << album.wykonawca << endl;
        plik << album.liczbaUtworow << endl;
        plik << album.rok << endl;
        plik << album.liczbaPobran << endl;
        plik << endl; // pusty wiersz między rekordami
    }

    plik.close();
    cout << "Dane zapisane do pliku: " << nazwaPliku << endl;
}

int main()
{
    vector<Album> albumy;

    if (wczytaj(albumy) != 0)
        return 1;

    cout << "Wczytane albumy:" << endl;
    wyswietl(albumy);

    zapisz(albumy, "Output.txt");

    return 0;
}

// Otwieranie pliku do zapisu (nadpisuje zawartość)
// ofstream out("plik.txt");

// Otwieranie pliku do dopisywania
// ofstream out("plik.txt", ios::app);

// Otwieranie pliku do odczytu
// ifstream in("plik.txt");

// Otwieranie pliku do odczytu i zapisu jednocześnie
// fstream file("plik.txt", ios::in | ios::out);

// czy plik sie otworzyl
// if (!in.is_open()) {
//     cout << "Nie udalo sie otworzyc pliku!" << endl;
// }

// ofstream plik("plik.txt"); // otwarcie w trybie zapisu bez append
// plik.close();              // plik jest teraz pusty
