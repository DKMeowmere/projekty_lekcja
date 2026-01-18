#include <iostream>
#include <vector>
using namespace std;

void wypelnij(vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = rand() % 100;
    }
}

void wypisz(const vector<int>& v)
{
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

int partition(vector<int>& v, int low, int high)
{
    int pivot = v[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (v[j] <= pivot)
        {
            i++;
            swap(v[i], v[j]);
        }
    }

    swap(v[i + 1], v[high]);
    return i + 1;
}

void quickSort(vector<int>& v, int low, int high)
{
    if (low < high)
    {
        int pi = partition(v, low, high);

        quickSort(v, low, pi - 1);
        quickSort(v, pi + 1, high);
    }
}

int main()
{
    int n = 10;
    vector<int> tab(n);

    wypelnij(tab);
    cout << "Tablica przed sortowaniem: ";
    wypisz(tab);

    quickSort(tab, 0, tab.size() - 1);

    cout << "Tablica po sortowaniu: ";
    wypisz(tab);

    return 0;
}
