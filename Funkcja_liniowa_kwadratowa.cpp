#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
	
	double a = 0;
	double b = 0;
	double c = 0;
	double x1 = 0;
	double x2 = 0;
	double x = 0;

	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj c: ";
	cin >> c;
	int delta = (b*b) - (4 * (a*c));
	cout << "Delta jest rowna: " << delta << endl;
	x = b / a;
	cout << endl;
	cout << "X dla rownania liniowego: " << x << endl;
	cout << endl;
	if ((a == 0) && (b == 0) && (c == 0))
		cout << "Tozsamosc ; x€R";
	else if ((a != 0) && (b != 0) && (c != 0))
	{
		if (delta < 0)
		{
			x1 = (-b + sqrt(-delta)) / 2 * a;
			x2 = (-b - sqrt(-delta)) / 2 * a;
			cout << "x1= " << x1 << "*i" << endl;
			cout << "x2= " << x2 << "*i" << endl;
			cout << "Sprzecznosc";
		}
		else if (delta == 0)
		{
			x1 = (-b / 2 * a);
			cout << "x= " << x1 << endl;
		}
		else if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / 2 * a;
			x2 = (-b - sqrt(delta)) / 2 * a;
			cout << "x1= " << x1 << endl;
			cout << "x2= " << x2 << endl;
		}
	}
	else if ((a != 0) && (b == 0) && (c == 0)) cout << "x=0";
	else if ((a != 0) && (b != 0) && (c == 0))
	{
		x1 = -b / a;
		cout << "x= " << x1 << endl;
	}
	else if ((a == 0) && (b != 0) && (c == 0)) cout << "x=0";
	else if ((a == 0) && (b != 0) && (c != 0))
	{
		x1 = -c / b;
		cout << "x= " << x1 << endl;
	}
	else if ((a != 0) && (b == 0) && (c != 0))
	{
		if ((a > 0) && (c > 0))
		{
			cout << "Sprzecznosc";
		}
		else if ((a > 0) && (c < 0))
		{
			x1 = sqrt(-c / a);
			x2 = -(sqrt(-c / a));
			cout << "x= " << x1 << endl;
			cout << "x= " << x2 << endl;
		}
		else if ((a < 0) && (c < 0))
		{
			cout << "Sprzecznosc";
		}
		else if ((a < 0) && (c > 0))
		{
			x1 = sqrt(c / -a);
			x2 = -(sqrt(c / -a));
			cout << "x= " << x1 << endl;
			cout << "x= " << x2 << endl;
		}
	}
	else if ((a == 0) && (b == 0) && (c != 0)) cout << "Sprzecznosc";
	return 0;
}
