#include <iostream>
using namespace std;

int main()
{
	char letter;
	cout << "podaj litere, a ja powiem czy jest duza czy mala" << endl;
	cin >> letter;

	cout << "Podałeś " << letter << endl;
	if (int(letter) >= 65 && int(letter) <= 90)
	{
		cout << "litera jest duza" << endl;
	}
	else if (int(letter) >= 97 && int(letter) <= 122)
	{
		cout << "litera jest mala" << endl;
	}
	else
	{
		cout << "nie poprawna litera" << endl;
	}
	return 0;
}