// NWD.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
int NWD(int a, int b)
{
	while (a != b)
	{
		if (a > b) a = a - b;

		else b = b - a;

	}
	return a;
}
int main()
{
	int a;
	int b;	
	cout << "wprowadz a i b" << endl;
	cin >> a;
	cin >> b;
	cout << "NWD= " << NWD(a, b) << endl;
	cout << "NWW= " << (a*b) / NWD(a, b) << endl;


	return 0;

}