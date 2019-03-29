#include <iostream>


using namespace std;

int main()
{
	double a[2], b[2], c[2];
	double wyzn, wyzn_x, wyzn_y;//jest to za pomoca wektorow ale z powodu ze sa tu tylko wektory 2x2 to odrazu przechodzimy do licznia wyznacznikow 

	cout << "podaj parametry peirwszego rowania w postaci a*X+b*Y=C" << endl;
	cout << "a=";
	cin >> a[0];
	cout << "b=";
	cin >> b[0];
	cout << "c=";
	cin >> c[0];

	cout << endl;

	cout << "podaj parametry drogiego rowania w postaci a*X+b*Y=C" << endl;
	cout << "a=";
	cin >> a[1];
	cout << "b=";
	cin >> b[1];
	cout << "c=";
	cin >> c[1];

	wyzn = (a[0] * b[1]) - (b[0] * a[1]);
	wyzn_x = (c[0] * b[1]) - (b[0] * c[1]);
	wyzn_y = (a[0] * c[1]) - (c[0] * a[1]);

	if (wyzn != 0)
	{
		cout << "jest to uklad oznaczony" << endl;
		cout << "x=" << wyzn_x / wyzn << endl;
		cout << "y=" << wyzn_y / wyzn << endl;
	}
	if (wyzn == 0 && wyzn_x == 0 && wyzn_y == 0)
	{
		cout << "jest to uklad nie oznaczny posiada on nieskoczenie wiele rozwiazan" << endl;
	}
	if (wyzn == 0 && (wyzn_x != 0 || wyzn_y != 0))
	{
		cout << "jest to uklad sprzeczy posiada on nieskocznenie wiele rozwiazan" << endl;
	}


	return 0;
}
