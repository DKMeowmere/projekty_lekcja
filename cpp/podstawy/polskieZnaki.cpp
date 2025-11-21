#include <iostream>
#include <windows.h>
#include <string>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string s;
    std::cout << "Podaj literę (np. ś): ";
    std::getline(std::cin, s);
    if (s=="ą")
    {
        std::cout << "Wczytano: " << s << "\n";
    }  
}