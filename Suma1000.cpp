#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Wprowadz a: " << endl;
	cin >> a;
	int suma = 0;
	while (a < 1000)
	{
		cout << "Wprowadz a wieksze od 1000" << endl;
		cin >> a;
	}
	for (int i = 1000; i < a+1; i++)
	{
		suma += i;
	}
	cout << "suma: " << suma;
	return 0;
}