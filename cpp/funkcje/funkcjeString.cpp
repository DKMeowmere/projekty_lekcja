#include <iostream>
#include <cctype>
using namespace std;

bool czyJestDuzaLitera(char c){
  if(c >= 65 || c <=90){
    return true;
  }

  return false;
}

int main()
{
  string napis;
  string zamienionyNapis;
  cout << "Podaj napis:" << endl;
  cin >> napis;
  int liczbaZnakowAlfabet;
  int liczbaMałychLiter;
  int liczbaDuzychLiter;
  int liczbaCyfr;
  int liczbaZnakowDrukowanych;
  int liczbaInterpunkcyjnych;
  int liczbaZnakowKontrol;

  for (int i = 0; i < napis.length(); i++)
  {
    if (islower(napis[i]))
    {
      liczbaMałychLiter++;
      zamienionyNapis += toupper(napis[i]);
    }
    else if (isupper(napis[i]))
    {
      liczbaDuzychLiter++;
      zamienionyNapis += tolower(napis[i]);
    }
    else
    {
      zamienionyNapis += napis[i];
    }

    if (isdigit(napis[i]))
    {
      liczbaCyfr++;
    }

    if (isprint(napis[i]))
    {
      liczbaZnakowDrukowanych++;
    }

    if (ispunct(napis[i]))
    {
      liczbaInterpunkcyjnych++;
    }

    if (iscntrl(napis[i]))
    {
      liczbaZnakowKontrol++;
    }
  }

  cout << "Jest znaków alfabetycznych:" << liczbaZnakowAlfabet << endl;
  cout << "Jest malych liter:" << liczbaMałychLiter << endl;
  cout << "Jest duzych liter:" << liczbaDuzychLiter << endl;
  cout << "Jest cyfr:" << liczbaCyfr << endl;
  cout << "Jest znakow drukowanych:" << liczbaZnakowDrukowanych << endl;
  cout << "Jest znakow interpunkcyjnych:" << liczbaInterpunkcyjnych << endl;
  cout << "Jest znakow kontrol:" << liczbaZnakowKontrol << endl;
  cout << "Zamieniony napis:" << zamienionyNapis << endl;

  return 0;
}
