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

int wczytaj(vector<Album> &albumy)
{
  ifstream plik("Data.txt");

  if (!plik.is_open())
  {
    cout << "Nie udalo sie otworzyc pliku!" << endl;
    return 1;
  }

  Album album;

  while (getline(plik, album.tytul))
  {
    if (album.tytul.empty())
      break;
    getline(plik, album.wykonawca);

    string liczbaUtworowStr;
    getline(plik, liczbaUtworowStr);
    album.liczbaUtworow = stoi(liczbaUtworowStr);

    string rokStr;
    getline(plik, rokStr);
    album.rok = stoi(rokStr);

    string liczbaPobranStr;
    getline(plik, liczbaPobranStr);
    album.liczbaPobran = stoi(liczbaPobranStr);

    plik.ignore();
    albumy.push_back(album);
  }

  plik.close();
  return 0;
}

// **********************************************
// nazwa funkcji: wyswietl
// opis funkcji:  Funkcja wyswietla informacje o wszystkich albumach z wektora albumow
// parametry: <vector<Album> albumy> - wektor albumow do wyswietlenia
// zwracany typ i opis: void - funkcja nie zwraca zadnej wartosci
// autor: 000000000000
// ***********************************************

void wyswietl(vector<Album> albumy)
{
  for (int i = 0; i < albumy.size(); i++)
  {
    {
      Album album = albumy[i];
      cout << "Wykonawca: " << album.wykonawca << ", Tytul: " << album.tytul << ", Rok: " << album.rok << endl;
    }
  }
}

int main()
{
  vector<Album> albumy;

  int wynik = wczytaj(albumy);
  if (wynik != 0)
    return 1;

  wyswietl(albumy);

  return 0;
}