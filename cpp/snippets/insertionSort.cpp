#include <iostream>
using namespace std;

void wypelnij(int tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 100;
    }
}

void wypisz(int tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n = 10;
    int tab[10];

    wypelnij(tab, n);
    cout << "Tablica przed sortowaniem: ";
    wypisz(tab, n);

    for (int i = 1; i < n; i++)
    {
        int klucz = tab[i];
        int j = i - 1;

        while (j >= 0 && tab[j] > klucz)
        {
            tab[j + 1] = tab[j];
            j--;
        }

        tab[j + 1] = klucz;
    }

    cout << "Tablica po sortowaniu: ";
    wypisz(tab, n);

    return 0;
}
