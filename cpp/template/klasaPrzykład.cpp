#include <iostream>
using namespace std;
template < int ilosc, class typ >
class tablica_typu_int
{
public:
    typ zmienna[ ilosc ];
    int zmienna_zawierajaca_prawidlowa_ilosc;
    void uzupelnij( int ktora )
    {
        cin >> zmienna[ ktora ];
    }
    void pokaz( int ktora )
    {
        cout << zmienna[ ktora ] << endl;
    }
    int wielkosc()
    {
        return ilosc;
    }
    void nadaj_prawidlowa_ilosc()
    {
        zmienna_zawierajaca_prawidlowa_ilosc = ilosc;
    }
};
int main()
{
    tablica_typu_int < 21, char > nowa;
    nowa.nadaj_prawidlowa_ilosc();
    int a = 0;
    cout << "Nasza tablica to: " << nowa.wielkosc() << " elementow." << endl << endl;
    while( a < nowa.zmienna_zawierajaca_prawidlowa_ilosc )
    {
        nowa.uzupelnij( a );
        nowa.pokaz( a );
        cout << a << std::endl;
        a++;
    }
    cout << "Operacja ukończona - " << a << endl;
}