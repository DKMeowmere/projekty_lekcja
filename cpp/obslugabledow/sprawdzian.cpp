#include <iostream>
#include <stdexcept>
// Gupa A Pobierz liczbę parzystą nieujemną od użytkownika: jeżeli jest parzysta to jest dobrze i się wypisuje komunikat "JD". Jeżeli liczba jest ujemna błąd z odpowiednim komunikatem jest wyrzucany przez typ zmiennej. Jeżeli liczba jest nieparzysta błąd jest wyrzucany przy pomocy klasy exception. Jeżeli liczba jest niecałkowita błąd wyrzucany jest przy pomocy klasy  runtime_error.

using namespace std;

class MyException : public exception
{
public:
  const char *what() const noexcept override
  {
    return "liczba nie moze byc nieparzysta";
  }
};

class MyRuntimeError : public runtime_error
{
public:
  MyRuntimeError(const string &msg) : runtime_error(msg) {}
};

bool czyCalkowita(double liczba)
{
  if (liczba - (int)liczba == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  try
  {
    double liczba;
    cout << "Podaj liczbe:" << endl;
    cin >> liczba;

    if (liczba < 0)
    {
      throw liczba;
    }
    else if (czyCalkowita(liczba) == false)
    {
      throw MyRuntimeError("liczba musi byc calkowita");
    }
    else if ((int)liczba % 2 == 1)
    {
      throw MyException();
    }

    cout << "JD" << endl;
  }
  catch (double)
  {
    cout << "liczba nie moze byc ujemna" << endl;
  }
  catch (const runtime_error &e)
  {
    cout << e.what() << endl;
  }
  catch (const exception &e)
  {
    cout << e.what() << endl;
  }
  catch (...)
  {
    cout << "inny blad" << endl;
  }

  return 0;
}