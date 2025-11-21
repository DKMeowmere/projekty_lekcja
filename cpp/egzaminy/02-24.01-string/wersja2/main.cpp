#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class DzialanieNaStringach
{
    static wstring  samogloski ;


public:
    static int liczbaSamoglosek(wstring slowo)
    {
        int liczbaSamoglosek = 0;
        for (int i = 0; i < slowo.length(); i++)
        {
            for (int j = 0; j < samogloski.length(); j++)
            {
                if (samogloski[j] == slowo[i])
                {
                    liczbaSamoglosek++;
                }
            }
        }
        return liczbaSamoglosek;
    }
};
wstring DzialanieNaStringach:: samogloski = L"aąeęiouóyAĄEĘIOUÓY";
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout << DzialanieNaStringach::liczbaSamoglosek(L"bąkiPuszczaNikita")<<endl;
    
    return 0;
}