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

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (tab[j] < tab[minIndex])
            {
                minIndex = j;
            }
        }

        swap(tab[i], tab[minIndex]);
    }

    cout << "Tablica po sortowaniu: ";
    wypisz(tab, n);

    return 0;
}
