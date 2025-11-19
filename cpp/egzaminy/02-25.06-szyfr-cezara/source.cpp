#include "source.h"

std::string szyfruj(std::string tekst, int klucz)
{
    std::string alfabet = "abcdefghijklmnopqrstuvwxyz";
    int n = alfabet.length();
    std::string szyfrowanyTekst = "";

    klucz = klucz % n;

    for (char c : tekst)
    {
        if (c == ' ')
        {
            szyfrowanyTekst += ' ';
            continue;
        }

        int index = (c - 'a' + klucz + n) % n;
        szyfrowanyTekst += alfabet[index];
    }

    return szyfrowanyTekst;
}
