#include <iostream>

using namespace std;

int main()
{
	int liczba;
	cout << "podaj liczbe" << endl;
	cin >> liczba;

	for (int i = 2; i <= liczba / 2; i++)
	{
		if (liczba%i == 0)
		{
			cout << "to nie jest liczba pierwsza" << endl;
			return 0;
		}
	}
	cout << "to jest liczba pierwsza" << endl;
	return 0;
}
